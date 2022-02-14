
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ option; } ;
typedef TYPE_1__ AVClass ;


 TYPE_1__* FUNC_0 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const**,int *,int,int ) ;
 int FUNC_2 (char*) ;

void FUNC_3(const AVClass *VAR_0, int VAR_1)
{
    const AVClass *VAR_2 = ((void*)0);
    if (VAR_0->option) {
        FUNC_1(&VAR_0, ((void*)0), VAR_1, 0);
        FUNC_2("\n");
    }

    while ((VAR_2 = FUNC_0(VAR_0, VAR_2)))
        FUNC_3(VAR_2, VAR_1);
}
