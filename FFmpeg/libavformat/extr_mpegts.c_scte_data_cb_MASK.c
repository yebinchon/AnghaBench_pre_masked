
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int stream_index; int pts; int dts; } ;
struct TYPE_13__ {int pcr_pid; scalar_t__ discard; } ;
struct TYPE_12__ {int stop_parse; TYPE_7__* pkt; TYPE_3__** pids; int stream; } ;
struct TYPE_9__ {TYPE_4__* opaque; } ;
struct TYPE_10__ {TYPE_1__ section_filter; } ;
struct TYPE_11__ {int last_pcr; int pid; TYPE_2__ u; } ;
typedef TYPE_3__ MpegTSFilter ;
typedef TYPE_4__ MpegTSContext ;
typedef TYPE_5__ AVProgram ;


 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int const*,int,TYPE_7__*) ;

__attribute__((used)) static void FUNC_3(MpegTSFilter *VAR_1, const uint8_t *VAR_2,
                    int VAR_3)
{
    AVProgram *VAR_4 = ((void*)0);
    MpegTSContext *VAR_5 = VAR_1->u.section_filter.opaque;

    int VAR_6 = FUNC_1(VAR_5->stream, VAR_1->pid);
    if (VAR_6 < 0)
        return;





    if (!VAR_5->pkt)
        return;

    FUNC_2(VAR_2, VAR_3, VAR_5->pkt);
    VAR_5->pkt->stream_index = VAR_6;
    VAR_4 = FUNC_0(VAR_5->stream, ((void*)0), VAR_6);
    if (VAR_4 && VAR_4->pcr_pid != -1 && VAR_4->discard != VAR_0) {
        MpegTSFilter *VAR_7 = VAR_5->pids[VAR_4->pcr_pid];
        if (VAR_7 && VAR_7->last_pcr != -1)
            VAR_5->pkt->pts = VAR_5->pkt->dts = VAR_7->last_pcr/300;
    }
    VAR_5->stop_parse = 1;

}
