
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int VAR_6 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ,int ,int*) ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (int,char*,int) ;

int
FUNC_14(char *VAR_7)
{
 int VAR_8[2];
 int VAR_9;
 pid_t VAR_10;
 char VAR_11[10];





 FUNC_0(FUNC_11(VAR_0, VAR_5, 0, VAR_8),
    ((void*)0));





 FUNC_0(FUNC_8(), ((void*)0));


 FUNC_0(VAR_9 = FUNC_5(VAR_7, VAR_1), ((void*)0));

 FUNC_0(VAR_10 = FUNC_3(), ((void*)0));

 if (VAR_10 == 0) {
  int VAR_12;
  char VAR_13[10];

  FUNC_0(FUNC_1(VAR_8[0]), ((void*)0));
  FUNC_0(FUNC_1(VAR_9), ((void*)0));


  FUNC_0(FUNC_7(0, 0), ((void*)0));

  FUNC_0(VAR_12 = FUNC_5(VAR_7, VAR_1),
      ((void*)0));


  FUNC_13(VAR_8[1], "done", sizeof("done"));


  FUNC_6(VAR_8[1], VAR_13, sizeof(VAR_13));
  FUNC_9(VAR_2, VAR_6);
  (void)FUNC_6(VAR_12, VAR_13, sizeof(VAR_13));




  FUNC_2(0);
 }

 FUNC_0(FUNC_1(VAR_8[1]), ((void*)0));


 FUNC_0(FUNC_6(VAR_8[0], VAR_11, sizeof(VAR_11)), ((void*)0));
 FUNC_0(FUNC_12(VAR_9, VAR_10), ((void*)0));


 FUNC_0(FUNC_13(VAR_8[0], "done", sizeof("done")), ((void*)0));






 FUNC_10(1);
 FUNC_9(VAR_3, VAR_4);
 FUNC_0(FUNC_12(VAR_9, FUNC_4()), ((void*)0));

 return (0);
}
