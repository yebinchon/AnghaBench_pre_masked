
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * buffers; int name; } ;
typedef TYPE_1__ V4L2Context ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(V4L2Context* VAR_1)
{
    int VAR_2;

    if (!VAR_1->buffers)
        return;

    VAR_2 = FUNC_3(VAR_1);
    if (VAR_2)
        FUNC_1(FUNC_2(VAR_1), VAR_0, "V4L2 failed to unmap the %s buffers\n", VAR_1->name);

    FUNC_0(VAR_1->buffers);
    VAR_1->buffers = ((void*)0);
}
