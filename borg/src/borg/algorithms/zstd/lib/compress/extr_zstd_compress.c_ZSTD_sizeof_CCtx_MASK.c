
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t workSpaceSize; int cdictLocal; } ;
typedef TYPE_1__ ZSTD_CCtx ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (TYPE_1__ const*) ;

size_t FUNC_2(const ZSTD_CCtx* VAR_0)
{
    if (VAR_0==((void*)0)) return 0;
    return sizeof(*VAR_0) + VAR_0->workSpaceSize
           + FUNC_0(VAR_0->cdictLocal)
           + FUNC_1(VAR_0);
}
