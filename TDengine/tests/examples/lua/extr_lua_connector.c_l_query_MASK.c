
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
typedef char int64_t ;
struct TYPE_3__ {char* name; int type; } ;
typedef int ** TAOS_ROW ;
typedef int TAOS_RES ;
typedef TYPE_1__ TAOS_FIELD ;
typedef int TAOS ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,double) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 (int *,int) ;
 char* FUNC_9 (int *,int) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int *) ;
 char* FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (int *) ;
 int ** FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,char*) ;
 int * FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(lua_State *VAR_0){
  TAOS * VAR_1= FUNC_8(VAR_0,1);
  char *VAR_2 = FUNC_9(VAR_0, 2);
  TAOS_RES *VAR_3;
  FUNC_1(VAR_0);
  int VAR_4 = FUNC_0(VAR_0);


  if(FUNC_17(VAR_1, VAR_2)!=0){
    FUNC_10("failed, reason:%s\n", FUNC_12(VAR_1));
    FUNC_4(VAR_0, -1);
    FUNC_6(VAR_0, VAR_4, "code");
    FUNC_5(VAR_0, FUNC_12(VAR_1));
    FUNC_6(VAR_0, VAR_4, "error");

    return 1;

  }else{

    VAR_3 = FUNC_18(VAR_1);

    if (VAR_3 == ((void*)0)) {
      FUNC_10("failed to get result, reason:%s\n", FUNC_12(VAR_1));
      FUNC_4(VAR_0, -2);
      FUNC_6(VAR_0, VAR_4, "code");
      FUNC_5(VAR_0, FUNC_12(VAR_1));
      FUNC_6(VAR_0, VAR_4, "error");
      return 1;
    }

    TAOS_ROW VAR_5;
    int VAR_6 = 0;
    int VAR_7 = FUNC_15(VAR_1);
    TAOS_FIELD *VAR_8 = FUNC_13(VAR_3);
    char VAR_9[256];

    int VAR_10 = FUNC_11(VAR_1);

    FUNC_4(VAR_0, 0);
    FUNC_6(VAR_0, VAR_4, "code");
    FUNC_2(VAR_0, VAR_10);
    FUNC_6(VAR_0, VAR_4, "affected");
    FUNC_1(VAR_0);

    while ((VAR_5 = FUNC_14(VAR_3))) {

      VAR_6++;

      FUNC_4(VAR_0,VAR_6);
      FUNC_1(VAR_0);

      for (int VAR_11 = 0; VAR_11 < VAR_7; ++VAR_11) {
 if (VAR_5[VAR_11] == ((void*)0)) {
   continue;
 }

 FUNC_5(VAR_0,VAR_8[VAR_11].name);

 switch (VAR_8[VAR_11].type) {
 case 128:
   FUNC_2(VAR_0,*((char *)VAR_5[VAR_11]));
   break;
 case 130:
   FUNC_2(VAR_0,*((short *)VAR_5[VAR_11]));
   break;
 case 132:
   FUNC_2(VAR_0,*((int *)VAR_5[VAR_11]));
   break;
 case 137:
   FUNC_2(VAR_0,*((int64_t *)VAR_5[VAR_11]));
   break;
 case 133:
   FUNC_4(VAR_0,*((float *)VAR_5[VAR_11]));
   break;
 case 134:
   FUNC_4(VAR_0,*((double *)VAR_5[VAR_11]));
   break;
 case 136:
 case 131:
   FUNC_5(VAR_0,(char *)VAR_5[VAR_11]);
   break;
 case 129:
   FUNC_2(VAR_0,*((int64_t *)VAR_5[VAR_11]));
   break;
 case 135:
   FUNC_2(VAR_0,*((char *)VAR_5[VAR_11]));
   break;
 default:
   FUNC_3(VAR_0);
   break;
 }

 FUNC_7(VAR_0,-3);
      }

      FUNC_7(VAR_0,-3);
    }
    FUNC_16(VAR_3);
  }

  FUNC_6(VAR_0, VAR_4, "item");
  return 1;
}
