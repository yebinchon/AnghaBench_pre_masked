
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ is_disabled; int * priv; TYPE_1__** outputs; } ;
struct TYPE_6__ {int h; int w; TYPE_2__* dst; } ;
typedef int NormalizeContext ;
typedef int AVFrame ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int * FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    NormalizeContext *VAR_5 = VAR_3->priv;
    AVFrame *VAR_6;


    int VAR_7 = FUNC_3(VAR_2) && !VAR_3->is_disabled;

    if (VAR_7) {
        VAR_6 = VAR_2;
    } else {
        VAR_6 = FUNC_5(VAR_4, VAR_4->w, VAR_4->h);
        if (!VAR_6) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_6, VAR_2);
    }



    FUNC_6(VAR_5, VAR_2, VAR_6);

    if (VAR_3->is_disabled) {
        FUNC_2(&VAR_6);
        return FUNC_4(VAR_4, VAR_2);
    }

    if (!VAR_7)
        FUNC_2(&VAR_2);

    return FUNC_4(VAR_4, VAR_6);
}
