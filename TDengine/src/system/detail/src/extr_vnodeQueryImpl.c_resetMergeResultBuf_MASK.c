
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_8__ {int size; scalar_t__ startOffset; scalar_t__ outputBytes; scalar_t__ aOutputBuf; } ;
struct TYPE_7__ {size_t numOfOutputCols; TYPE_1__** sdata; } ;
struct TYPE_6__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_2__ SQuery ;
typedef TYPE_3__ SQLFunctionCtx ;



void FUNC_0(SQuery *VAR_0, SQLFunctionCtx *VAR_1) {
  for (int32_t VAR_2 = 0; VAR_2 < VAR_0->numOfOutputCols; ++VAR_2) {
    VAR_1[VAR_2].aOutputBuf = VAR_0->sdata[VAR_2]->data - VAR_1[VAR_2].outputBytes;
    VAR_1[VAR_2].size = 1;
    VAR_1[VAR_2].startOffset = 0;
    VAR_0->sdata[VAR_2]->len = 0;
  }
}
