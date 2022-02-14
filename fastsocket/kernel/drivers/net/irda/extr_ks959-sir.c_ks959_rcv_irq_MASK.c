
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {scalar_t__ status; scalar_t__ actual_length; int* transfer_buffer; struct ks959_cb* context; } ;
struct TYPE_5__ {scalar_t__ state; } ;
struct ks959_cb {int receiving; int rx_variable_xormask; TYPE_3__ rx_unwrap_buff; int rx_time; TYPE_1__* netdev; } ;
typedef int __u8 ;
struct TYPE_4__ {int stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,TYPE_3__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_2)
{
 struct ks959_cb *VAR_3 = VAR_2->context;
 int VAR_4;


 if (!FUNC_3(VAR_3->netdev)) {
  VAR_3->receiving = 0;
  return;
 }


 if (VAR_2->status != 0) {
  FUNC_2("kingsun_rcv_irq: urb asynchronously failed - %d",
      VAR_2->status);
  VAR_3->receiving = 0;
  return;
 }

 if (VAR_2->actual_length > 0) {
  __u8 *VAR_5 = VAR_2->transfer_buffer;
  unsigned int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_2->actual_length; VAR_6++) {




   VAR_3->rx_variable_xormask++;
   VAR_5[VAR_6] =
       VAR_5[VAR_6] ^ VAR_3->rx_variable_xormask ^ 0x55u;




   if (VAR_3->rx_variable_xormask != 0) {
    FUNC_0(VAR_3->netdev,
        &VAR_3->netdev->stats,
        &VAR_3->rx_unwrap_buff,
        VAR_5[VAR_6]);
   }
  }
  FUNC_1(&VAR_3->rx_time);
  VAR_3->receiving =
      (VAR_3->rx_unwrap_buff.state != VAR_1) ? 1 : 0;
 }






 VAR_2->status = 0;
 VAR_4 = FUNC_4(VAR_2, VAR_0);
}
