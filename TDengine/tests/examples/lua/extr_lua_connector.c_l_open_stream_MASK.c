
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_param {int callback; void* stream; int * state; } ;
typedef int lua_State ;
typedef int TAOS ;


 int VAR_0 ;
 int FUNC_0 (struct cb_param*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct cb_param*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int,char*) ;
 int * FUNC_9 (int *,int) ;
 char* FUNC_10 (int *,int) ;
 struct cb_param* FUNC_11 (int) ;
 int FUNC_12 (char*,char*) ;
 int VAR_1 ;
 char* FUNC_13 (int *) ;
 void* FUNC_14 (int *,char*,int ,int,struct cb_param*,int *) ;

__attribute__((used)) static int FUNC_15(lua_State *VAR_2){
  int VAR_3 = FUNC_2(VAR_2, VAR_0);
  TAOS * VAR_4 = FUNC_9(VAR_2,1);
  char * VAR_5 = FUNC_10(VAR_2,2);
  int VAR_6 = FUNC_1(VAR_2,3);

  FUNC_4(VAR_2);
  int VAR_7 = FUNC_3(VAR_2);

  struct cb_param *VAR_8 = FUNC_11(sizeof(struct cb_param));
  VAR_8->state = VAR_2;
  VAR_8->callback=VAR_3;

  void * VAR_9 = FUNC_14(VAR_4,VAR_5,VAR_1,VAR_6,VAR_8,((void*)0));
  if (VAR_9 == ((void*)0)) {
    FUNC_12("failed to open stream, reason:%s\n", FUNC_13(VAR_4));
    FUNC_0(VAR_8);
    FUNC_6(VAR_2, -1);
    FUNC_8(VAR_2, VAR_7, "code");
    FUNC_7(VAR_2, FUNC_13(VAR_4));
    FUNC_8(VAR_2, VAR_7, "error");
    FUNC_5(VAR_2,((void*)0));
    FUNC_8(VAR_2, VAR_7, "stream");
  }else{

    FUNC_6(VAR_2, 0);
    FUNC_8(VAR_2, VAR_7, "code");
    FUNC_7(VAR_2, FUNC_13(VAR_4));
    FUNC_8(VAR_2, VAR_7, "error");
    VAR_8->stream = VAR_9;
    FUNC_5(VAR_2,VAR_8);
    FUNC_8(VAR_2, VAR_7, "stream");
  }

  return 1;
}
