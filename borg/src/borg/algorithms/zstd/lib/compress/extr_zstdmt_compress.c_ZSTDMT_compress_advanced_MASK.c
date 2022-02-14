
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int fParams; int cParams; } ;
typedef TYPE_1__ ZSTD_parameters ;
typedef int ZSTD_CDict ;
struct TYPE_9__ {int overlapLog; int fParams; int cParams; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;
struct TYPE_10__ {TYPE_2__ params; } ;
typedef TYPE_3__ ZSTDMT_CCtx ;


 size_t FUNC_0 (TYPE_3__*,void*,size_t,void const*,size_t,int const*,TYPE_2__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

size_t FUNC_2(ZSTDMT_CCtx* VAR_2,
                                void* VAR_3, size_t VAR_4,
                          const void* VAR_5, size_t VAR_6,
                          const ZSTD_CDict* VAR_7,
                                ZSTD_parameters VAR_8,
                                int VAR_9)
{
    ZSTD_CCtx_params VAR_10 = VAR_2->params;
    VAR_10.cParams = VAR_8.cParams;
    VAR_10.fParams = VAR_8.fParams;
    FUNC_1(VAR_1 <= VAR_9 && VAR_9 <= VAR_0);
    VAR_10.overlapLog = VAR_9;
    return FUNC_0(VAR_2,
                                             VAR_3, VAR_4,
                                             VAR_5, VAR_6,
                                             VAR_7, VAR_10);
}
