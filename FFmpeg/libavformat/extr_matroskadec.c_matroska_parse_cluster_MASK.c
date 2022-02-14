
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int uint8_t ;
struct TYPE_15__ {int size; int * data; } ;
struct TYPE_14__ {scalar_t__ size; int pos; int data; int buf; } ;
struct TYPE_18__ {scalar_t__ reference; int discard_padding; TYPE_2__ additional; int additional_id; int duration; TYPE_1__ bin; scalar_t__ non_simple; } ;
struct TYPE_17__ {scalar_t__ pos; int timecode; TYPE_5__ block; } ;
struct TYPE_16__ {int num_levels; int done; TYPE_12__* ctx; TYPE_4__ current_cluster; } ;
struct TYPE_13__ {int pb; } ;
typedef TYPE_3__ MatroskaDemuxContext ;
typedef TYPE_4__ MatroskaCluster ;
typedef TYPE_5__ MatroskaBlock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_12__*,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_5__*) ;
 int FUNC_6 (TYPE_3__*,int ,TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (TYPE_3__*,int ,int ,scalar_t__,int ,int ,int ,int,int *,int ,int ,scalar_t__,int ) ;
 int VAR_7 ;
 int FUNC_8 (TYPE_5__*,int ,int) ;

__attribute__((used)) static int FUNC_9(MatroskaDemuxContext *VAR_8)
{
    MatroskaCluster *VAR_9 = &VAR_8->current_cluster;
    MatroskaBlock *VAR_10 = &VAR_9->block;
    int VAR_11;

    FUNC_0(VAR_8->num_levels <= 2);

    if (VAR_8->num_levels == 1) {
        VAR_11 = FUNC_6(VAR_8, VAR_7, ((void*)0));

        if (VAR_11 == 1) {

            VAR_9->pos = FUNC_4(VAR_8->ctx->pb) - 4;

            VAR_11 = FUNC_6(VAR_8, VAR_5, VAR_9);
            if (VAR_11 < 0)
                return VAR_11;
        }
    }

    if (VAR_8->num_levels == 2) {

        VAR_11 = FUNC_6(VAR_8, VAR_6, VAR_9);

        if (VAR_11 >= 0 && VAR_10->bin.size > 0) {
            int VAR_12 = VAR_10->non_simple ? VAR_10->reference == VAR_3 : -1;
            uint8_t* VAR_13 = VAR_10->additional.size > 0 ?
                                    VAR_10->additional.data : ((void*)0);

            VAR_11 = FUNC_7(VAR_8, VAR_10->bin.buf, VAR_10->bin.data,
                                       VAR_10->bin.size, VAR_10->bin.pos,
                                       VAR_9->timecode, VAR_10->duration,
                                       VAR_12, VAR_13, VAR_10->additional_id,
                                       VAR_10->additional.size, VAR_9->pos,
                                       VAR_10->discard_padding);
        }

        FUNC_5(VAR_4, VAR_10);
        FUNC_8(VAR_10, 0, sizeof(*VAR_10));
    } else if (!VAR_8->num_levels) {
        if (!FUNC_2(VAR_8->ctx->pb)) {
            FUNC_3(VAR_8->ctx->pb);
            if (!FUNC_2(VAR_8->ctx->pb)) {
                FUNC_1(VAR_8->ctx, VAR_2, "File extends beyond "
                       "end of segment.\n");
                return VAR_1;
            }
        }
        VAR_8->done = 1;
        return VAR_0;
    }

    return VAR_11;
}
