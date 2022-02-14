
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void** planes; } ;
struct TYPE_5__ {int nb_planes; int* planeheight; int* planewidth; } ;
typedef TYPE_1__ PullupContext ;
typedef TYPE_2__ PullupBuffer ;


 void* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(PullupContext *VAR_0, PullupBuffer *VAR_1)
{
    int VAR_2;

    if (VAR_1->planes[0])
        return 0;
    for (VAR_2 = 0; VAR_2 < VAR_0->nb_planes; VAR_2++) {
        VAR_1->planes[VAR_2] = FUNC_0(VAR_0->planeheight[VAR_2] * VAR_0->planewidth[VAR_2]);
    }
    if (VAR_0->nb_planes == 1)
        VAR_1->planes[1] = FUNC_0(4*256);

    return 0;
}
