
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {scalar_t__ status; int actual_length; int transfer_buffer; struct stir_cb* context; } ;
struct stir_cb {int thread; scalar_t__ receiving; TYPE_1__* netdev; int rx_time; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct stir_cb*,int ,int ) ;
 int FUNC_5 (struct urb*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct urb *VAR_1)
{
 struct stir_cb *VAR_2 = VAR_1->context;
 int VAR_3;


 if (!FUNC_2(VAR_2->netdev))
  return;


 if (VAR_1->status != 0)
  return;

 if (VAR_1->actual_length > 0) {
  FUNC_3("receive %d\n", VAR_1->actual_length);
  FUNC_4(VAR_2, VAR_1->transfer_buffer,
        VAR_1->actual_length);

  FUNC_1(&VAR_2->rx_time);
 }


 if (!VAR_2->receiving)
  return;


 VAR_3 = FUNC_5(VAR_1, VAR_0);


 if (VAR_3) {
  FUNC_0(&VAR_2->netdev->dev, "usb receive submit error: %d\n",
    VAR_3);
  VAR_2->receiving = 0;
  FUNC_6(VAR_2->thread);
 }
}
