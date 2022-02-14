
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_9__ {int * inputs; int * outputs; } ;
struct TYPE_8__ {unsigned int nb_in; TYPE_1__* in; TYPE_3__* parent; } ;
struct TYPE_7__ {scalar_t__ state; scalar_t__ have_next; } ;
typedef TYPE_2__ FFFrameSync ;
typedef int AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int*,int *) ;
 int FUNC_2 (int ,int **) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,unsigned int,int *) ;
 int FUNC_6 (TYPE_2__*,unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_7(FFFrameSync *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->parent;
    AVFrame *VAR_4 = ((void*)0);
    int64_t VAR_5;
    unsigned VAR_6, VAR_7, VAR_8;
    int VAR_9, VAR_10;

    VAR_7 = VAR_8 = 0;
    for (VAR_6 = 0; VAR_6 < VAR_2->nb_in; VAR_6++) {
        if (VAR_2->in[VAR_6].have_next || VAR_2->in[VAR_6].state == VAR_1)
            continue;
        VAR_7++;
        VAR_9 = FUNC_2(VAR_3->inputs[VAR_6], &VAR_4);
        if (VAR_9 < 0)
            return VAR_9;
        if (VAR_9) {
            FUNC_0(VAR_4);
            FUNC_5(VAR_2, VAR_6, VAR_4);
        } else {
            VAR_9 = FUNC_1(VAR_3->inputs[VAR_6], &VAR_10, &VAR_5);
            if (VAR_9 > 0) {
                FUNC_6(VAR_2, VAR_6, VAR_10, VAR_5);
            } else if (!VAR_9) {
                VAR_8++;
            }
        }
    }
    if (VAR_8) {
        if (VAR_8 == VAR_7 && !FUNC_4(VAR_3->outputs[0]))
            return VAR_0;
        for (VAR_6 = 0; VAR_6 < VAR_2->nb_in; VAR_6++)
            if (!VAR_2->in[VAR_6].have_next && VAR_2->in[VAR_6].state != VAR_1)
                FUNC_3(VAR_3->inputs[VAR_6]);
        return 0;
    }
    return 1;
}
