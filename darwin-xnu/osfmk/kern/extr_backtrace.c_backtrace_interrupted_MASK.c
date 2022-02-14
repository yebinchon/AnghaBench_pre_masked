
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (uintptr_t*,int,void*) ;
 scalar_t__ FUNC_2 (uintptr_t*,uintptr_t*) ;
 scalar_t__ FUNC_3 () ;

uint32_t
FUNC_4(uintptr_t *VAR_2, uint32_t VAR_3)
{
 uintptr_t VAR_4;
 uintptr_t VAR_5;
 kern_return_t VAR_6;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 > 0);
 FUNC_0(FUNC_3() == VAR_1);

 VAR_6 = FUNC_2(&VAR_4, &VAR_5);
 if (VAR_6 != VAR_0) {
  return 0;
 }

 VAR_2[0] = VAR_4;
 if (VAR_3 == 1) {
  return 1;
 }

 return FUNC_1(VAR_2 + 1, VAR_3 - 1, (void *)VAR_5) + 1;
}
