
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nb_programs; TYPE_1__** programs; } ;
struct TYPE_6__ {int nb_stream_indexes; int* stream_index; } ;
typedef TYPE_1__ AVProgram ;
typedef TYPE_2__ AVFormatContext ;



AVProgram *FUNC_0(AVFormatContext *VAR_0, AVProgram *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < VAR_0->nb_programs; VAR_3++) {
        if (VAR_0->programs[VAR_3] == VAR_1) {
            VAR_1 = ((void*)0);
        } else {
            if (!VAR_1)
                for (VAR_4 = 0; VAR_4 < VAR_0->programs[VAR_3]->nb_stream_indexes; VAR_4++)
                    if (VAR_0->programs[VAR_3]->stream_index[VAR_4] == VAR_2)
                        return VAR_0->programs[VAR_3];
        }
    }
    return ((void*)0);
}
