
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int * buf_mdct; TYPE_1__* fdsp; } ;
struct TYPE_9__ {scalar_t__* window_sequence; scalar_t__* use_kb_window; } ;
struct TYPE_8__ {int * ltp_state; int * ret; int * coeffs; int * saved; TYPE_3__ ics; } ;
struct TYPE_7__ {int (* vector_fmul_reverse ) (int *,int *,int const*,int) ;} ;
typedef TYPE_2__ SingleChannelElement ;
typedef TYPE_3__ IndividualChannelStream ;
typedef int INTFLOAT ;
typedef TYPE_4__ AACContext ;


 int FUNC_0 (int ,int const) ;
 int * FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int *,int const*,int) ;
 int FUNC_5 (int *,int *,int const*,int) ;
 int FUNC_6 (int *,int *,int const*,int) ;

__attribute__((used)) static void FUNC_7(AACContext *VAR_6, SingleChannelElement *VAR_7)
{
    IndividualChannelStream *VAR_8 = &VAR_7->ics;
    INTFLOAT *VAR_9 = VAR_7->saved;
    INTFLOAT *VAR_10 = VAR_7->coeffs;
    const INTFLOAT *VAR_11 = VAR_8->use_kb_window[0] ? FUNC_1(VAR_2) : FUNC_1(VAR_4);
    const INTFLOAT *VAR_12 = VAR_8->use_kb_window[0] ? FUNC_1(VAR_3) : FUNC_1(VAR_5);
    int VAR_13;

    if (VAR_8->window_sequence[0] == VAR_0) {
        FUNC_2(VAR_10, VAR_9, 512 * sizeof(*VAR_10));
        FUNC_3(VAR_10 + 576, 0, 448 * sizeof(*VAR_10));
        VAR_6->fdsp->vector_fmul_reverse(VAR_10 + 448, VAR_6->buf_mdct + 960, &VAR_12[64], 64);

        for (VAR_13 = 0; VAR_13 < 64; VAR_13++)
            VAR_10[VAR_13 + 512] = FUNC_0(VAR_6->buf_mdct[1023 - VAR_13], VAR_12[63 - VAR_13]);
    } else if (VAR_8->window_sequence[0] == VAR_1) {
        FUNC_2(VAR_10, VAR_6->buf_mdct + 512, 448 * sizeof(*VAR_10));
        FUNC_3(VAR_10 + 576, 0, 448 * sizeof(*VAR_10));
        VAR_6->fdsp->vector_fmul_reverse(VAR_10 + 448, VAR_6->buf_mdct + 960, &VAR_12[64], 64);

        for (VAR_13 = 0; VAR_13 < 64; VAR_13++)
            VAR_10[VAR_13 + 512] = FUNC_0(VAR_6->buf_mdct[1023 - VAR_13], VAR_12[63 - VAR_13]);
    } else {
        VAR_6->fdsp->vector_fmul_reverse(VAR_10, VAR_6->buf_mdct + 512, &VAR_11[512], 512);

        for (VAR_13 = 0; VAR_13 < 512; VAR_13++)
            VAR_10[VAR_13 + 512] = FUNC_0(VAR_6->buf_mdct[1023 - VAR_13], VAR_11[511 - VAR_13]);
    }

    FUNC_2(VAR_7->ltp_state, VAR_7->ltp_state+1024, 1024 * sizeof(*VAR_7->ltp_state));
    FUNC_2(VAR_7->ltp_state+1024, VAR_7->ret, 1024 * sizeof(*VAR_7->ltp_state));
    FUNC_2(VAR_7->ltp_state+2048, VAR_10, 1024 * sizeof(*VAR_7->ltp_state));
}
