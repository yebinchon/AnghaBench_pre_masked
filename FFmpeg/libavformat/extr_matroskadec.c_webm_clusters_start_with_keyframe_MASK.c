
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_20__ {int pb; TYPE_13__** streams; TYPE_4__* priv_data; } ;
struct TYPE_19__ {int flags; } ;
struct TYPE_18__ {TYPE_3__* queue; TYPE_2__* ctx; int current_id; } ;
struct TYPE_17__ {TYPE_5__ pkt; } ;
struct TYPE_16__ {int pb; } ;
struct TYPE_15__ {int pos; } ;
struct TYPE_14__ {scalar_t__ nb_index_entries; TYPE_1__* index_entries; } ;
typedef TYPE_4__ MatroskaDemuxContext ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_13__*,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,int*) ;
 int FUNC_4 (TYPE_4__*,int ,int,int*,int) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_2)
{
    MatroskaDemuxContext *VAR_3 = VAR_2->priv_data;
    uint32_t VAR_4 = VAR_3->current_id;
    int64_t VAR_5, VAR_6;
    int VAR_7, VAR_8 = 1;
    if (VAR_2->streams[0]->nb_index_entries <= 0) return 0;

    VAR_7 = FUNC_0(VAR_2->streams[0], 0, 0);
    if (VAR_7 < 0) return 0;
    VAR_5 = VAR_2->streams[0]->index_entries[VAR_7].pos;
    VAR_6 = FUNC_2(VAR_2->pb);
    while (1) {
        uint64_t VAR_9, VAR_10;
        int VAR_11;
        AVPacket *VAR_12;
        FUNC_1(VAR_2->pb, VAR_5, VAR_1);

        VAR_11 = FUNC_4(VAR_3, VAR_3->ctx->pb, 4, &VAR_9, 1);
        if (VAR_11 < 0 || VAR_9 != 0xF43B675)
            break;
        VAR_11 = FUNC_3(VAR_3, VAR_3->ctx->pb, &VAR_10);
        if (VAR_11 < 0)
            break;

        FUNC_7(VAR_3, 0, VAR_5);
        FUNC_5(VAR_3);
        if (FUNC_6(VAR_3) < 0 ||
            !VAR_3->queue) {
            break;
        }
        VAR_12 = &VAR_3->queue->pkt;

        VAR_5 += 4 + VAR_11 + VAR_10;
        if (!(VAR_12->flags & VAR_0)) {
            VAR_8 = 0;
            break;
        }
    }


    FUNC_7(VAR_3, VAR_4, VAR_6);

    return VAR_8;
}
