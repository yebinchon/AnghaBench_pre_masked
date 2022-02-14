
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_11__ {int pMemBucket; } ;
struct TYPE_10__ {scalar_t__ size; int inputType; scalar_t__ hasNull; } ;
struct TYPE_9__ {int hasResult; TYPE_3__* interResultBuf; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;
typedef TYPE_3__ SPercentileInfo ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_2__*,scalar_t__) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5(SQLFunctionCtx *VAR_1) {
  int32_t VAR_2 = 0;

  SResultInfo * VAR_3 = FUNC_1(VAR_1);
  SPercentileInfo *VAR_4 = VAR_3->interResultBuf;

  for (int32_t VAR_5 = 0; VAR_5 < VAR_1->size; ++VAR_5) {
    char *VAR_6 = FUNC_0(VAR_1, VAR_5);
    if (VAR_1->hasNull && FUNC_3(VAR_6, VAR_1->inputType)) {
      continue;
    }

    VAR_2 += 1;
    FUNC_4(VAR_4->pMemBucket, VAR_6, 1);
  }

  FUNC_2(VAR_1, VAR_2, 1);
  VAR_3->hasResult = VAR_0;
}
