
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_19__ ;


typedef scalar_t__ int64_t ;
typedef size_t int32_t ;
struct TYPE_26__ {size_t numOfNullPoints; int member_0; } ;
struct TYPE_25__ {size_t numOfOutputCols; TYPE_2__* pSelectExpr; int precision; int intervalTimeUnit; int nAggTimeInterval; int ekey; int skey; } ;
struct TYPE_24__ {int scanFlag; int blockStatus; TYPE_4__* pQuery; int * pCtx; } ;
struct TYPE_22__ {size_t functionId; } ;
struct TYPE_23__ {TYPE_1__ pBase; } ;
struct TYPE_21__ {int (* xFunction ) (int *) ;} ;
typedef int TSKEY ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;
typedef int SQLFunctionCtx ;
typedef TYPE_5__ SField ;
typedef int SBlockInfo ;
typedef int SArithmeticSupport ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 TYPE_19__* VAR_0 ;
 int * FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,size_t) ;
 char* FUNC_3 (TYPE_3__*,char*,int *,size_t,size_t,int) ;
 TYPE_5__* FUNC_4 (TYPE_4__*,int *,TYPE_5__*,size_t) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,size_t,int *,TYPE_5__*,int) ;
 int FUNC_7 (TYPE_4__*,int *,scalar_t__,char*,char*,size_t,size_t,TYPE_5__*,int,int ,int *,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_12(SQueryRuntimeEnv *VAR_1, int32_t VAR_2, TSKEY *VAR_3,
                                          char *VAR_4, SField *VAR_5, SBlockInfo *VAR_6, bool VAR_7) {
  SQLFunctionCtx *VAR_8 = VAR_1->pCtx;
  SQuery * VAR_9 = VAR_1->pQuery;

  int64_t VAR_10 = FUNC_5(VAR_1);

  SArithmeticSupport *VAR_11 = FUNC_1((size_t)VAR_9->numOfOutputCols, sizeof(SArithmeticSupport));

  for (int32_t VAR_12 = 0; VAR_12 < VAR_9->numOfOutputCols; ++VAR_12) {
    int32_t VAR_13 = VAR_9->pSelectExpr[VAR_12].pBase.functionId;




    SField VAR_14 = {0};

    bool VAR_15 = FUNC_6(VAR_9, VAR_12, VAR_6, VAR_5, VAR_7);
    char *VAR_16 = FUNC_3(VAR_1, VAR_4, &VAR_11[VAR_12], VAR_12, VAR_2, VAR_7);

    SField *VAR_17 = ((void*)0);

    if (VAR_5 != ((void*)0)) {
      VAR_17 = FUNC_4(VAR_9, VAR_6, VAR_5, VAR_12);




      if (VAR_17 == ((void*)0)) {
        VAR_17 = &VAR_14;
        VAR_17->numOfNullPoints = (int32_t)VAR_2;
      }
    }

    TSKEY VAR_18 = FUNC_0(VAR_9) ? VAR_9->skey : VAR_9->ekey;

    int64_t VAR_19 = FUNC_9(VAR_18, VAR_9->nAggTimeInterval, VAR_9->intervalTimeUnit,
                                                             VAR_9->precision);
    FUNC_7(VAR_9, &VAR_8[VAR_12], VAR_19, VAR_16, (char *)VAR_3, VAR_2, VAR_13,
                  VAR_17, VAR_15, VAR_1->blockStatus, &VAR_11[VAR_12], VAR_1->scanFlag);
  }






  for (int32_t VAR_20 = 0; VAR_20 < VAR_9->numOfOutputCols; ++VAR_20) {
    int32_t VAR_21 = VAR_9->pSelectExpr[VAR_20].pBase.functionId;
    if (FUNC_2(VAR_1, &VAR_8[VAR_20], VAR_21)) {
      VAR_0[VAR_21].xFunction(&VAR_8[VAR_20]);
    }
  }

  int64_t VAR_22 = FUNC_5(VAR_1) - VAR_10;
  FUNC_11(VAR_1, VAR_22);

  FUNC_10(VAR_11);

  return (int32_t)VAR_22;
}
