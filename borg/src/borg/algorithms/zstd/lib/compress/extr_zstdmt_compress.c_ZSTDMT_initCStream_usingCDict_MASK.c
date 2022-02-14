
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ZSTD_frameParameters ;
typedef int ZSTD_CDict ;
struct TYPE_6__ {int fParams; int cParams; } ;
typedef TYPE_1__ ZSTD_CCtx_params ;
struct TYPE_7__ {TYPE_1__ params; } ;
typedef TYPE_2__ ZSTDMT_CCtx ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (TYPE_2__*,int *,int ,int ,int const*,TYPE_1__,unsigned long long) ;
 int VAR_0 ;
 int FUNC_2 (int const*) ;
 int VAR_1 ;

size_t FUNC_3(ZSTDMT_CCtx* VAR_2,
                               const ZSTD_CDict* VAR_3,
                                     ZSTD_frameParameters VAR_4,
                                     unsigned long long VAR_5)
{
    ZSTD_CCtx_params VAR_6 = VAR_2->params;
    if (VAR_3==((void*)0)) return FUNC_0(VAR_1);
    VAR_6.cParams = FUNC_2(VAR_3);
    VAR_6.fParams = VAR_4;
    return FUNC_1(VAR_2, ((void*)0), 0 , VAR_0, VAR_3,
                                       VAR_6, VAR_5);
}
