
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* instance; } ;
struct TYPE_5__ {int numDesc; int numSlice; TYPE_2__* slice; TYPE_2__* desc; } ;
typedef TYPE_1__ SwsContext ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(SwsContext *VAR_0)
{
    int VAR_1;
    if (VAR_0->desc) {
        for (VAR_1 = 0; VAR_1 < VAR_0->numDesc; ++VAR_1)
            FUNC_0(&VAR_0->desc[VAR_1].instance);
        FUNC_0(&VAR_0->desc);
    }

    if (VAR_0->slice) {
        for (VAR_1 = 0; VAR_1 < VAR_0->numSlice; ++VAR_1)
            FUNC_1(&VAR_0->slice[VAR_1]);
        FUNC_0(&VAR_0->slice);
    }
    return 0;
}
