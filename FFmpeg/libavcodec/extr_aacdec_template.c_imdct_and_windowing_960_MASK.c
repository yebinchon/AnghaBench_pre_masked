
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int (* imdct_half ) (TYPE_6__*,int *,int *,int) ;} ;
struct TYPE_13__ {int (* imdct_half ) (TYPE_5__*,int *,int *,int) ;} ;
struct TYPE_12__ {TYPE_1__* fdsp; TYPE_5__* mdct960; TYPE_6__* mdct120; int * temp; int * buf_mdct; } ;
struct TYPE_11__ {scalar_t__* window_sequence; scalar_t__* use_kb_window; } ;
struct TYPE_10__ {int * saved; int * ret; int * coeffs; TYPE_3__ ics; } ;
struct TYPE_9__ {int (* vector_fmul_window ) (int *,int *,int *,int const*,int) ;} ;
typedef TYPE_2__ SingleChannelElement ;
typedef TYPE_3__ IndividualChannelStream ;
typedef int INTFLOAT ;
typedef TYPE_4__ AACContext ;


 int * FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_6__*,int *,int *,int) ;
 int FUNC_3 (int *,int *,int *,int const*,int) ;
 int FUNC_4 (int *,int *,int *,int const*,int) ;
 int FUNC_5 (int *,int *,int *,int const*,int) ;
 int FUNC_6 (TYPE_5__*,int *,int *,int) ;
 int FUNC_7 (int *,int *,int *,int const*,int) ;
 int FUNC_8 (int *,int *,int *,int const*,int) ;
 int FUNC_9 (int *,int *,int *,int const*,int) ;
 int FUNC_10 (int *,int *,int *,int const*,int) ;
 int FUNC_11 (int *,int *,int *,int const*,int) ;
 int FUNC_12 (int *,int *,int *,int const*,int) ;
 int FUNC_13 (int *,int *,int *,int const*,int) ;

__attribute__((used)) static void FUNC_14(AACContext *VAR_8, SingleChannelElement *VAR_9)
{

    IndividualChannelStream *VAR_10 = &VAR_9->ics;
    INTFLOAT *VAR_11 = VAR_9->coeffs;
    INTFLOAT *VAR_12 = VAR_9->ret;
    INTFLOAT *VAR_13 = VAR_9->saved;
    const INTFLOAT *VAR_14 = VAR_10->use_kb_window[0] ? FUNC_0(VAR_5) : FUNC_0(VAR_6);
    const INTFLOAT *VAR_15 = VAR_10->use_kb_window[1] ? FUNC_0(VAR_4) : FUNC_0(VAR_7);
    const INTFLOAT *VAR_16 = VAR_10->use_kb_window[1] ? FUNC_0(VAR_5) : FUNC_0(VAR_6);
    INTFLOAT *VAR_17 = VAR_8->buf_mdct;
    INTFLOAT *VAR_18 = VAR_8->temp;
    int VAR_19;


    if (VAR_10->window_sequence[0] == VAR_0) {
        for (VAR_19 = 0; VAR_19 < 8; VAR_19++)
            VAR_8->mdct120->imdct_half(VAR_8->mdct120, VAR_17 + VAR_19 * 120, VAR_11 + VAR_19 * 128, 1);
    } else {
        VAR_8->mdct960->imdct_half(VAR_8->mdct960, VAR_17, VAR_11, 1);
    }
    if ((VAR_10->window_sequence[1] == VAR_3 || VAR_10->window_sequence[1] == VAR_2) &&
        (VAR_10->window_sequence[0] == VAR_3 || VAR_10->window_sequence[0] == VAR_1)) {
        VAR_8->fdsp->vector_fmul_window( VAR_12, VAR_13, VAR_17, VAR_15, 480);
    } else {
        FUNC_1( VAR_12, VAR_13, 420 * sizeof(*VAR_12));

        if (VAR_10->window_sequence[0] == VAR_0) {
            VAR_8->fdsp->vector_fmul_window(VAR_12 + 420 + 0*120, VAR_13 + 420, VAR_17 + 0*120, VAR_16, 60);
            VAR_8->fdsp->vector_fmul_window(VAR_12 + 420 + 1*120, VAR_17 + 0*120 + 60, VAR_17 + 1*120, VAR_14, 60);
            VAR_8->fdsp->vector_fmul_window(VAR_12 + 420 + 2*120, VAR_17 + 1*120 + 60, VAR_17 + 2*120, VAR_14, 60);
            VAR_8->fdsp->vector_fmul_window(VAR_12 + 420 + 3*120, VAR_17 + 2*120 + 60, VAR_17 + 3*120, VAR_14, 60);
            VAR_8->fdsp->vector_fmul_window(VAR_18, VAR_17 + 3*120 + 60, VAR_17 + 4*120, VAR_14, 60);
            FUNC_1( VAR_12 + 420 + 4*120, VAR_18, 60 * sizeof(*VAR_12));
        } else {
            VAR_8->fdsp->vector_fmul_window(VAR_12 + 420, VAR_13 + 420, VAR_17, VAR_16, 60);
            FUNC_1( VAR_12 + 540, VAR_17 + 60, 420 * sizeof(*VAR_12));
        }
    }


    if (VAR_10->window_sequence[0] == VAR_0) {
        FUNC_1( VAR_13, VAR_18 + 60, 60 * sizeof(*VAR_13));
        VAR_8->fdsp->vector_fmul_window(VAR_13 + 60, VAR_17 + 4*120 + 60, VAR_17 + 5*120, VAR_14, 60);
        VAR_8->fdsp->vector_fmul_window(VAR_13 + 180, VAR_17 + 5*120 + 60, VAR_17 + 6*120, VAR_14, 60);
        VAR_8->fdsp->vector_fmul_window(VAR_13 + 300, VAR_17 + 6*120 + 60, VAR_17 + 7*120, VAR_14, 60);
        FUNC_1( VAR_13 + 420, VAR_17 + 7*120 + 60, 60 * sizeof(*VAR_13));
    } else if (VAR_10->window_sequence[0] == VAR_1) {
        FUNC_1( VAR_13, VAR_17 + 480, 420 * sizeof(*VAR_13));
        FUNC_1( VAR_13 + 420, VAR_17 + 7*120 + 60, 60 * sizeof(*VAR_13));
    } else {
        FUNC_1( VAR_13, VAR_17 + 480, 480 * sizeof(*VAR_13));
    }

}
