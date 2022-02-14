
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

int FUNC_7() {
  FUNC_5(&VAR_1);

  if (VAR_3 > VAR_4 && VAR_2 == 0) {
    VAR_2 = 1;

    FUNC_0("open new log file ......");
    pthread_t VAR_6;
    pthread_attr_t VAR_7;
    FUNC_2(&VAR_7);
    FUNC_3(&VAR_7, VAR_0);

    FUNC_4(&VAR_6, &VAR_7, VAR_5, ((void*)0));
    FUNC_1(&VAR_7);
  }

  FUNC_6(&VAR_1);

  return 0;
}
