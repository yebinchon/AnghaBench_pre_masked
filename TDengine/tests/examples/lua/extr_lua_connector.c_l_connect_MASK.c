
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int TAOS ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int,char*) ;
 char* FUNC_7 (int *,int) ;
 int FUNC_8 (char*,...) ;
 int * FUNC_9 (char*,char*,char*,char*,int) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(lua_State *VAR_0){
  TAOS * VAR_1;
  char *VAR_2 = FUNC_7(VAR_0, 1);
  char *VAR_3 = FUNC_7(VAR_0, 2);
  char *VAR_4 = FUNC_7(VAR_0, 3);
  char *VAR_5 = FUNC_7(VAR_0, 4);
  int VAR_6 =FUNC_0(VAR_0, 5);
  FUNC_11();

  FUNC_2(VAR_0);
  int VAR_7 = FUNC_1(VAR_0);

  VAR_1 = FUNC_9(VAR_2, VAR_3,VAR_4,VAR_5, VAR_6);
  if (VAR_1 == ((void*)0)) {
    FUNC_8("failed to connect server, reason:%s\n", FUNC_10(VAR_1));

    FUNC_4(VAR_0, -1);
    FUNC_6(VAR_0, VAR_7, "code");
    FUNC_5(VAR_0, FUNC_10(VAR_1));
    FUNC_6(VAR_0, VAR_7, "error");
    FUNC_3(VAR_0,((void*)0));
    FUNC_6(VAR_0, VAR_7, "conn");
  }else{
    FUNC_8("success to connect server\n");
    FUNC_4(VAR_0, 0);
    FUNC_6(VAR_0, VAR_7, "code");
    FUNC_5(VAR_0, FUNC_10(VAR_1));
    FUNC_6(VAR_0, VAR_7, "error");
    FUNC_3(VAR_0,VAR_1);
    FUNC_6(VAR_0, VAR_7, "conn");
  }

  return 1;
}
