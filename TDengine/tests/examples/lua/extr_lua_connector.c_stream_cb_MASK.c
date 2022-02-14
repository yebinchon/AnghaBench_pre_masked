
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cb_param {int callback; int * state; } ;
typedef int lua_State ;
typedef char int64_t ;
struct TYPE_3__ {char* name; int type; } ;
typedef int ** TAOS_ROW ;
typedef int TAOS_RES ;
typedef TYPE_1__ TAOS_FIELD ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,double) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (char*) ;
 TYPE_1__* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(void *VAR_1, TAOS_RES *VAR_2, TAOS_ROW VAR_3){

  struct cb_param* VAR_4 = (struct cb_param*) VAR_1;
  TAOS_FIELD *VAR_5 = FUNC_9(VAR_2);
  int VAR_6 = FUNC_10(VAR_2);

  FUNC_8("\n\r-----------------------------------------------------------------------------------\n");



  lua_State *VAR_7 = VAR_4->state;
  FUNC_6(VAR_7, VAR_0, VAR_4->callback);

  FUNC_1(VAR_7);

  for (int VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {
    if (VAR_3[VAR_8] == ((void*)0)) {
      continue;
    }

    FUNC_5(VAR_7,VAR_5[VAR_8].name);

    switch (VAR_5[VAR_8].type) {
    case 128:
      FUNC_2(VAR_7,*((char *)VAR_3[VAR_8]));
      break;
    case 130:
      FUNC_2(VAR_7,*((short *)VAR_3[VAR_8]));
      break;
    case 132:
      FUNC_2(VAR_7,*((int *)VAR_3[VAR_8]));
      break;
    case 137:
      FUNC_2(VAR_7,*((int64_t *)VAR_3[VAR_8]));
      break;
    case 133:
      FUNC_4(VAR_7,*((float *)VAR_3[VAR_8]));
      break;
    case 134:
      FUNC_4(VAR_7,*((double *)VAR_3[VAR_8]));
      break;
    case 136:
    case 131:
      FUNC_5(VAR_7,(char *)VAR_3[VAR_8]);
      break;
    case 129:
      FUNC_2(VAR_7,*((int64_t *)VAR_3[VAR_8]));
      break;
    case 135:
      FUNC_2(VAR_7,*((char *)VAR_3[VAR_8]));
      break;
    default:
      FUNC_3(VAR_7);
      break;
    }

    FUNC_7(VAR_7, -3);
  }

  FUNC_0(VAR_7, 1, 0);

  FUNC_8("-----------------------------------------------------------------------------------\n\r");
}
