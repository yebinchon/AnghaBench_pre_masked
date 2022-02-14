
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int support; int decomposition_count; int width; int height; int stride; int (* spatial_compose ) (TYPE_2__*,int,int,int,int) ;TYPE_1__* cs; } ;
struct TYPE_5__ {scalar_t__ y; } ;
typedef TYPE_2__ DWTContext ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,int,int,int,int) ;

void FUNC_2(DWTContext *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3 = VAR_0->support;

    for (VAR_2 = VAR_0->decomposition_count-1; VAR_2 >= 0; VAR_2--) {
        int VAR_4 = VAR_0->width >> VAR_2;
        int VAR_5 = VAR_0->height >> VAR_2;
        int VAR_6 = VAR_0->stride << VAR_2;

        while (VAR_0->cs[VAR_2].y <= FUNC_0((VAR_1>>VAR_2)+VAR_3, VAR_5))
            VAR_0->spatial_compose(VAR_0, VAR_2, VAR_4, VAR_5, VAR_6);
    }
}
