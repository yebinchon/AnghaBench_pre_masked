
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_mutex_t ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned long (*) ()) ;
 int FUNC_2 (void (*) ()) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_5(void)
{
  int VAR_3;

  VAR_1 = (pthread_mutex_t *)FUNC_3(FUNC_0() *
                                                sizeof(pthread_mutex_t));
  for(VAR_3 = 0; VAR_3<FUNC_0(); VAR_3++) {
    FUNC_4(&(VAR_1[VAR_3]), ((void*)0));
  }

  FUNC_1((unsigned long (*)())VAR_2);
  FUNC_2((void (*)())VAR_0);
}
