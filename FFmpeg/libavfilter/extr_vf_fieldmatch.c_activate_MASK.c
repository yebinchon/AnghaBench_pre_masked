
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int * inputs; int * outputs; TYPE_1__* priv; } ;
struct TYPE_5__ {scalar_t__* got_frame; int eof; scalar_t__ ppsrc; } ;
typedef TYPE_1__ FieldMatchContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (int ,int*,int *) ;
 int FUNC_2 (int ,int **) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_3)
{
    FieldMatchContext *VAR_4 = VAR_3->priv;
    AVFrame *VAR_5 = ((void*)0);
    int VAR_6 = 0, VAR_7;
    int64_t VAR_8;

    FUNC_0(VAR_3->outputs[0], VAR_3);

    if ((VAR_4->got_frame[VAR_2] == 0) &&
        (VAR_6 = FUNC_2(VAR_3->inputs[VAR_2], &VAR_5)) > 0) {
        VAR_6 = FUNC_6(VAR_3->inputs[VAR_2], VAR_5);
        if (VAR_6 < 0)
            return VAR_6;
    }
    if (VAR_6 < 0)
        return VAR_6;
    if (VAR_4->ppsrc &&
        (VAR_4->got_frame[VAR_1] == 0) &&
        (VAR_6 = FUNC_2(VAR_3->inputs[VAR_1], &VAR_5)) > 0) {
        VAR_6 = FUNC_6(VAR_3->inputs[VAR_1], VAR_5);
        if (VAR_6 < 0)
            return VAR_6;
    }
    if (VAR_6 < 0) {
        return VAR_6;
    } else if (FUNC_1(VAR_3->inputs[VAR_2], &VAR_7, &VAR_8)) {
        if (VAR_7 == VAR_0) {
            VAR_4->eof |= 1 << VAR_2;
            VAR_6 = FUNC_6(VAR_3->inputs[VAR_2], ((void*)0));
        }
        FUNC_5(VAR_3->outputs[0], VAR_7, VAR_8);
        return VAR_6;
    } else if (VAR_4->ppsrc && FUNC_1(VAR_3->inputs[VAR_1], &VAR_7, &VAR_8)) {
        if (VAR_7 == VAR_0) {
            VAR_4->eof |= 1 << VAR_1;
            VAR_6 = FUNC_6(VAR_3->inputs[VAR_1], ((void*)0));
        }
        FUNC_5(VAR_3->outputs[0], VAR_7, VAR_8);
        return VAR_6;
    } else {
        if (FUNC_4(VAR_3->outputs[0])) {
            if (VAR_4->got_frame[VAR_2] == 0)
                FUNC_3(VAR_3->inputs[VAR_2]);
            if (VAR_4->ppsrc && (VAR_4->got_frame[VAR_1] == 0))
                FUNC_3(VAR_3->inputs[VAR_1]);
        }
        return 0;
    }
}
