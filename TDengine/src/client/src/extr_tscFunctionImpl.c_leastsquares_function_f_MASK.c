
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef double int8_t ;
typedef double int64_t ;
typedef double int32_t ;
typedef double int16_t ;
struct TYPE_13__ {double** mat; scalar_t__ num; int startVal; } ;
struct TYPE_12__ {int inputType; TYPE_1__* param; scalar_t__ hasNull; } ;
struct TYPE_11__ {int hasResult; TYPE_4__* interResultBuf; } ;
struct TYPE_10__ {int dKey; } ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;
typedef TYPE_4__ SLeastsquareInfo ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_3__*,double) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (double**,int ,...) ;
 int FUNC_3 (TYPE_3__*,int,int) ;






 scalar_t__ FUNC_4 (void*,int ) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(SQLFunctionCtx *VAR_1, int32_t VAR_2) {
  void *VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_1->hasNull && FUNC_4(VAR_3, VAR_1->inputType)) {
    return;
  }

  SResultInfo * VAR_4 = FUNC_1(VAR_1);
  SLeastsquareInfo *VAR_5 = VAR_4->interResultBuf;

  double(*VAR_6)[3] = VAR_5->mat;

  switch (VAR_1->inputType) {
    case 130: {
      int32_t *VAR_7 = VAR_3;
      FUNC_2(VAR_6, VAR_5->startVal, VAR_7, VAR_2, VAR_1->param[1].dKey);
      break;
    };
    case 128: {
      int8_t *VAR_8 = VAR_3;
      FUNC_2(VAR_6, VAR_5->startVal, VAR_8, VAR_2, VAR_1->param[1].dKey);
      break;
    }
    case 129: {
      int16_t *VAR_9 = VAR_3;
      FUNC_2(VAR_6, VAR_5->startVal, VAR_9, VAR_2, VAR_1->param[1].dKey);
      break;
    }
    case 133: {
      int64_t *VAR_10 = VAR_3;
      FUNC_2(VAR_6, VAR_5->startVal, VAR_10, VAR_2, VAR_1->param[1].dKey);
      break;
    }
    case 131: {
      float *VAR_11 = VAR_3;
      FUNC_2(VAR_6, VAR_5->startVal, VAR_11, VAR_2, VAR_1->param[1].dKey);
      break;
    }
    case 132: {
      double *VAR_12 = VAR_3;
      FUNC_2(VAR_6, VAR_5->startVal, VAR_12, VAR_2, VAR_1->param[1].dKey);
      break;
    }
    default:
      FUNC_5("error data type in leastsquare function:%d", VAR_1->inputType);
  };

  FUNC_3(VAR_1, 1, 1);
  VAR_5->num += 1;

  if (VAR_5->num > 0) {
    VAR_4->hasResult = VAR_0;
  }
}
