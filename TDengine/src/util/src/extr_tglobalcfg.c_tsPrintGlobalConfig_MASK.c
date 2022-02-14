
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_3__ {int cfgType; int valType; size_t unitType; scalar_t__ ptr; int option; } ;
typedef TYPE_1__ SGlobalConfig ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int FUNC_0 (char*,char,int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_8 ;

void FUNC_5() {
  FUNC_1("   taos config & system info:");
  FUNC_1("==================================");

  for (int VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9) {
    SGlobalConfig *VAR_10 = VAR_5 + VAR_9;
    if (VAR_8 == 0 && !(VAR_10->cfgType & VAR_0)) continue;
    if (VAR_10->cfgType & VAR_3) continue;
    if (VAR_10->cfgType & VAR_2) {



    }
    if (VAR_10->cfgType & VAR_1) {

      continue;

    }

    int VAR_11 = (int)FUNC_2(VAR_10->option);
    int VAR_12 = VAR_4 - VAR_11;
    VAR_12 = VAR_12 < 0 ? 0 : VAR_12;

    char VAR_13[VAR_4];
    FUNC_0(VAR_13, ' ', VAR_4);
    VAR_13[VAR_12] = 0;

    switch (VAR_10->valType) {
      case 130:
        FUNC_1(" %s:%s%d%s", VAR_10->option, VAR_13, *((int16_t *)VAR_10->ptr), VAR_7[VAR_10->unitType]);
        break;
      case 132:
        FUNC_1(" %s:%s%d%s", VAR_10->option, VAR_13, *((int32_t *)VAR_10->ptr), VAR_7[VAR_10->unitType]);
        break;
      case 128:
        FUNC_1(" %s:%s%d%s", VAR_10->option, VAR_13, *((uint32_t *)VAR_10->ptr), VAR_7[VAR_10->unitType]);
        break;
      case 133:
        FUNC_1(" %s:%s%f%s", VAR_10->option, VAR_13, *((float *)VAR_10->ptr), VAR_7[VAR_10->unitType]);
        break;
      case 129:
      case 131:
      case 134:
        FUNC_1(" %s:%s%s%s", VAR_10->option, VAR_13, (char *)VAR_10->ptr, VAR_7[VAR_10->unitType]);
        break;
      default:
        break;
    }
  }

  FUNC_3();

  FUNC_4();

  FUNC_1("==================================");
}
