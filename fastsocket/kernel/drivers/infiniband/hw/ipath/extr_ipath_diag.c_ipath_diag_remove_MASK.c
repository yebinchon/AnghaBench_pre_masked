
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int diag_dev; int diag_cdev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct ipath_devdata *VAR_3)
{
 if (FUNC_0(&VAR_1))
  FUNC_1(&VAR_0, &VAR_2);

 FUNC_1(&VAR_3->diag_cdev, &VAR_3->diag_dev);
}
