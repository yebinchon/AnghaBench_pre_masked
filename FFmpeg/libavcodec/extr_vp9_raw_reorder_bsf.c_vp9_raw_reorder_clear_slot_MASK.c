
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__** slot; } ;
typedef TYPE_1__ VP9RawReorderContext ;
struct TYPE_5__ {int slots; } ;


 int FUNC_0 (TYPE_2__**) ;

__attribute__((used)) static void FUNC_1(VP9RawReorderContext *VAR_0, int VAR_1)
{
    if (VAR_0->slot[VAR_1]) {
        VAR_0->slot[VAR_1]->slots &= ~(1 << VAR_1);
        if (VAR_0->slot[VAR_1]->slots == 0)
            FUNC_0(&VAR_0->slot[VAR_1]);
        else
            VAR_0->slot[VAR_1] = ((void*)0);
    }
}
