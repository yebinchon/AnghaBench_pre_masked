
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {scalar_t__ pts; int remaining_size; } ;
typedef TYPE_1__ VocDecContext ;
struct TYPE_11__ {int nb_streams; int pb; TYPE_2__** streams; TYPE_1__* priv_data; } ;
struct TYPE_10__ {scalar_t__ timestamp; int size; int pos; } ;
struct TYPE_9__ {int nb_index_entries; TYPE_3__* index_entries; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVIndexEntry ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3, int VAR_4,
                         int64_t VAR_5, int VAR_6)
{
    VocDecContext *VAR_7 = VAR_3->priv_data;
    AVStream *VAR_8;
    int VAR_9;

    if (VAR_3->nb_streams < 1) {
        FUNC_2(VAR_3, VAR_0, "cannot seek while no stream was found yet\n");
        return FUNC_0(VAR_1);
    }

    VAR_8 = VAR_3->streams[VAR_4];
    VAR_9 = FUNC_1(VAR_8, VAR_5, VAR_6);

    if (VAR_9 >= 0 && VAR_9 < VAR_8->nb_index_entries - 1) {
        AVIndexEntry *VAR_10 = &VAR_8->index_entries[VAR_9];
        FUNC_3(VAR_3->pb, VAR_10->pos, VAR_2);
        VAR_7->pts = VAR_10->timestamp;
        VAR_7->remaining_size = VAR_10->size;
        return 0;
    } else if (VAR_8->nb_index_entries && VAR_8->index_entries[0].timestamp <= VAR_5) {
        AVIndexEntry *VAR_11 = &VAR_8->index_entries[VAR_8->nb_index_entries - 1];

        VAR_7->pts = VAR_11->timestamp;
        VAR_7->remaining_size = VAR_11->size;
    }
    return -1;
}
