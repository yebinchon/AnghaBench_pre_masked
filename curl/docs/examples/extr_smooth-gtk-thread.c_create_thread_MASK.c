
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int VAR_1 ;
 int FUNC_6 (int *,int *,int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 char** VAR_4 ;

void *FUNC_8(void *VAR_5)
{
  pthread_t VAR_6[VAR_0];
  int VAR_7;


  for(VAR_7 = 0; VAR_7 < VAR_0 && VAR_7 < VAR_1 ; VAR_7++) {
    int VAR_8 = FUNC_6(&VAR_6[VAR_7],
                               ((void*)0),
                               VAR_2,
                               ((void*)0));
    if(0 != VAR_8)
      FUNC_2(VAR_3, "Couldn't run thread number %d, errno %d\n", VAR_7, VAR_8);
    else
      FUNC_2(VAR_3, "Thread %d, gets %s\n", VAR_7, VAR_4[VAR_7]);
  }


  for(VAR_7 = 0; VAR_7 < VAR_0 && VAR_7 < VAR_1; VAR_7++) {
    FUNC_7(VAR_6[VAR_7], ((void*)0));
    FUNC_2(VAR_3, "Thread %d terminated\n", VAR_7);
  }



  FUNC_4(FUNC_0(FUNC_3(FUNC_1(VAR_5),
                                                    "pulse_id")));


  FUNC_5(VAR_5);





  return ((void*)0);

}
