
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* ZSTDv07_freeFunction ) (void* const,TYPE_2__*) ;
struct TYPE_7__ {struct TYPE_7__* dict; TYPE_5__* refContext; } ;
typedef TYPE_2__ ZSTDv07_DDict ;
struct TYPE_6__ {void* opaque; int (* customFree ) (void* const,TYPE_2__*) ;} ;
struct TYPE_8__ {TYPE_1__ customMem; } ;


 int FUNC_0 (TYPE_5__*) ;

size_t FUNC_1(ZSTDv07_DDict* VAR_0)
{
    ZSTDv07_freeFunction const VAR_1 = VAR_0->refContext->customMem.customFree;
    void* const VAR_2 = VAR_0->refContext->customMem.opaque;
    FUNC_0(VAR_0->refContext);
    VAR_1(VAR_2, VAR_0->dict);
    VAR_1(VAR_2, VAR_0);
    return 0;
}
