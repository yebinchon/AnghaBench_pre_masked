
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_13__ {int pHisto; } ;
struct TYPE_12__ {int inputType; scalar_t__ hasNull; } ;
struct TYPE_11__ {int hasResult; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;
typedef TYPE_3__ SAPercentileInfo ;


 int VAR_0 ;
 double FUNC_0 (void*) ;
 double FUNC_1 (void*) ;
 void* FUNC_2 (TYPE_2__*,int ) ;
 double FUNC_3 (void*) ;
 double FUNC_4 (void*) ;
 double FUNC_5 (void*) ;
 double FUNC_6 (void*) ;
 TYPE_1__* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int,int) ;





 TYPE_3__* FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (void*,int ) ;
 int FUNC_11 (int *,double) ;

__attribute__((used)) static void FUNC_12(SQLFunctionCtx *VAR_1, int32_t VAR_2) {
  void *VAR_3 = FUNC_2(VAR_1, VAR_2);
  if (VAR_1->hasNull && FUNC_10(VAR_3, VAR_1->inputType)) {
    return;
  }

  SResultInfo * VAR_4 = FUNC_7(VAR_1);
  SAPercentileInfo *VAR_5 = FUNC_9(VAR_1);

  double VAR_6 = 0;
  switch (VAR_1->inputType) {
    case 128:
      VAR_6 = FUNC_6(VAR_3);
      break;
    case 129:
      VAR_6 = FUNC_3(VAR_3);
      break;
    case 132:
      VAR_6 = FUNC_5(VAR_3);
      break;
    case 130:
      VAR_6 = FUNC_1(VAR_3);
      break;
    case 131:
      VAR_6 = FUNC_0(VAR_3);
      break;
    default:
      VAR_6 = FUNC_4(VAR_3);
      break;
  }

  FUNC_11(&VAR_5->pHisto, VAR_6);

  FUNC_8(VAR_1, 1, 1);
  VAR_4->hasResult = VAR_0;
}
