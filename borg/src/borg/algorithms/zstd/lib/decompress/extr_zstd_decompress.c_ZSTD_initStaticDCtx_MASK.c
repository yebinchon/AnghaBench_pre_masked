
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t staticSize; char* inBuff; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 int FUNC_0 (TYPE_1__* const) ;

ZSTD_DCtx* FUNC_1(void *VAR_0, size_t VAR_1)
{
    ZSTD_DCtx* const VAR_2 = (ZSTD_DCtx*) VAR_0;

    if ((size_t)VAR_0 & 7) return ((void*)0);
    if (VAR_1 < sizeof(ZSTD_DCtx)) return ((void*)0);

    FUNC_0(VAR_2);
    VAR_2->staticSize = VAR_1;
    VAR_2->inBuff = (char*)(VAR_2+1);
    return VAR_2;
}
