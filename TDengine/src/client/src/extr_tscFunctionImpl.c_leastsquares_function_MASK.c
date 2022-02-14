
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef float int8_t ;
typedef float int64_t ;
typedef size_t int32_t ;
typedef float int16_t ;
struct TYPE_14__ {double** mat; double startVal; size_t num; } ;
struct TYPE_13__ {int inputType; size_t size; TYPE_1__* param; int hasNull; } ;
struct TYPE_12__ {int hasResult; TYPE_4__* interResultBuf; } ;
struct TYPE_11__ {double dKey; } ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;
typedef TYPE_4__ SLeastsquareInfo ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_3__*) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,double**,double,...) ;
 int FUNC_3 (TYPE_3__*,size_t,int) ;






 int FUNC_4 (size_t*,int) ;

__attribute__((used)) static void FUNC_5(SQLFunctionCtx *VAR_1) {
  SResultInfo * VAR_2 = FUNC_1(VAR_1);
  SLeastsquareInfo *VAR_3 = VAR_2->interResultBuf;

  double(*VAR_4)[3] = VAR_3->mat;
  double VAR_5 = VAR_3->startVal;

  void *VAR_6 = FUNC_0(VAR_1);

  int32_t VAR_7 = 0;
  switch (VAR_1->inputType) {
    case 130: {
      int32_t *VAR_8 = VAR_6;

      for (int32_t VAR_9 = 0; VAR_9 < VAR_1->size; ++VAR_9) {
        if (VAR_1->hasNull && FUNC_4(VAR_8, VAR_1->inputType)) {
          continue;
        }

        VAR_4[0][0] += VAR_5 * VAR_5;
        VAR_4[0][1] += VAR_5;
        VAR_4[0][2] += VAR_5 * VAR_8[VAR_9];
        VAR_4[1][2] += VAR_8[VAR_9];

        VAR_5 += VAR_1->param[1].dKey;
        VAR_7++;
      }
      break;
    };
    case 133: {
      int64_t *VAR_10 = VAR_6;
      FUNC_2(VAR_1, VAR_4, VAR_5, VAR_10, VAR_1->inputType, VAR_7, VAR_1->param[1].dKey);
      break;
    };
    case 132: {
      double *VAR_11 = VAR_6;
      FUNC_2(VAR_1, VAR_4, VAR_5, VAR_11, VAR_1->inputType, VAR_7, VAR_1->param[1].dKey);
      break;
    };
    case 131: {
      float *VAR_12 = VAR_6;
      FUNC_2(VAR_1, VAR_4, VAR_5, VAR_12, VAR_1->inputType, VAR_7, VAR_1->param[1].dKey);
      break;
    };
    case 129: {
      int16_t *VAR_13 = VAR_6;
      FUNC_2(VAR_1, VAR_4, VAR_5, VAR_13, VAR_1->inputType, VAR_7, VAR_1->param[1].dKey);
      break;
    };
    case 128: {
      int8_t *VAR_14 = VAR_6;
      FUNC_2(VAR_1, VAR_4, VAR_5, VAR_14, VAR_1->inputType, VAR_7, VAR_1->param[1].dKey);
      break;
    };
  }

  VAR_3->startVal = VAR_5;
  VAR_3->num += VAR_7;

  if (VAR_3->num > 0) {
    VAR_2->hasResult = VAR_0;
  }

  FUNC_3(VAR_1, VAR_7, 1);
}
