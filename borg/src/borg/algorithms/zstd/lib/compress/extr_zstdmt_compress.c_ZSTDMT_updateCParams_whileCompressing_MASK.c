
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int windowLog; } ;
typedef TYPE_2__ ZSTD_compressionParameters ;
struct TYPE_11__ {int compressionLevel; } ;
typedef TYPE_3__ ZSTD_CCtx_params ;
struct TYPE_9__ {int compressionLevel; TYPE_2__ cParams; } ;
struct TYPE_12__ {TYPE_1__ params; } ;
typedef TYPE_4__ ZSTDMT_CCtx ;
typedef int U32 ;


 int FUNC_0 (int,char*,int const) ;
 TYPE_2__ FUNC_1 (TYPE_3__ const*,int ,int ) ;

void FUNC_2(ZSTDMT_CCtx* VAR_0, const ZSTD_CCtx_params* VAR_1)
{
    U32 const VAR_2 = VAR_0->params.cParams.windowLog;
    int const VAR_3 = VAR_1->compressionLevel;
    FUNC_0(5, "ZSTDMT_updateCParams_whileCompressing (level:%i)",
                VAR_3);
    VAR_0->params.compressionLevel = VAR_3;
    { ZSTD_compressionParameters VAR_4 = FUNC_1(VAR_1, 0, 0);
        VAR_4.windowLog = VAR_2;
        VAR_0->params.cParams = VAR_4;
    }
}
