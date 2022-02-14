
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef double int8_t ;
typedef double int64_t ;
typedef scalar_t__ int32_t ;
typedef double int16_t ;
struct TYPE_14__ {int (* xFunction ) (TYPE_3__*) ;} ;
struct TYPE_11__ {scalar_t__ numOfTagCols; TYPE_3__** pTagCtxList; } ;
struct TYPE_13__ {scalar_t__ size; TYPE_1__ tagInfo; } ;
struct TYPE_12__ {int superTableQ; } ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;


 char VAR_0 ;
 int FUNC_0 (TYPE_3__*,double,double,scalar_t__,int) ;
 double FUNC_1 (char*) ;
 float FUNC_2 (char*) ;
 char* FUNC_3 (TYPE_3__*,scalar_t__) ;
 double FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 double FUNC_6 (char*) ;
 double FUNC_7 (char*) ;
 TYPE_2__* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 () ;






 size_t VAR_1 ;
 TYPE_6__* VAR_2 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int VAR_3 ;

__attribute__((used)) static int32_t FUNC_12(SQLFunctionCtx *VAR_4, int32_t VAR_5, char *VAR_6, bool VAR_7) {
  int32_t VAR_8 = 0;

  FUNC_9();

  SResultInfo *VAR_9 = FUNC_8(VAR_4);
  FUNC_10(VAR_9->superTableQ);

  for (int32_t VAR_10 = 0; VAR_10 < VAR_4->size; ++VAR_10) {
    char *VAR_11 = FUNC_3(VAR_4, VAR_10);
    if (VAR_11[VAR_5] != VAR_0) {
      continue;
    }

    switch (VAR_3) {
      case 128: {
        int8_t VAR_12 = FUNC_7(VAR_11);
        FUNC_0(VAR_4, *(int8_t *)VAR_6, VAR_12, VAR_8, VAR_7);
        break;
      };
      case 129: {
        int16_t VAR_13 = FUNC_4(VAR_11);
        FUNC_0(VAR_4, *(int16_t *)VAR_6, VAR_13, VAR_8, VAR_7);
        break;
      }
      case 130: {
        int32_t VAR_14 = FUNC_5(VAR_11);
        if ((*(int32_t *)VAR_6 < VAR_14) ^ VAR_7) {
          *(int32_t *)VAR_6 = VAR_14;

          for (int32_t VAR_15 = 0; VAR_15 < VAR_4->tagInfo.numOfTagCols; ++VAR_15) {
            SQLFunctionCtx *VAR_16 = VAR_4->tagInfo.pTagCtxList[VAR_15];
            VAR_2[VAR_1].xFunction(VAR_16);
          }

          VAR_8++;
        }
        break;
      }
      case 131: {
        float VAR_17 = FUNC_2(VAR_11);
        FUNC_0(VAR_4, *(float *)VAR_6, VAR_17, VAR_8, VAR_7);
        break;
      }
      case 132: {
        double VAR_18 = FUNC_1(VAR_11);
        FUNC_0(VAR_4, *(double *)VAR_6, VAR_18, VAR_8, VAR_7);
        break;
      }
      case 133: {
        int64_t VAR_19 = FUNC_6(VAR_11);
        FUNC_0(VAR_4, *(int64_t *)VAR_6, VAR_19, VAR_8, VAR_7);
        break;
      };
      default:
        break;
    }
  }

  return VAR_8;
}
