
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int opaque; int (* customFree ) (int ,TYPE_2__*) ;} ;
struct TYPE_6__ {TYPE_1__ customMem; } ;
typedef TYPE_2__ ZSTDv07_DCtx ;


 int FUNC_0 (int ,TYPE_2__*) ;

size_t FUNC_1(ZSTDv07_DCtx* VAR_0)
{
    if (VAR_0==((void*)0)) return 0;
    VAR_0->customMem.customFree(VAR_0->customMem.opaque, VAR_0);
    return 0;
}
