
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum diag204_format { ____Placeholder_diag204_format } diag204_format ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (unsigned long,int ,int *) ;
 void* FUNC_2 () ;
 void* FUNC_3 (int) ;
 void* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void *FUNC_4(enum diag204_format VAR_6, int *VAR_7)
{
 if (VAR_4) {
  *VAR_7 = VAR_5;
  return VAR_4;
 }
 if (VAR_6 == VAR_2) {
  *VAR_7 = 1;
  return FUNC_2();
 } else {
  *VAR_7 = FUNC_1((unsigned long)VAR_3 |
     (unsigned long)VAR_1, 0, ((void*)0));
  if (*VAR_7 <= 0)
   return FUNC_0(-VAR_0);
  else
   return FUNC_3(*VAR_7);
 }
}
