
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_13__ {int nb_streams; TYPE_4__** streams; TYPE_5__* priv_data; } ;
struct TYPE_12__ {int io_fsize; } ;
struct TYPE_9__ {int num; int den; } ;
struct TYPE_11__ {int nb_index_entries; TYPE_3__* codecpar; TYPE_2__ time_base; TYPE_1__* index_entries; } ;
struct TYPE_10__ {scalar_t__ bit_rate; } ;
struct TYPE_8__ {int size; int timestamp; int pos; } ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVIContext ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0)
{
    AVIContext *VAR_1 = VAR_0->priv_data;
    int VAR_2, VAR_3;
    int64_t VAR_4 = 0;
    int64_t VAR_5 = 0;

    for (VAR_2 = 0; VAR_2<VAR_0->nb_streams; VAR_2++) {
        int64_t VAR_6 = 0;
        AVStream *VAR_7 = VAR_0->streams[VAR_2];

        if (!VAR_7->nb_index_entries)
            continue;

        for (VAR_3 = 0; VAR_3 < VAR_7->nb_index_entries; VAR_3++)
            VAR_6 += VAR_7->index_entries[VAR_3].size;
        VAR_5 = FUNC_0(VAR_5, VAR_7->index_entries[VAR_3-1].pos);
        VAR_4 += VAR_6;
    }
    if (VAR_5 < VAR_1->io_fsize*9/10)
        return 0;
    if (VAR_4*9/10 > VAR_5 || VAR_4 < VAR_5*9/10)
        return 0;

    for (VAR_2 = 0; VAR_2<VAR_0->nb_streams; VAR_2++) {
        int64_t VAR_8 = 0;
        AVStream *VAR_9 = VAR_0->streams[VAR_2];
        int64_t VAR_10;
        int64_t VAR_11;

        for (VAR_3 = 0; VAR_3 < VAR_9->nb_index_entries; VAR_3++)
            VAR_8 += VAR_9->index_entries[VAR_3].size;

        if (VAR_9->nb_index_entries < 2 || VAR_9->codecpar->bit_rate > 0)
            continue;
        VAR_10 = VAR_9->index_entries[VAR_3-1].timestamp - VAR_9->index_entries[0].timestamp;
        VAR_11 = FUNC_1(8*VAR_8, VAR_9->time_base.den, VAR_10 * VAR_9->time_base.num);
        if (VAR_11 > 0) {
            VAR_9->codecpar->bit_rate = VAR_11;
        }
    }
    return 1;
}
