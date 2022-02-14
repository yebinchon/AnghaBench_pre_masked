
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cnic_local {TYPE_1__* ethdev; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
struct TYPE_2__ {int drv_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct cnic_local*) ;
 int FUNC_1 (struct cnic_dev*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, void *VAR_2)
{
 struct cnic_dev *VAR_3 = VAR_1;
 struct cnic_local *VAR_4 = VAR_3->cnic_priv;

 if (!(VAR_4->ethdev->drv_state & VAR_0))
  FUNC_1(VAR_3);

 FUNC_0(VAR_4);

 return 0;
}
