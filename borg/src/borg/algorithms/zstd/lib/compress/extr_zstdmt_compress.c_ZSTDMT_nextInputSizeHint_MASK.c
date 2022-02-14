
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t filled; } ;
struct TYPE_5__ {size_t targetSectionSize; TYPE_1__ inBuff; } ;
typedef TYPE_2__ ZSTDMT_CCtx ;



size_t FUNC_0(const ZSTDMT_CCtx* VAR_0)
{
    size_t VAR_1 = VAR_0->targetSectionSize - VAR_0->inBuff.filled;
    if (VAR_1==0) VAR_1 = VAR_0->targetSectionSize;
    return VAR_1;
}
