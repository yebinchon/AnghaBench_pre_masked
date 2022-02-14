
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nb_inputs; TYPE_1__** inputs; } ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef int AVFilterFormats ;
typedef TYPE_2__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 () ;
 int * FUNC_1 (scalar_t__) ;
 int * FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_1)
{
    AVFilterFormats *VAR_2, *VAR_3 = ((void*)0);
    AVFilterChannelLayouts *VAR_4 = ((void*)0);
    int VAR_5, VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_1->nb_inputs; VAR_6++) {
        VAR_2 = FUNC_1(VAR_1->inputs[VAR_6]->type);
        if ((VAR_5 = FUNC_4(VAR_1, VAR_2)) < 0)
            return VAR_5;

        if (VAR_1->inputs[VAR_6]->type == VAR_0) {
            VAR_3 = FUNC_2();
            if ((VAR_5 = FUNC_5(VAR_1, VAR_3)) < 0)
                return VAR_5;
            VAR_4 = FUNC_0();
            if ((VAR_5 = FUNC_3(VAR_1, VAR_4)) < 0)
                return VAR_5;
        }
    }

    return 0;
}
