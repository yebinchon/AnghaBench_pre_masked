
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; } ;
struct ar9170 {int tx_anch_urbs; int tx_err; TYPE_1__* udev; int tx_anch; int tx_wait; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct urb*,int *) ;
 int FUNC_7 (struct urb*) ;
 struct urb* FUNC_8 (int *) ;
 int FUNC_9 (struct urb*,int ) ;
 int FUNC_10 (struct urb*) ;

__attribute__((used)) static void FUNC_11(struct ar9170 *VAR_2)
{
 struct urb *VAR_3;
 int VAR_4;

 if (FUNC_1(&VAR_2->tx_anch_urbs) > VAR_0)
  goto err_acc;

 VAR_3 = FUNC_8(&VAR_2->tx_wait);
 if (!VAR_3)
  goto err_acc;

 FUNC_6(VAR_3, &VAR_2->tx_anch);

 VAR_4 = FUNC_9(VAR_3, VAR_1);
 if (FUNC_5(VAR_4)) {
  if (FUNC_4()) {
   FUNC_2(&VAR_2->udev->dev, "tx submit failed (%d)\n",
    VAR_3->status);
  }

  FUNC_10(VAR_3);
  FUNC_6(VAR_3, &VAR_2->tx_err);
 }

 FUNC_7(VAR_3);

 if (FUNC_3(VAR_4 == 0))
  return;

err_acc:
 FUNC_0(&VAR_2->tx_anch_urbs);
}
