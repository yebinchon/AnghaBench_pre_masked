
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {scalar_t__ status; scalar_t__ actual_length; int * transfer_buffer; struct ksdazzle_cb* context; } ;
struct net_device {int stats; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct ksdazzle_cb {int receiving; TYPE_1__ rx_unwrap_buff; struct net_device* netdev; } ;
typedef int __u8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,int *,TYPE_1__*,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_2)
{
 struct ksdazzle_cb *VAR_3 = VAR_2->context;
 struct net_device *VAR_4 = VAR_3->netdev;


 if (!FUNC_2(VAR_4)) {
  VAR_3->receiving = 0;
  return;
 }


 if (VAR_2->status != 0) {
  FUNC_1("ksdazzle_rcv_irq: urb asynchronously failed - %d",
      VAR_2->status);
  VAR_3->receiving = 0;
  return;
 }

 if (VAR_2->actual_length > 0) {
  __u8 *VAR_5 = VAR_2->transfer_buffer;
  unsigned int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_2->actual_length; VAR_6++) {
   FUNC_0(VAR_4, &VAR_4->stats,
       &VAR_3->rx_unwrap_buff, VAR_5[VAR_6]);
  }
  VAR_3->receiving =
      (VAR_3->rx_unwrap_buff.state != VAR_1) ? 1 : 0;
 }




 VAR_2->status = 0;
 FUNC_3(VAR_2, VAR_0);
}
