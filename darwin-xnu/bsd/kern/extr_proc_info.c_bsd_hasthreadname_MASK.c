
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uthread {scalar_t__ pth_name; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;

boolean_t
FUNC_0(void *VAR_2)
{
 struct uthread *VAR_3 = (struct uthread*)VAR_2;


 if (VAR_3->pth_name) {
  return VAR_1;
 } else {
  return VAR_0;
 }
}
