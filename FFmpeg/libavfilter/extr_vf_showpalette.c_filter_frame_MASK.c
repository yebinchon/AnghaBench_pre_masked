
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__** outputs; TYPE_1__* priv; } ;
struct TYPE_8__ {int h; int w; TYPE_3__* dst; } ;
struct TYPE_7__ {int size; } ;
typedef TYPE_1__ ShowPaletteContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int * FUNC_5 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    int VAR_3;
    AVFrame *VAR_4;
    AVFilterContext *VAR_5 = VAR_1->dst;
    const ShowPaletteContext *VAR_6 = VAR_5->priv;
    AVFilterLink *VAR_7 = VAR_5->outputs[0];

    VAR_4 = FUNC_5(VAR_7, VAR_7->w, VAR_7->h);
    if (!VAR_4) {
        FUNC_2(&VAR_2);
        return FUNC_0(VAR_0);
    }
    FUNC_1(VAR_4, VAR_2);
    VAR_3 = FUNC_3(VAR_4, VAR_2, VAR_6->size);
    FUNC_2(&VAR_2);
    return VAR_3 < 0 ? VAR_3 : FUNC_4(VAR_7, VAR_4);
}
