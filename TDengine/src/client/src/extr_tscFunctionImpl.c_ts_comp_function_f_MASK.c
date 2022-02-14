
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_10__ {int i64Key; } ;
struct TYPE_13__ {int size; TYPE_1__ tag; int inputType; scalar_t__ hasNull; } ;
struct TYPE_12__ {int hasResult; TYPE_2__* interResultBuf; } ;
struct TYPE_11__ {int * pTSBuf; } ;
typedef TYPE_2__ STSCompInfo ;
typedef int STSBuf ;
typedef TYPE_3__ SResultInfo ;
typedef TYPE_4__ SQLFunctionCtx ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (void*,int ) ;
 int FUNC_4 (int *,int ,int ,void*,int ) ;

__attribute__((used)) static void FUNC_5(SQLFunctionCtx *VAR_2, int32_t VAR_3) {
  void *VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (VAR_2->hasNull && FUNC_3(VAR_4, VAR_2->inputType)) {
    return;
  }

  SResultInfo *VAR_5 = FUNC_1(VAR_2);
  STSCompInfo *VAR_6 = VAR_5->interResultBuf;

  STSBuf *VAR_7 = VAR_6->pTSBuf;

  FUNC_4(VAR_7, 0, VAR_2->tag.i64Key, VAR_4, VAR_1);
  FUNC_2(VAR_2, VAR_2->size, 1);

  VAR_5->hasResult = VAR_0;
}
