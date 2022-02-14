
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct initurl {char* url; int threadno; int * share; } ;
typedef int pthread_t ;
typedef int CURLSH ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_7 ;
 int FUNC_8 (int *,int *,int ,struct initurl*) ;
 int FUNC_9 (int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_10(void)
{
  pthread_t VAR_11[VAR_5];
  int VAR_12;
  CURLSH *VAR_13;
  struct initurl VAR_14[VAR_5];


  FUNC_1(VAR_3);

  VAR_13 = FUNC_3();
  FUNC_4(VAR_13, VAR_0, VAR_7);
  FUNC_4(VAR_13, VAR_2, VAR_10);
  FUNC_4(VAR_13, VAR_1, VAR_4);

  FUNC_6();

  for(VAR_12 = 0; VAR_12< VAR_5; VAR_12++) {
    int VAR_15;
    VAR_14[VAR_12].url = VAR_6;
    VAR_14[VAR_12].share = VAR_13;
    VAR_14[VAR_12].threadno = VAR_12;
    VAR_15 = FUNC_8(&VAR_11[VAR_12], ((void*)0), VAR_8, &VAR_14[VAR_12]);
    if(0 != VAR_15)
      FUNC_5(VAR_9, "Couldn't run thread number %d, errno %d\n", VAR_12, VAR_15);
    else
      FUNC_5(VAR_9, "Thread %d, gets %s\n", VAR_12, VAR_6);
  }


  for(VAR_12 = 0; VAR_12< VAR_5; VAR_12++) {
    FUNC_9(VAR_11[VAR_12], ((void*)0));
    FUNC_5(VAR_9, "Thread %d terminated\n", VAR_12);
  }

  FUNC_7();

  FUNC_2(VAR_13);
  FUNC_0();
  return 0;
}
