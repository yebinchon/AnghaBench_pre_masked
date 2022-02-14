
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {int nb_streams; TYPE_2__** streams; } ;
struct TYPE_7__ {int nb_index_entries; TYPE_1__* index_entries; } ;
struct TYPE_6__ {scalar_t__ pos; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_1, int64_t VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    FUNC_0(VAR_1, VAR_0,
           "Found invalid index entries, clearing the index.\n");
    for (VAR_3 = 0; VAR_3 < VAR_1->nb_streams; VAR_3++) {
        AVStream *VAR_6 = VAR_1->streams[VAR_3];

        VAR_5 = 0;
        for (VAR_4 = 0; VAR_4 < VAR_6->nb_index_entries; VAR_4++)
            if (VAR_6->index_entries[VAR_4].pos < VAR_2)
                VAR_6->index_entries[VAR_5++] = VAR_6->index_entries[VAR_4];
        VAR_6->nb_index_entries = VAR_5;
    }
}
