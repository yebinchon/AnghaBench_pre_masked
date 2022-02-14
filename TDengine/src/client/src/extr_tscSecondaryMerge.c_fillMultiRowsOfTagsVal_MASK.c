
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_14__ {TYPE_4__* pCtx; } ;
struct TYPE_13__ {char* aOutputBuf; scalar_t__ outputBytes; } ;
struct TYPE_10__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_12__ {TYPE_1__ fieldsInfo; } ;
struct TYPE_11__ {scalar_t__ resBytes; scalar_t__ functionId; } ;
typedef TYPE_2__ SSqlExpr ;
typedef TYPE_3__ SSqlCmd ;
typedef TYPE_4__ SQLFunctionCtx ;
typedef TYPE_5__ SLocalReducer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*,int ,size_t) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(SSqlCmd *VAR_1, int32_t VAR_2, SLocalReducer *VAR_3) {
  int32_t VAR_4 = 0;
  for (int32_t VAR_5 = 0; VAR_5 < VAR_1->fieldsInfo.numOfOutputCols; ++VAR_5) {
    SSqlExpr *VAR_6 = FUNC_5(VAR_1, VAR_5);
    if (VAR_4 < VAR_6->resBytes && VAR_6->functionId == VAR_0) {
      VAR_4 = VAR_6->resBytes;
    }
  }

  FUNC_0(VAR_4 >= 0);

  char *VAR_7 = FUNC_2((size_t) VAR_4);
  for (int32_t VAR_8 = 0; VAR_8 < VAR_1->fieldsInfo.numOfOutputCols; ++VAR_8) {
    SSqlExpr *VAR_9 = FUNC_5(VAR_1, VAR_8);
    if (VAR_9->functionId != VAR_0) {
      continue;
    }

    int32_t VAR_10 = VAR_2 - 1;
    FUNC_4(VAR_7, 0, (size_t)VAR_4);

    SQLFunctionCtx *VAR_11 = &VAR_3->pCtx[VAR_8];
    FUNC_3(VAR_7, VAR_11->aOutputBuf, (size_t)VAR_11->outputBytes);

    for (int32_t VAR_12 = 0; VAR_12 < VAR_10; ++VAR_12) {
      VAR_11->aOutputBuf += VAR_11->outputBytes;
      FUNC_3(VAR_11->aOutputBuf, VAR_7, (size_t)VAR_11->outputBytes);
    }
  }

  FUNC_1(VAR_7);
}
