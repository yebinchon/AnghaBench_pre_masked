
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* previousDstEnd; } ;
typedef TYPE_1__ ZSTDv07_DCtx ;


 int FUNC_0 (TYPE_1__*,void const*) ;

size_t FUNC_1(ZSTDv07_DCtx* VAR_0, const void* VAR_1, size_t VAR_2)
{
    FUNC_0(VAR_0, VAR_1);
    VAR_0->previousDstEnd = (const char*)VAR_1 + VAR_2;
    return VAR_2;
}
