
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_11__ {int pMemBucket; } ;
struct TYPE_10__ {int inputType; scalar_t__ hasNull; } ;
struct TYPE_9__ {int hasResult; scalar_t__ interResultBuf; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;
typedef TYPE_3__ SPercentileInfo ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 scalar_t__ FUNC_3 (void*,int ) ;
 int FUNC_4 (int ,void*,int) ;

__attribute__((used)) static void FUNC_5(SQLFunctionCtx *VAR_1, int32_t VAR_2) {
  void *VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_1->hasNull && FUNC_3(VAR_3, VAR_1->inputType)) {
    return;
  }

  SResultInfo *VAR_4 = FUNC_1(VAR_1);

  SPercentileInfo *VAR_5 = (SPercentileInfo *)VAR_4->interResultBuf;
  FUNC_4(VAR_5->pMemBucket, VAR_3, 1);

  FUNC_2(VAR_1, 1, 1);
  VAR_4->hasResult = VAR_0;
}
