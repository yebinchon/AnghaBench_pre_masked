
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_13__ {int pHisto; } ;
struct TYPE_12__ {scalar_t__ size; scalar_t__ hasNull; int inputType; } ;
struct TYPE_11__ {int hasResult; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;
typedef TYPE_3__ SAPercentileInfo ;


 int VAR_0 ;
 double FUNC_0 (char*) ;
 double FUNC_1 (char*) ;
 char* FUNC_2 (TYPE_2__*,scalar_t__) ;
 double FUNC_3 (char*) ;
 double FUNC_4 (char*) ;
 double FUNC_5 (char*) ;
 double FUNC_6 (char*) ;
 TYPE_1__* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,int) ;





 int FUNC_9 (int) ;
 TYPE_3__* FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (char*,int ) ;
 int FUNC_12 (int *,double) ;

__attribute__((used)) static void FUNC_13(SQLFunctionCtx *VAR_1) {
  int32_t VAR_2 = 0;

  SResultInfo * VAR_3 = FUNC_7(VAR_1);
  SAPercentileInfo *VAR_4 = FUNC_10(VAR_1);

  for (int32_t VAR_5 = 0; VAR_5 < VAR_1->size; ++VAR_5) {
    char *VAR_6 = FUNC_2(VAR_1, VAR_5);
    if (VAR_1->hasNull && FUNC_11(VAR_6, VAR_1->inputType)) {
      continue;
    }

    VAR_2 += 1;
    double VAR_7 = 0;

    switch (VAR_1->inputType) {
      case 128:
        VAR_7 = FUNC_6(VAR_6);
        break;
      case 129:
        VAR_7 = FUNC_3(VAR_6);
        break;
      case 132:
        VAR_7 = FUNC_5(VAR_6);
        break;
      case 130:
        VAR_7 = FUNC_1(VAR_6);
        break;
      case 131:
        VAR_7 = FUNC_0(VAR_6);
        break;
      default:
        VAR_7 = FUNC_4(VAR_6);
        break;
    }

    FUNC_12(&VAR_4->pHisto, VAR_7);
  }

  if (!VAR_1->hasNull) {
    FUNC_9(VAR_1->size == VAR_2);
  }

  FUNC_8(VAR_1, VAR_2, 1);

  if (VAR_2 > 0) {
    VAR_3->hasResult = VAR_0;
  }
}
