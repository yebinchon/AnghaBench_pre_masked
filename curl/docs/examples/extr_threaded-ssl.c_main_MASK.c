
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,int ,void*) ;
 int FUNC_5 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 char** VAR_4 ;

int FUNC_6(int VAR_5, char **VAR_6)
{
  pthread_t VAR_7[VAR_1];
  int VAR_8;
  (void)VAR_5;
  (void)VAR_6;


  FUNC_0(VAR_0);

  FUNC_2();

  for(VAR_8 = 0; VAR_8< VAR_1; VAR_8++) {
    int VAR_9 = FUNC_4(&VAR_7[VAR_8],
                               ((void*)0),
                               VAR_2,
                               (void *)VAR_4[VAR_8]);
    if(0 != VAR_9)
      FUNC_1(VAR_3, "Couldn't run thread number %d, errno %d\n", VAR_8, VAR_9);
    else
      FUNC_1(VAR_3, "Thread %d, gets %s\n", VAR_8, VAR_4[VAR_8]);
  }


  for(VAR_8 = 0; VAR_8< VAR_1; VAR_8++) {
    FUNC_5(VAR_7[VAR_8], ((void*)0));
    FUNC_1(VAR_3, "Thread %d terminated\n", VAR_8);
  }

  FUNC_3();

  return 0;
}
