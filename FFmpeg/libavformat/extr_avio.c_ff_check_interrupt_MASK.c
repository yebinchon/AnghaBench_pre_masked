
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* callback ) (int ) ;int opaque; } ;
typedef TYPE_1__ AVIOInterruptCB ;


 int FUNC_0 (int ) ;

int FUNC_1(AVIOInterruptCB *VAR_0)
{
    if (VAR_0 && VAR_0->callback)
        return VAR_0->callback(VAR_0->opaque);
    return 0;
}
