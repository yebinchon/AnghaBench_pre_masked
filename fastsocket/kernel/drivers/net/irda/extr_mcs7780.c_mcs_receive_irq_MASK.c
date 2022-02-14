
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int actual_length; int* transfer_buffer; scalar_t__ status; struct mcs_cb* context; } ;
struct mcs_cb {int speed; int rx_time; int rx_buff; TYPE_1__* netdev; } ;
typedef int __u8 ;
struct TYPE_3__ {int stats; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mcs_cb*,int*,int) ;
 int FUNC_3 (struct mcs_cb*,int*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_1)
{
 __u8 *VAR_2;
 struct mcs_cb *VAR_3 = VAR_1->context;
 int VAR_4;
 int VAR_5;

 if (!FUNC_4(VAR_3->netdev))
  return;

 if (VAR_1->status)
  return;

 if (VAR_1->actual_length > 0) {
  VAR_2 = VAR_1->transfer_buffer;





  if(VAR_3->speed < 576000) {
   FUNC_0(VAR_3->netdev, &VAR_3->netdev->stats,
      &VAR_3->rx_buff, 0xc0);

   for (VAR_4 = 0; VAR_4 < VAR_1->actual_length; VAR_4++)
    FUNC_0(VAR_3->netdev, &VAR_3->netdev->stats,
       &VAR_3->rx_buff, VAR_2[VAR_4]);

   FUNC_0(VAR_3->netdev, &VAR_3->netdev->stats,
      &VAR_3->rx_buff, 0xc1);
  }

  else if(VAR_3->speed == 576000 || VAR_3->speed == 1152000) {
   FUNC_3(VAR_3, VAR_1->transfer_buffer,
    VAR_1->actual_length);
  }

  else {
   FUNC_2(VAR_3, VAR_1->transfer_buffer,
    VAR_1->actual_length);
  }
  FUNC_1(&VAR_3->rx_time);
 }

 VAR_5 = FUNC_5(VAR_1, VAR_0);
}
