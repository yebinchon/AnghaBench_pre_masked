
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* fullpath; } ;
typedef TYPE_1__ stripes_node_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(stripes_node_t *VAR_0)
{
    if (!VAR_0)
        return;

    if (VAR_0->fullpath)
        FUNC_0(VAR_0->fullpath);

    VAR_0->fullpath = ((void*)0);

    FUNC_0(VAR_0);
}
