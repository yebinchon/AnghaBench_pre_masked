
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * outputs; TYPE_1__* priv; int ** inputs; } ;
struct TYPE_8__ {TYPE_3__* parent; } ;
struct TYPE_7__ {int palette_loaded; } ;
typedef TYPE_1__ PaletteUseContext ;
typedef TYPE_2__ FFFrameSync ;
typedef int AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int **) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_2__*,int **,int **) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_5(FFFrameSync *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->parent;
    AVFilterLink *VAR_3 = VAR_2->inputs[0];
    PaletteUseContext *VAR_4 = VAR_2->priv;
    AVFrame *VAR_5, *VAR_6, *VAR_7 = ((void*)0);
    int VAR_8;


    VAR_8 = FUNC_3(VAR_1, &VAR_5, &VAR_6);
    if (VAR_8 < 0)
        return VAR_8;
    if (!VAR_5 || !VAR_6) {
        VAR_8 = VAR_0;
        goto error;
    }
    if (!VAR_4->palette_loaded) {
        FUNC_4(VAR_4, VAR_6);
    }
    VAR_8 = FUNC_0(VAR_3, VAR_5, &VAR_7);
    if (VAR_8 < 0)
        goto error;
    return FUNC_2(VAR_2->outputs[0], VAR_7);

error:
    FUNC_1(&VAR_5);
    return VAR_8;
}
