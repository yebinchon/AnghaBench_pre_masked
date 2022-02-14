
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucontext_t ;
typedef scalar_t__ cothread_t ;


 int * VAR_0 ;
 int FUNC_0 (int *,int *) ;

void FUNC_1(cothread_t VAR_1) {
  ucontext_t *VAR_2 = VAR_0;
  VAR_0 = (ucontext_t*)VAR_1;
  FUNC_0(VAR_2, VAR_0);
}
