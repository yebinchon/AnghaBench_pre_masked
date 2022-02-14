
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int * inputs; int * outputs; TYPE_1__* priv; } ;
struct TYPE_6__ {int fs; scalar_t__ inplace; } ;
typedef TYPE_1__ PreMultiplyContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int*,int *) ;
 int FUNC_5 (int ,int **) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (TYPE_2__*,int **,int *,int *) ;

__attribute__((used)) static int FUNC_10(AVFilterContext *VAR_0)
{
    PreMultiplyContext *VAR_1 = VAR_0->priv;

    if (VAR_1->inplace) {
        AVFrame *VAR_2 = ((void*)0);
        AVFrame *VAR_3 = ((void*)0);
        int VAR_4, VAR_5;
        int64_t VAR_6;

        FUNC_0(VAR_0->outputs[0], VAR_0);

        if ((VAR_4 = FUNC_5(VAR_0->inputs[0], &VAR_2)) > 0) {
            VAR_4 = FUNC_9(VAR_0, &VAR_3, VAR_2, VAR_2);
            FUNC_1(&VAR_2);
            if (VAR_4 < 0)
                return VAR_4;
            VAR_4 = FUNC_2(VAR_0->outputs[0], VAR_3);
        }
        if (VAR_4 < 0) {
            return VAR_4;
        } else if (FUNC_4(VAR_0->inputs[0], &VAR_5, &VAR_6)) {
            FUNC_8(VAR_0->outputs[0], VAR_5, VAR_6);
            return 0;
        } else {
            if (FUNC_7(VAR_0->outputs[0]))
                FUNC_6(VAR_0->inputs[0]);
            return 0;
        }
    } else {
        return FUNC_3(&VAR_1->fs);
    }
}
