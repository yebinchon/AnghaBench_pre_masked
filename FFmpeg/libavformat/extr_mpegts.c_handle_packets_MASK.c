
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_19__ {int pb; } ;
struct TYPE_18__ {scalar_t__ last_pos; int stop_parse; int raw_packet_size; TYPE_4__** pids; TYPE_7__* stream; } ;
struct TYPE_17__ {int state; scalar_t__ data_index; int buffer; } ;
struct TYPE_14__ {int last_ver; } ;
struct TYPE_13__ {TYPE_5__* opaque; } ;
struct TYPE_15__ {TYPE_2__ section_filter; TYPE_1__ pes_filter; } ;
struct TYPE_16__ {scalar_t__ type; int last_cc; int last_pcr; TYPE_3__ u; } ;
typedef TYPE_5__ PESContext ;
typedef TYPE_6__ MpegTSContext ;
typedef TYPE_7__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_7__*,int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_7__*,int ) ;
 int FUNC_5 (TYPE_6__*,int const*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (TYPE_7__*,int *,int ,int const**) ;

__attribute__((used)) static int FUNC_8(MpegTSContext *VAR_8, int64_t VAR_9)
{
    AVFormatContext *VAR_10 = VAR_8->stream;
    uint8_t VAR_11[VAR_7 + VAR_0];
    const uint8_t *VAR_12;
    int64_t VAR_13;
    int VAR_14 = 0;

    if (FUNC_3(VAR_10->pb) != VAR_8->last_pos) {
        int VAR_15;
        FUNC_2(VAR_8->stream, VAR_1, "Skipping after seek\n");

        for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
            if (VAR_8->pids[VAR_15]) {
                if (VAR_8->pids[VAR_15]->type == VAR_3) {
                    PESContext *VAR_16 = VAR_8->pids[VAR_15]->u.pes_filter.opaque;
                    FUNC_1(&VAR_16->buffer);
                    VAR_16->data_index = 0;
                    VAR_16->state = VAR_5;
                } else if (VAR_8->pids[VAR_15]->type == VAR_4) {
                    VAR_8->pids[VAR_15]->u.section_filter.last_ver = -1;
                }
                VAR_8->pids[VAR_15]->last_cc = -1;
                VAR_8->pids[VAR_15]->last_pcr = -1;
            }
        }
    }

    VAR_8->stop_parse = 0;
    VAR_13 = 0;
    FUNC_6(VAR_11 + VAR_7, 0, VAR_0);
    for (;;) {
        VAR_13++;
        if (VAR_9 != 0 && VAR_13 >= VAR_9 ||
            VAR_8->stop_parse > 1) {
            VAR_14 = FUNC_0(VAR_2);
            break;
        }
        if (VAR_8->stop_parse > 0)
            break;

        VAR_14 = FUNC_7(VAR_10, VAR_11, VAR_8->raw_packet_size, &VAR_12);
        if (VAR_14 != 0)
            break;
        VAR_14 = FUNC_5(VAR_8, VAR_12);
        FUNC_4(VAR_10, VAR_8->raw_packet_size);
        if (VAR_14 != 0)
            break;
    }
    VAR_8->last_pos = FUNC_3(VAR_10->pb);
    return VAR_14;
}
