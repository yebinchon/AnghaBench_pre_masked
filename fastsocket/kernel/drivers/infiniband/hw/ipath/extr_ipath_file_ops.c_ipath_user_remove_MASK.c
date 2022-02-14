
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int user_dev; int user_cdev; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_5(struct ipath_devdata *VAR_4)
{
 FUNC_3(&VAR_4->user_cdev, &VAR_4->user_dev);

 if (FUNC_0(&VAR_0) == 0) {
  if (FUNC_1(&VAR_1) == 0)
   goto bail;

  FUNC_3(&VAR_2, &VAR_3);
  FUNC_4();

  FUNC_2(&VAR_1, 0);
 }
bail:
 return;
}
