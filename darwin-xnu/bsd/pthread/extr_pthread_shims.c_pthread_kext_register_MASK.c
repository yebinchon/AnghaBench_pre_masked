
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * pthread_functions_t ;
typedef int * pthread_callbacks_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int * VAR_1 ;

void
FUNC_1(pthread_functions_t VAR_2, pthread_callbacks_t *VAR_3)
{
 if (VAR_1 != ((void*)0)) {
  FUNC_0("Re-initialisation of pthread kext callbacks.");
 }

 if (VAR_3 != ((void*)0)) {
  *VAR_3 = &VAR_0;
 } else {
  FUNC_0("pthread_kext_register called without callbacks pointer.");
 }

 if (VAR_2) {
  VAR_1 = VAR_2;
 }
}
