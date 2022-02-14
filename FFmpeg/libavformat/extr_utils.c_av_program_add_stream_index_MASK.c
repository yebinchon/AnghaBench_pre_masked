
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int nb_streams; int nb_programs; TYPE_1__** programs; } ;
struct TYPE_5__ {int id; int nb_stream_indexes; unsigned int* stream_index; } ;
typedef TYPE_1__ AVProgram ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,char*,unsigned int) ;
 void* FUNC_1 (unsigned int*,int,int) ;

void FUNC_2(AVFormatContext *VAR_1, int VAR_2, unsigned VAR_3)
{
    int VAR_4, VAR_5;
    AVProgram *VAR_6 = ((void*)0);
    void *VAR_7;

    if (VAR_3 >= VAR_1->nb_streams) {
        FUNC_0(VAR_1, VAR_0, "stream index %d is not valid\n", VAR_3);
        return;
    }

    for (VAR_4 = 0; VAR_4 < VAR_1->nb_programs; VAR_4++) {
        if (VAR_1->programs[VAR_4]->id != VAR_2)
            continue;
        VAR_6 = VAR_1->programs[VAR_4];
        for (VAR_5 = 0; VAR_5 < VAR_6->nb_stream_indexes; VAR_5++)
            if (VAR_6->stream_index[VAR_5] == VAR_3)
                return;

        VAR_7 = FUNC_1(VAR_6->stream_index, VAR_6->nb_stream_indexes+1, sizeof(unsigned int));
        if (!VAR_7)
            return;
        VAR_6->stream_index = VAR_7;
        VAR_6->stream_index[VAR_6->nb_stream_indexes++] = VAR_3;
        return;
    }
}
