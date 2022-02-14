
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cothread_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ,void*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

cothread_t FUNC_3(unsigned int VAR_2, void (*VAR_3)(void)) {
  if(!VAR_0) {
    FUNC_0(0);
    VAR_0 = FUNC_2();
  }
  return (cothread_t)FUNC_1(VAR_2, VAR_1, (void*)VAR_3);
}
