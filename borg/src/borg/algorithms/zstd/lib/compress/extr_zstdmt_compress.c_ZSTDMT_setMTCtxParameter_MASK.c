
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTDMT_parameter ;
struct TYPE_3__ {int params; } ;
typedef TYPE_1__ ZSTDMT_CCtx ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (int *,int ,int) ;

size_t FUNC_2(ZSTDMT_CCtx* VAR_0, ZSTDMT_parameter VAR_1, int VAR_2)
{
    FUNC_0(4, "ZSTDMT_setMTCtxParameter");
    return FUNC_1(&VAR_0->params, VAR_1, VAR_2);
}
