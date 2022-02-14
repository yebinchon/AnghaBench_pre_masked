
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_28__ {void* present; } ;
typedef TYPE_3__ TemporalNoiseShaping ;
struct TYPE_32__ {int warned_gain_control; TYPE_2__* oc; int avctx; } ;
struct TYPE_31__ {scalar_t__* window_sequence; int num_swb; int swb_offset; } ;
struct TYPE_30__ {scalar_t__ num_pulse; } ;
struct TYPE_29__ {int band_type; int sf; int band_type_run_end; int * coeffs; TYPE_6__ ics; TYPE_3__ tns; } ;
struct TYPE_26__ {scalar_t__ object_type; } ;
struct TYPE_27__ {TYPE_1__ m4ac; } ;
typedef TYPE_4__ SingleChannelElement ;
typedef TYPE_5__ Pulse ;
typedef TYPE_6__ IndividualChannelStream ;
typedef int INTFLOAT ;
typedef int GetBitContext ;
typedef TYPE_7__ AACContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_7__*,TYPE_4__*) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_7__*,int ,int ,int *,TYPE_6__*) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (TYPE_7__*,TYPE_6__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_5__*,int *,int ,int ) ;
 int FUNC_7 (TYPE_7__*,int ,int *,int,TYPE_6__*,int ,int ) ;
 int FUNC_8 (TYPE_7__*,int *,int *,int ,int,TYPE_5__*,TYPE_6__*,int ) ;
 int FUNC_9 (TYPE_7__*,TYPE_3__*,int *,TYPE_6__*) ;
 int FUNC_10 (int *,int) ;
 void* FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(AACContext *VAR_8, SingleChannelElement *VAR_9,
                      GetBitContext *VAR_10, int VAR_11, int VAR_12)
{
    Pulse VAR_13;
    TemporalNoiseShaping *VAR_14 = &VAR_9->tns;
    IndividualChannelStream *VAR_15 = &VAR_9->ics;
    INTFLOAT *VAR_16 = VAR_9->coeffs;
    int VAR_17, VAR_18, VAR_19, VAR_20 = 0;
    int VAR_21;

    VAR_18 = VAR_8->oc[1].m4ac.object_type == VAR_1;
    VAR_19 = VAR_8->oc[1].m4ac.object_type == VAR_2 ||
                 VAR_8->oc[1].m4ac.object_type == VAR_4 ||
                 VAR_8->oc[1].m4ac.object_type == VAR_3 ||
                 VAR_8->oc[1].m4ac.object_type == VAR_1;




    VAR_13.num_pulse = 0;

    VAR_17 = FUNC_10(VAR_10, 8);

    if (!VAR_11 && !VAR_12) {
        VAR_21 = FUNC_5(VAR_8, VAR_15, VAR_10);
        if (VAR_21 < 0)
            goto fail;
    }

    if ((VAR_21 = FUNC_3(VAR_8, VAR_9->band_type,
                                 VAR_9->band_type_run_end, VAR_10, VAR_15)) < 0)
        goto fail;
    if ((VAR_21 = FUNC_7(VAR_8, VAR_9->sf, VAR_10, VAR_17, VAR_15,
                                  VAR_9->band_type, VAR_9->band_type_run_end)) < 0)
        goto fail;

    VAR_20 = 0;
    if (!VAR_12) {
        if (!VAR_18 && (VAR_20 = FUNC_11(VAR_10))) {
            if (VAR_15->window_sequence[0] == VAR_7) {
                FUNC_1(VAR_8->avctx, VAR_6,
                       "Pulse tool not allowed in eight short sequence.\n");
                VAR_21 = VAR_5;
                goto fail;
            }
            if (FUNC_6(&VAR_13, VAR_10, VAR_15->swb_offset, VAR_15->num_swb)) {
                FUNC_1(VAR_8->avctx, VAR_6,
                       "Pulse data corrupt or invalid.\n");
                VAR_21 = VAR_5;
                goto fail;
            }
        }
        VAR_14->present = FUNC_11(VAR_10);
        if (VAR_14->present && !VAR_19) {
            VAR_21 = FUNC_9(VAR_8, VAR_14, VAR_10, VAR_15);
            if (VAR_21 < 0)
                goto fail;
        }
        if (!VAR_18 && FUNC_11(VAR_10)) {
            FUNC_4(VAR_9, VAR_10);
            if (!VAR_8->warned_gain_control) {
                FUNC_2(VAR_8->avctx, "Gain control");
                VAR_8->warned_gain_control = 1;
            }
        }


        if (VAR_14->present && VAR_19) {
            VAR_21 = FUNC_9(VAR_8, VAR_14, VAR_10, VAR_15);
            if (VAR_21 < 0)
                goto fail;
        }
    }

    VAR_21 = FUNC_8(VAR_8, VAR_16, VAR_10, VAR_9->sf, VAR_20,
                                    &VAR_13, VAR_15, VAR_9->band_type);
    if (VAR_21 < 0)
        goto fail;

    if (VAR_8->oc[1].m4ac.object_type == VAR_0 && !VAR_11)
        FUNC_0(VAR_8, VAR_9);

    return 0;
fail:
    VAR_14->present = 0;
    return VAR_21;
}
