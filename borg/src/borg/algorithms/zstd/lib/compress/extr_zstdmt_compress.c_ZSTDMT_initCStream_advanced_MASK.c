
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int fParams; int cParams; } ;
typedef TYPE_1__ ZSTD_parameters ;
struct TYPE_9__ {int fParams; int cParams; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;
struct TYPE_10__ {TYPE_2__ params; } ;
typedef TYPE_3__ ZSTDMT_CCtx ;
typedef int U32 ;


 int FUNC_0 (int,char*,int ) ;
 size_t FUNC_1 (TYPE_3__*,void const*,size_t,int ,int *,TYPE_2__,unsigned long long) ;
 int VAR_0 ;

size_t FUNC_2(ZSTDMT_CCtx* VAR_1,
                             const void* VAR_2, size_t VAR_3,
                                   ZSTD_parameters VAR_4,
                                   unsigned long long VAR_5)
{
    ZSTD_CCtx_params VAR_6 = VAR_1->params;
    FUNC_0(4, "ZSTDMT_initCStream_advanced (pledgedSrcSize=%u)", (U32)VAR_5);
    VAR_6.cParams = VAR_4.cParams;
    VAR_6.fParams = VAR_4.fParams;
    return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0, ((void*)0),
                                       VAR_6, VAR_5);
}
