
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nb_inputs; TYPE_1__** inputs; } ;
struct TYPE_4__ {int * ist; } ;
typedef int InputStream ;
typedef TYPE_2__ FilterGraph ;



int FUNC_0(FilterGraph *VAR_0, InputStream *VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0->nb_inputs; VAR_2++)
        if (VAR_0->inputs[VAR_2]->ist == VAR_1)
            return 1;
    return 0;
}
