
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int max_index_size; TYPE_1__** streams; } ;
struct TYPE_4__ {int nb_index_entries; int * index_entries; } ;
typedef TYPE_1__ AVStream ;
typedef int AVIndexEntry ;
typedef TYPE_2__ AVFormatContext ;



void FUNC_0(AVFormatContext *VAR_0, int VAR_1)
{
    AVStream *VAR_2 = VAR_0->streams[VAR_1];
    unsigned int VAR_3 = VAR_0->max_index_size / sizeof(AVIndexEntry);

    if ((unsigned) VAR_2->nb_index_entries >= VAR_3) {
        int VAR_4;
        for (VAR_4 = 0; 2 * VAR_4 < VAR_2->nb_index_entries; VAR_4++)
            VAR_2->index_entries[VAR_4] = VAR_2->index_entries[2 * VAR_4];
        VAR_2->nb_index_entries = VAR_4;
    }
}
