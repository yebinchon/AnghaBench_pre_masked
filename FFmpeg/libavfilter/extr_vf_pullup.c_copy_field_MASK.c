
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int ** planes; } ;
struct TYPE_6__ {int nb_planes; int* planewidth; int* planeheight; } ;
typedef TYPE_1__ PullupContext ;
typedef TYPE_2__ PullupBuffer ;


 int FUNC_0 (int *,int,int *,int,int,int) ;

__attribute__((used)) static void FUNC_1(PullupContext *VAR_0,
                       PullupBuffer *VAR_1, PullupBuffer *VAR_2, int VAR_3)
{
    uint8_t *VAR_4, *VAR_5;
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_0->nb_planes; VAR_6++) {
        VAR_5 = VAR_2->planes[VAR_6] + VAR_3 * VAR_0->planewidth[VAR_6];
        VAR_4 = VAR_1->planes[VAR_6] + VAR_3 * VAR_0->planewidth[VAR_6];

        FUNC_0(VAR_4, VAR_0->planewidth[VAR_6] << 1,
                            VAR_5, VAR_0->planewidth[VAR_6] << 1,
                            VAR_0->planewidth[VAR_6], VAR_0->planeheight[VAR_6] >> 1);
    }
}
