
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;


typedef int uint8_t ;
struct TYPE_33__ {int program_num; int pmt_pid; } ;
struct TYPE_32__ {int current_pid; int nb_prg; TYPE_17__* stream; int skip_clear; TYPE_2__* prg; TYPE_6__** pids; scalar_t__ skip_changes; } ;
struct TYPE_30__ {scalar_t__ section_cb; TYPE_7__* opaque; } ;
struct TYPE_26__ {TYPE_5__ section_filter; } ;
struct TYPE_31__ {scalar_t__ type; int pid; TYPE_1__ u; } ;
struct TYPE_29__ {scalar_t__ tid; int id; } ;
struct TYPE_28__ {scalar_t__ id; } ;
struct TYPE_27__ {scalar_t__ id; } ;
struct TYPE_25__ {int nb_programs; TYPE_3__** programs; int ts_id; } ;
typedef TYPE_4__ SectionHeader ;
typedef TYPE_5__ MpegTSSectionFilter ;
typedef TYPE_6__ MpegTSFilter ;
typedef TYPE_7__ MpegTSContext ;
typedef TYPE_8__ AVProgram ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_7__*,int) ;
 int FUNC_1 (TYPE_7__*,int,int) ;
 int FUNC_2 (TYPE_17__*,int ,char*,...) ;
 TYPE_8__* FUNC_3 (TYPE_17__*,int) ;
 int FUNC_4 (TYPE_7__*,scalar_t__) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (int const**,int const*) ;
 int FUNC_7 (TYPE_17__*,int const*,int) ;
 int FUNC_8 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_9 (TYPE_7__*,int,scalar_t__,TYPE_7__*,int) ;
 scalar_t__ FUNC_10 (TYPE_4__*,int const**,int const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_11 (TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static void FUNC_12(MpegTSFilter *VAR_4, const uint8_t *VAR_5, int VAR_6)
{
    MpegTSContext *VAR_7 = VAR_4->u.section_filter.opaque;
    MpegTSSectionFilter *VAR_8 = &VAR_4->u.section_filter;
    SectionHeader VAR_9, *VAR_10 = &VAR_9;
    const uint8_t *VAR_11, *VAR_12;
    int VAR_13, VAR_14;
    AVProgram *VAR_15;

    FUNC_2(VAR_7->stream, VAR_0, "PAT:\n");
    FUNC_7(VAR_7->stream, VAR_5, VAR_6);

    VAR_12 = VAR_5 + VAR_6 - 4;
    VAR_11 = VAR_5;
    if (FUNC_10(VAR_10, &VAR_11, VAR_12) < 0)
        return;
    if (VAR_10->tid != VAR_2)
        return;
    if (VAR_7->skip_changes)
        return;

    if (FUNC_11(VAR_10, VAR_8))
        return;
    VAR_7->stream->ts_id = VAR_10->id;

    FUNC_5(VAR_7);
    for (;;) {
        VAR_13 = FUNC_6(&VAR_11, VAR_12);
        if (VAR_13 < 0)
            break;
        VAR_14 = FUNC_6(&VAR_11, VAR_12);
        if (VAR_14 < 0)
            break;
        VAR_14 &= 0x1fff;

        if (VAR_14 == VAR_7->current_pid)
            break;

        FUNC_2(VAR_7->stream, VAR_0, "sid=0x%x pid=0x%x\n", VAR_13, VAR_14);

        if (VAR_13 == 0x0000) {

        } else {
            MpegTSFilter *VAR_16 = VAR_7->pids[VAR_14];
            VAR_15 = FUNC_3(VAR_7->stream, VAR_13);
            if (VAR_15) {
                VAR_15->program_num = VAR_13;
                VAR_15->pmt_pid = VAR_14;
            }
            if (VAR_16)
                if ( VAR_16->type != VAR_1
                    || VAR_16->pid != VAR_14
                    || VAR_16->u.section_filter.section_cb != VAR_3)
                    FUNC_8(VAR_7, VAR_7->pids[VAR_14]);

            if (!VAR_7->pids[VAR_14])
                FUNC_9(VAR_7, VAR_14, VAR_3, VAR_7, 1);
            FUNC_0(VAR_7, VAR_13);
            FUNC_1(VAR_7, VAR_13, 0);
            FUNC_1(VAR_7, VAR_13, VAR_14);
        }
    }

    if (VAR_13 < 0) {
        int VAR_17,VAR_18;
        for (VAR_18=0; VAR_18<VAR_7->stream->nb_programs; VAR_18++) {
            for (VAR_17 = 0; VAR_17 < VAR_7->nb_prg; VAR_17++)
                if (VAR_7->prg[VAR_17].id == VAR_7->stream->programs[VAR_18]->id)
                    break;
            if (VAR_17==VAR_7->nb_prg && !VAR_7->skip_clear)
                FUNC_4(VAR_7, VAR_7->stream->programs[VAR_18]->id);
        }
    }
}
