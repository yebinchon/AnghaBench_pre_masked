
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_20__ {TYPE_5__* priv_data; } ;
struct TYPE_19__ {int size; } ;
struct TYPE_18__ {TYPE_3__** pids; TYPE_6__* pkt; } ;
struct TYPE_17__ {scalar_t__ state; scalar_t__ data_index; } ;
struct TYPE_14__ {TYPE_4__* opaque; } ;
struct TYPE_15__ {TYPE_1__ pes_filter; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_2__ u; } ;
typedef TYPE_4__ PESContext ;
typedef TYPE_5__ MpegTSContext ;
typedef TYPE_6__ AVPacket ;
typedef TYPE_7__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    MpegTSContext *VAR_7 = VAR_5->priv_data;
    int VAR_8, VAR_9;

    VAR_6->size = -1;
    VAR_7->pkt = VAR_6;
    VAR_8 = FUNC_1(VAR_7, 0);
    if (VAR_8 < 0) {
        FUNC_0(VAR_7->pkt);

        for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
            if (VAR_7->pids[VAR_9] && VAR_7->pids[VAR_9]->type == VAR_2) {
                PESContext *VAR_10 = VAR_7->pids[VAR_9]->u.pes_filter.opaque;
                if (VAR_10->state == VAR_1 && VAR_10->data_index > 0) {
                    VAR_8 = FUNC_2(VAR_10, VAR_6);
                    if (VAR_8 < 0)
                        return VAR_8;
                    VAR_10->state = VAR_3;
                    VAR_8 = 0;
                    break;
                }
            }
    }

    if (!VAR_8 && VAR_6->size < 0)
        VAR_8 = VAR_0;
    return VAR_8;
}
