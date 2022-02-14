
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nb_inputs; int * inputs; } ;
struct TYPE_7__ {TYPE_1__* opaque; TYPE_3__* parent; } ;
struct TYPE_6__ {int qsv; } ;
typedef TYPE_1__ QSVOverlayContext ;
typedef TYPE_2__ FFFrameSync ;
typedef int AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int,int **,int ) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(FFFrameSync *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->parent;
    QSVOverlayContext *VAR_3 = VAR_1->opaque;
    AVFrame *VAR_4 = ((void*)0);
    int VAR_5 = 0, VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_2->nb_inputs; VAR_6++) {
        VAR_5 = FUNC_1(VAR_1, VAR_6, &VAR_4, 0);
        if (VAR_5 == 0)
            VAR_5 = FUNC_2(VAR_3->qsv, VAR_2->inputs[VAR_6], VAR_4);
        if (VAR_5 < 0 && VAR_5 != FUNC_0(VAR_0))
            break;
    }

    return VAR_5;
}
