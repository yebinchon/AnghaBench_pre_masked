
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx231xx {int devlist_count; int devlist; int * udev; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct cx231xx *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->udev == ((void*)0))
  return;

 if (FUNC_1(&VAR_1->devlist_count) > 0) {
  FUNC_3(&VAR_0);
  FUNC_2(&VAR_1->devlist);
  FUNC_0(&VAR_1->devlist_count);
  FUNC_4(&VAR_0);
 }
}
