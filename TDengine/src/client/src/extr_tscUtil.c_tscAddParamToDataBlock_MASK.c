
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int idx; char type; short bytes; int offset; int timePrec; } ;
struct TYPE_6__ {int numOfParams; int numOfAllocedParams; TYPE_2__* params; } ;
typedef TYPE_1__ STableDataBlocks ;
typedef TYPE_2__ SParamInfo ;


 void* FUNC_0 (TYPE_2__*,int) ;

SParamInfo* FUNC_1(STableDataBlocks* VAR_0, char VAR_1, uint8_t VAR_2, short VAR_3,
                                   uint32_t VAR_4) {
  uint32_t VAR_5 = VAR_0->numOfParams + 1;
  if (VAR_5 > VAR_0->numOfAllocedParams) {
    VAR_5 *= 2;
    void* VAR_6 = FUNC_0(VAR_0->params, VAR_5 * sizeof(SParamInfo));
    if (VAR_6 == ((void*)0)) {
      return ((void*)0);
    }
    VAR_0->params = (SParamInfo*)VAR_6;
    VAR_0->numOfAllocedParams = VAR_5;
  }

  SParamInfo* VAR_7 = VAR_0->params + VAR_0->numOfParams;
  VAR_7->idx = -1;
  VAR_7->type = VAR_1;
  VAR_7->timePrec = VAR_2;
  VAR_7->bytes = VAR_3;
  VAR_7->offset = VAR_4;

  ++VAR_0->numOfParams;
  return VAR_7;
}
