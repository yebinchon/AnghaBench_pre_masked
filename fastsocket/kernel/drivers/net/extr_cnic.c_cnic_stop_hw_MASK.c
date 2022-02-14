
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cnic_local {int (* stop_hw ) (struct cnic_dev*) ;int * ulp_ops; TYPE_2__* ethdev; int (* stop_cm ) (struct cnic_dev*) ;TYPE_1__* udev; } ;
struct cnic_dev {int pcidev; int flags; struct cnic_local* cnic_priv; } ;
struct TYPE_4__ {int drv_state; } ;
struct TYPE_3__ {int uio_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct cnic_dev*) ;
 int FUNC_2 (struct cnic_dev*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct cnic_dev*) ;
 int FUNC_7 (struct cnic_dev*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct cnic_dev *VAR_3)
{
 if (FUNC_9(VAR_1, &VAR_3->flags)) {
  struct cnic_local *VAR_4 = VAR_3->cnic_priv;
  int VAR_5 = 0;




  while (VAR_4->udev && VAR_4->udev->uio_dev != -1 && VAR_5 < 15) {
   FUNC_3(100);
   VAR_5++;
  }
  FUNC_2(VAR_3);
  VAR_4->stop_cm(VAR_3);
  VAR_4->ethdev->drv_state &= ~VAR_0;
  FUNC_0(VAR_1, &VAR_3->flags);
  FUNC_5(VAR_4->ulp_ops[VAR_2], ((void*)0));
  FUNC_8();
  FUNC_1(VAR_3);
  VAR_4->stop_hw(VAR_3);
  FUNC_4(VAR_3->pcidev);
 }
}
