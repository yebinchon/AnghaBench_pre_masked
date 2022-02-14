
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_12__ {int nb_streams; int pb; TYPE_4__** streams; TYPE_3__* priv_data; } ;
struct TYPE_11__ {TYPE_2__* priv_data; TYPE_1__* index_entries; } ;
struct TYPE_10__ {int last_good_pos; } ;
struct TYPE_9__ {int last_timestamp; int pts; } ;
struct TYPE_8__ {int timestamp; int pos; } ;
typedef TYPE_2__ DHAVStream ;
typedef TYPE_3__ DHAVContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, int VAR_3,
                          int64_t VAR_4, int VAR_5)
{
    DHAVContext *VAR_6 = VAR_2->priv_data;
    AVStream *VAR_7 = VAR_2->streams[VAR_3];
    int VAR_8 = FUNC_0(VAR_7, VAR_4, VAR_5);
    int64_t VAR_9;

    if (VAR_8 < 0)
        return -1;
    if (FUNC_1(VAR_2->pb, VAR_7->index_entries[VAR_8].pos, VAR_1) < 0)
        return -1;

    VAR_9 = VAR_7->index_entries[VAR_8].timestamp;

    for (int VAR_10 = 0; VAR_10 < VAR_2->nb_streams; VAR_10++) {
        AVStream *VAR_11 = VAR_2->streams[VAR_10];
        DHAVStream *VAR_12 = VAR_11->priv_data;

        VAR_12->pts = VAR_9;
        VAR_12->last_timestamp = VAR_0;
    }
    VAR_6->last_good_pos = FUNC_2(VAR_2->pb);

    return 0;
}
