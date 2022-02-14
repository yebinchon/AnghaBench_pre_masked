
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void *FUNC_6(void *VAR_6)
{
  int VAR_7 = *((int *)VAR_6);

  VAR_0; FUNC_0(FUNC_4(&VAR_3), "pthread_mutex_lock");
  VAR_2++;
  if(VAR_2 == VAR_1) {
    VAR_0; FUNC_0(FUNC_2(&VAR_5), "pthread_cond_signal");
  }
  VAR_0; FUNC_0(FUNC_3(&VAR_4, &VAR_3), "pthread_cond_wait");
  VAR_0; FUNC_0(FUNC_5(&VAR_3), "pthread_mutex_unlock");

  FUNC_1(VAR_7);
  return ((void*)0);
}
