
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *,int ,void (*) (int)) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;

int FUNC_5(void (*VAR_2)(int), int VAR_3) {
  pthread_t VAR_4;
  pthread_attr_t VAR_5;
  FUNC_1(&VAR_5);
  FUNC_2(&VAR_5, VAR_0);
  if (FUNC_3(&VAR_4, &VAR_5, VAR_1, VAR_2) != 0) {
    FUNC_4("failed to create timer thread");
    return -1;
  }

  FUNC_0(&VAR_5);
  return 0;
}
