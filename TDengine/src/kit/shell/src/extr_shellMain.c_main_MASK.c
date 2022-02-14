
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int * VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int VAR_7 ;
 int FUNC_6 (int,char**,int *) ;
 int FUNC_7 (int ,struct sigaction*,int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(int VAR_8, char* VAR_9[]) {


  if (!FUNC_0()) {
    FUNC_1(VAR_0);
  }

  FUNC_6(VAR_8, VAR_9, &VAR_3);


  VAR_4 = FUNC_5(&VAR_3);
  if (VAR_4 == ((void*)0)) {
    FUNC_8(VAR_4);
    FUNC_1(VAR_0);
  }


  struct sigaction VAR_10;
  VAR_10.sa_handler = VAR_5;
  FUNC_7(VAR_2, &VAR_10, ((void*)0));
  FUNC_7(VAR_1, &VAR_10, ((void*)0));


  FUNC_4(VAR_4);


  while (1) {
    FUNC_2(&VAR_6, ((void*)0), VAR_7, VAR_4);
    FUNC_3(VAR_6, ((void*)0));
  }
  return 0;
}
