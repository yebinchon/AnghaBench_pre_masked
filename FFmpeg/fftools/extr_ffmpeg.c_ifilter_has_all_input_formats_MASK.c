
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nb_inputs; TYPE_1__** inputs; } ;
struct TYPE_4__ {scalar_t__ format; scalar_t__ type; } ;
typedef TYPE_2__ FilterGraph ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(FilterGraph *VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2->nb_inputs; VAR_3++) {
        if (VAR_2->inputs[VAR_3]->format < 0 && (VAR_2->inputs[VAR_3]->type == VAR_0 ||
                                          VAR_2->inputs[VAR_3]->type == VAR_1))
            return 0;
    }
    return 1;
}
