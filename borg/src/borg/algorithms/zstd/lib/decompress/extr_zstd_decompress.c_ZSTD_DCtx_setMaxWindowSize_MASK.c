
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t lowerBound; size_t upperBound; } ;
typedef TYPE_1__ ZSTD_bounds ;
struct TYPE_6__ {scalar_t__ streamStage; size_t maxWindowSize; } ;
typedef TYPE_2__ ZSTD_DCtx ;


 size_t FUNC_0 (int ) ;
 TYPE_1__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

size_t FUNC_2(ZSTD_DCtx* VAR_4, size_t VAR_5)
{
    ZSTD_bounds const VAR_6 = FUNC_1(VAR_0);
    size_t const VAR_7 = (size_t)1 << VAR_6.lowerBound;
    size_t const VAR_8 = (size_t)1 << VAR_6.upperBound;
    if (VAR_4->streamStage != VAR_3) return FUNC_0(VAR_2);
    if (VAR_5 < VAR_7) return FUNC_0(VAR_1);
    if (VAR_5 > VAR_8) return FUNC_0(VAR_1);
    VAR_4->maxWindowSize = VAR_5;
    return 0;
}
