
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ more_data; } ;
struct TYPE_8__ {int * inputs; TYPE_3__* priv; } ;
struct TYPE_7__ {TYPE_2__* src; } ;
typedef int AVFrame ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;
typedef TYPE_3__ AResampleContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int **) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->src;
    AResampleContext *VAR_3 = VAR_2->priv;
    int VAR_4;


    if (VAR_3->more_data) {
        AVFrame *VAR_5;

        if (FUNC_2(VAR_1, 0, &VAR_5) >= 0) {
            return FUNC_0(VAR_1, VAR_5);
        }
    }
    VAR_3->more_data = 0;


    VAR_4 = FUNC_1(VAR_2->inputs[0]);


    if (VAR_4 == VAR_0) {
        AVFrame *VAR_6;

        if ((VAR_4 = FUNC_2(VAR_1, 1, &VAR_6)) < 0)
            return VAR_4;

        return FUNC_0(VAR_1, VAR_6);
    }
    return VAR_4;
}
