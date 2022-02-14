
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_17__ {int nb_streams; TYPE_4__** streams; TYPE_3__* priv_data; } ;
struct TYPE_16__ {TYPE_2__* priv_data; int time_base; int skip_samples; TYPE_1__* index_entries; } ;
struct TYPE_15__ {scalar_t__ seek_individually; } ;
struct TYPE_14__ {int ffindex; int current_sample; int start_pad; } ;
struct TYPE_13__ {int timestamp; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef TYPE_3__ MOVContext ;
typedef TYPE_4__ AVStream ;
typedef int AVIndexEntry ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int * FUNC_3 (TYPE_5__*,TYPE_4__**) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*,int ,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, int VAR_2, int64_t VAR_3, int VAR_4)
{
    MOVContext *VAR_5 = VAR_1->priv_data;
    AVStream *VAR_6;
    int VAR_7;
    int VAR_8;

    if (VAR_2 >= VAR_1->nb_streams)
        return VAR_0;

    VAR_6 = VAR_1->streams[VAR_2];
    VAR_7 = FUNC_4(VAR_1, VAR_6, VAR_3, VAR_4);
    if (VAR_7 < 0)
        return VAR_7;

    if (VAR_5->seek_individually) {

        int64_t VAR_9 = VAR_6->index_entries[VAR_7].timestamp;

        for (VAR_8 = 0; VAR_8 < VAR_1->nb_streams; VAR_8++) {
            int64_t VAR_10;
            MOVStreamContext *VAR_11 = VAR_1->streams[VAR_8]->priv_data;
            VAR_6 = VAR_1->streams[VAR_8];
            VAR_6->skip_samples = (VAR_3 <= 0) ? VAR_11->start_pad : 0;

            if (VAR_2 == VAR_8)
                continue;

            VAR_10 = FUNC_0(VAR_9, VAR_1->streams[VAR_2]->time_base, VAR_6->time_base);
            FUNC_4(VAR_1, VAR_6, VAR_10, VAR_4);
        }
    } else {
        for (VAR_8 = 0; VAR_8 < VAR_1->nb_streams; VAR_8++) {
            MOVStreamContext *VAR_12;
            VAR_6 = VAR_1->streams[VAR_8];
            VAR_12 = VAR_6->priv_data;
            FUNC_2(VAR_12, 0);
        }
        while (1) {
            MOVStreamContext *VAR_13;
            AVIndexEntry *VAR_14 = FUNC_3(VAR_1, &VAR_6);
            if (!VAR_14)
                return VAR_0;
            VAR_13 = VAR_6->priv_data;
            if (VAR_13->ffindex == VAR_2 && VAR_13->current_sample == VAR_7)
                break;
            FUNC_1(VAR_13);
        }
    }
    return 0;
}
