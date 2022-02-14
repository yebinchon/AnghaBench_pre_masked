
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * extended_data; } ;
typedef TYPE_1__ AVFrame ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

AVFrame *FUNC_2(void)
{
    AVFrame *VAR_0 = FUNC_0(sizeof(*VAR_0));

    if (!VAR_0)
        return ((void*)0);

    VAR_0->extended_data = ((void*)0);
    FUNC_1(VAR_0);

    return VAR_0;
}
