
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {scalar_t__ scanFlag; int nStartQueryTimestamp; scalar_t__ aOutputBuf; int size; } ;
typedef TYPE_1__ SQLFunctionCtx ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(SQLFunctionCtx *VAR_1) {
  if (VAR_1->scanFlag == VAR_0) {
    return;
  }

  FUNC_0(VAR_1, VAR_1->size, 1);
  *(int64_t *)(VAR_1->aOutputBuf) = VAR_1->nStartQueryTimestamp;
}
