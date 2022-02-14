
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int nType; int pz; int nLen; int dKey; int i64Key; } ;
typedef TYPE_1__ tVariant ;
typedef int int32_t ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (char*,int *,int) ;

void FUNC_6(tVariant *VAR_3, char *VAR_4, uint32_t VAR_5, uint32_t VAR_6) {
  switch (VAR_6) {
    case 133: {
      int32_t VAR_7 = FUNC_2(VAR_4, "true", 4);
      if (VAR_7 == 0) {
        VAR_3->i64Key = VAR_2;
      } else {
        FUNC_0(FUNC_2(VAR_4, "false", 5) == 0);
        VAR_3->i64Key = VAR_1;
      }
      break;
    }
    case 128:
    case 129:
    case 135:
    case 130:
      VAR_3->i64Key = FUNC_5(VAR_4, ((void*)0), 10);
      break;
    case 132:
    case 131:
      VAR_3->dKey = FUNC_4(VAR_4, ((void*)0));
      break;
    case 134: {
      VAR_3->pz = FUNC_3(VAR_4, VAR_5);
      VAR_3->nLen = FUNC_1(VAR_3->pz);
      break;
    }

    default: {
      VAR_6 = VAR_0;
    }
  }

  VAR_3->nType = VAR_6;
}
