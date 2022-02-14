
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ numOfCols; TYPE_1__* pFields; } ;
typedef TYPE_2__ tColModel ;
typedef int int8_t ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;
struct TYPE_5__ {int type; int bytes; } ;
typedef int SSrcColumnInfo ;


 char* FUNC_0 (char*,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int ,char*) ;

void FUNC_5(tColModel *VAR_0, void *VAR_1, int32_t VAR_2, int32_t VAR_3,
                        SSrcColumnInfo *VAR_4) {
  for (int32_t VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
    for (int32_t VAR_6 = 0; VAR_6 < VAR_0->numOfCols; ++VAR_6) {
      char *VAR_7 = FUNC_0((char *)VAR_1, VAR_0, VAR_3, VAR_5, VAR_6);

      FUNC_3("type:%d\t", VAR_0->pFields[VAR_6].type);

      switch (VAR_0->pFields[VAR_6].type) {
        case 137:
          FUNC_3("%lld\t", *(int64_t *)VAR_7);
          break;
        case 132:
          FUNC_3("%d\t", *(int32_t *)VAR_7);
          break;
        case 131: {
          char VAR_8[128] = {0};
          FUNC_4(VAR_7, VAR_0->pFields[VAR_6].bytes, VAR_8);
          FUNC_3("%s\t", VAR_8);
        }
        case 136: {
          FUNC_2(VAR_7, VAR_0->pFields[VAR_6].bytes, &VAR_4[VAR_6]);
          break;
        }
        case 134:
          FUNC_3("%lf\t", *(double *)VAR_7);
          break;
        case 129:
          FUNC_3("%lld\t", *(int64_t *)VAR_7);
          break;
        case 128:
          FUNC_3("%d\t", *(int8_t *)VAR_7);
          break;
        case 130:
          FUNC_3("%d\t", *(int16_t *)VAR_7);
          break;
        case 135:
          FUNC_3("%d\t", *(int8_t *)VAR_7);
          break;
        case 133:
          FUNC_3("%f\t", *(float *)VAR_7);
          break;
        default:
          FUNC_1(0);
      }
    }
    FUNC_3("\n");
  }
  FUNC_3("\n");
}
