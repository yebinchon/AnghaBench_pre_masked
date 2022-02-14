
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_CCtx_params ;
struct TYPE_3__ {scalar_t__ streamStage; int requestedParams; scalar_t__ cdict; } ;
typedef TYPE_1__ ZSTD_CCtx ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

size_t FUNC_2(
        ZSTD_CCtx* VAR_2, const ZSTD_CCtx_params* VAR_3)
{
    FUNC_0(4, "ZSTD_CCtx_setParametersUsingCCtxParams");
    if (VAR_2->streamStage != VAR_1) return FUNC_1(VAR_0);
    if (VAR_2->cdict) return FUNC_1(VAR_0);

    VAR_2->requestedParams = *VAR_3;
    return 0;
}
