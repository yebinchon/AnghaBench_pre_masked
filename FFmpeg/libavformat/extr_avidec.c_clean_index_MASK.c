
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_10__ {int nb_streams; TYPE_2__** streams; } ;
struct TYPE_9__ {int sample_size; } ;
struct TYPE_8__ {int nb_index_entries; TYPE_1__* index_entries; TYPE_3__* priv_data; } ;
struct TYPE_7__ {scalar_t__ pos; scalar_t__ size; scalar_t__ timestamp; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVIStream ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_1)
{
    int VAR_2;
    int64_t VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_1->nb_streams; VAR_2++) {
        AVStream *VAR_4 = VAR_1->streams[VAR_2];
        AVIStream *VAR_5 = VAR_4->priv_data;
        int VAR_6 = VAR_4->nb_index_entries;
        int VAR_7 = VAR_5->sample_size;
        int64_t VAR_8, VAR_9, VAR_10;

        if (VAR_6 != 1 || VAR_5->sample_size == 0)
            continue;

        while (VAR_7 < 1024)
            VAR_7 += VAR_7;

        VAR_8 = VAR_4->index_entries[0].pos;
        VAR_9 = VAR_4->index_entries[0].size;
        VAR_10 = VAR_4->index_entries[0].timestamp;

        for (VAR_3 = 0; VAR_3 < VAR_9; VAR_3 += VAR_7)
            FUNC_1(VAR_4, VAR_8 + VAR_3, VAR_10 + VAR_3, FUNC_0(VAR_7, VAR_9 - VAR_3), 0,
                               VAR_0);
    }
}
