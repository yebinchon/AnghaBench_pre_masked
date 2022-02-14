
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int blwidth; int * obmc_weight; TYPE_1__* plane; } ;
struct TYPE_5__ {int xbsep; int xoffset; } ;
typedef TYPE_1__ Plane ;
typedef TYPE_2__ DiracContext ;
typedef int DiracBlock ;


 int FUNC_0 (TYPE_2__*,int *,int *,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(DiracContext *VAR_0, DiracBlock *VAR_1, uint16_t *VAR_2, int VAR_3, int VAR_4)
{
    Plane *VAR_5 = &VAR_0->plane[VAR_3];
    int VAR_6, VAR_7 = VAR_5->xbsep - VAR_5->xoffset;

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_0->obmc_weight[0], VAR_3, -VAR_5->xoffset, VAR_4);
    VAR_2 += VAR_5->xbsep;

    for (VAR_6 = 1; VAR_6 < VAR_0->blwidth-1; VAR_6++) {
        FUNC_0(VAR_0, VAR_1+VAR_6, VAR_2, VAR_0->obmc_weight[1], VAR_3, VAR_7, VAR_4);
        VAR_7 += VAR_5->xbsep;
        VAR_2 += VAR_5->xbsep;
    }
    FUNC_0(VAR_0, VAR_1+VAR_6, VAR_2, VAR_0->obmc_weight[2], VAR_3, VAR_7, VAR_4);
}
