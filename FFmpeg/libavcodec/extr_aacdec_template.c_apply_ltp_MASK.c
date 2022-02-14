
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
typedef int int16_t ;
typedef scalar_t__ UINTFLOAT ;
struct TYPE_11__ {int lag; scalar_t__* used; int coef; } ;
struct TYPE_14__ {int* swb_offset; scalar_t__* window_sequence; int max_sfb; TYPE_2__ ltp; } ;
struct TYPE_13__ {scalar_t__ present; } ;
struct TYPE_12__ {int (* apply_tns ) (scalar_t__*,TYPE_4__*,TYPE_5__*,int ) ;int (* windowing_and_mdct_ltp ) (TYPE_3__*,scalar_t__*,scalar_t__*,TYPE_5__*) ;scalar_t__* buf_mdct; } ;
struct TYPE_10__ {int * coeffs; TYPE_5__ ics; TYPE_4__ tns; int * ltp_state; scalar_t__* ret; } ;
typedef TYPE_1__ SingleChannelElement ;
typedef TYPE_2__ LongTermPrediction ;
typedef scalar_t__ INTFLOAT ;
typedef TYPE_3__ AACContext ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (TYPE_3__*,scalar_t__*,scalar_t__*,TYPE_5__*) ;
 int FUNC_4 (scalar_t__*,TYPE_4__*,TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_5(AACContext *VAR_2, SingleChannelElement *VAR_3)
{
    const LongTermPrediction *VAR_4 = &VAR_3->ics.ltp;
    const uint16_t *VAR_5 = VAR_3->ics.swb_offset;
    int VAR_6, VAR_7;

    if (VAR_3->ics.window_sequence[0] != VAR_0) {
        INTFLOAT *VAR_8 = VAR_3->ret;
        INTFLOAT *VAR_9 = VAR_2->buf_mdct;
        int16_t VAR_10 = 2048;

        if (VAR_4->lag < 1024)
            VAR_10 = VAR_4->lag + 1024;
        for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++)
            VAR_8[VAR_6] = FUNC_0(VAR_3->ltp_state[VAR_6 + 2048 - VAR_4->lag], VAR_4->coef);
        FUNC_2(&VAR_8[VAR_6], 0, (2048 - VAR_6) * sizeof(*VAR_8));

        VAR_2->windowing_and_mdct_ltp(VAR_2, VAR_9, VAR_8, &VAR_3->ics);

        if (VAR_3->tns.present)
            VAR_2->apply_tns(VAR_9, &VAR_3->tns, &VAR_3->ics, 0);

        for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_3->ics.max_sfb, VAR_1); VAR_7++)
            if (VAR_4->used[VAR_7])
                for (VAR_6 = VAR_5[VAR_7]; VAR_6 < VAR_5[VAR_7 + 1]; VAR_6++)
                    VAR_3->coeffs[VAR_6] += (UINTFLOAT)VAR_9[VAR_6];
    }
}
