
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ptr; } ;
struct clockdomain {TYPE_1__ pwrdm; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct clockdomain *VAR_1)
{
 if (VAR_1 != ((void*)0) && VAR_1->pwrdm.ptr != ((void*)0)) {
  FUNC_1(VAR_1->pwrdm.ptr);
  return FUNC_0(VAR_1->pwrdm.ptr);
 }

 return -VAR_0;
}
