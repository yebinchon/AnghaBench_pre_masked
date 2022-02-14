
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {size_t stream_index; } ;
struct TYPE_9__ {TYPE_2__* elem; } ;
struct TYPE_11__ {int ctx; int queue_end; scalar_t__ queue; TYPE_1__ tracks; } ;
struct TYPE_10__ {scalar_t__ has_palette; int palette; } ;
typedef TYPE_2__ MatroskaTrack ;
typedef TYPE_3__ MatroskaDemuxContext ;
typedef TYPE_4__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int * FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (scalar_t__*,int *,TYPE_4__*) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(MatroskaDemuxContext *VAR_3,
                                   AVPacket *VAR_4)
{
    if (VAR_3->queue) {
        MatroskaTrack *VAR_5 = VAR_3->tracks.elem;
        MatroskaTrack *VAR_6;

        FUNC_2(&VAR_3->queue, &VAR_3->queue_end, VAR_4);
        VAR_6 = &VAR_5[VAR_4->stream_index];
        if (VAR_6->has_palette) {
            uint8_t *VAR_7 = FUNC_1(VAR_4, VAR_2, VAR_0);
            if (!VAR_7) {
                FUNC_0(VAR_3->ctx, VAR_1, "Cannot append palette to packet\n");
            } else {
                FUNC_3(VAR_7, VAR_6->palette, VAR_0);
            }
            VAR_6->has_palette = 0;
        }
        return 0;
    }

    return -1;
}
