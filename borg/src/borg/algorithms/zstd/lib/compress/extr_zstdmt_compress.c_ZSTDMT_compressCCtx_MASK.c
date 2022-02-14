
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int contentSizeFlag; } ;
struct TYPE_6__ {int strategy; } ;
struct TYPE_8__ {TYPE_2__ fParams; TYPE_1__ cParams; } ;
typedef TYPE_3__ ZSTD_parameters ;
typedef int ZSTDMT_CCtx ;


 size_t FUNC_0 (int *,void*,size_t,void const*,size_t,int *,TYPE_3__,int const) ;
 int FUNC_1 (int ) ;
 TYPE_3__ FUNC_2 (int,size_t,int ) ;

size_t FUNC_3(ZSTDMT_CCtx* VAR_0,
                           void* VAR_1, size_t VAR_2,
                     const void* VAR_3, size_t VAR_4,
                           int VAR_5)
{
    ZSTD_parameters VAR_6 = FUNC_2(VAR_5, VAR_4, 0);
    int const VAR_7 = FUNC_1(VAR_6.cParams.strategy);
    VAR_6.fParams.contentSizeFlag = 1;
    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, ((void*)0), VAR_6, VAR_7);
}
