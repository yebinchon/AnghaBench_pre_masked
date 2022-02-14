
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int sourceX; int sourceY; } ;
struct TYPE_7__ {int width; int height; } ;
struct TYPE_6__ {TYPE_5__* cel_evals; } ;
typedef TYPE_1__ RoqTempdata ;
typedef TYPE_2__ RoqContext ;
typedef int CelEvaluation ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_5__* FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(RoqContext *VAR_1, RoqTempdata *VAR_2)
{
    int VAR_3=0, VAR_4, VAR_5, VAR_6;

    VAR_2->cel_evals = FUNC_1(VAR_1->width*VAR_1->height/64, sizeof(CelEvaluation));
    if (!VAR_2->cel_evals)
        return FUNC_0(VAR_0);


    for (VAR_5=0; VAR_5<VAR_1->height; VAR_5+=16)
        for (VAR_4=0; VAR_4<VAR_1->width; VAR_4+=16)
            for(VAR_6=0; VAR_6<4; VAR_6++) {
                VAR_2->cel_evals[VAR_3 ].sourceX = VAR_4 + (VAR_6&1)*8;
                VAR_2->cel_evals[VAR_3++].sourceY = VAR_5 + (VAR_6&2)*4;
            }

    return 0;
}
