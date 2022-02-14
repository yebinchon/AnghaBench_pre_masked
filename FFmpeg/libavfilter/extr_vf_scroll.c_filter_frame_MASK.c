
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__** outputs; int * priv; } ;
struct TYPE_6__ {int h; int w; TYPE_2__* dst; } ;
typedef int ScrollContext ;
typedef int AVFrame ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int * FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    ScrollContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    AVFrame *VAR_6;

    VAR_6 = FUNC_4(VAR_5, VAR_5->w, VAR_5->h);
    if (!VAR_6) {
        FUNC_2(&VAR_2);
        return FUNC_0(VAR_0);
    }
    FUNC_1(VAR_6, VAR_2);

    FUNC_5(VAR_4, VAR_2, VAR_6);

    FUNC_2(&VAR_2);
    return FUNC_3(VAR_5, VAR_6);
}
