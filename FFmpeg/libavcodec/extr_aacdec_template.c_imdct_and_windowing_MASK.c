
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


struct TYPE_14__ {int (* imdct_half ) (TYPE_6__*,long long*,long long*) ;} ;
struct TYPE_13__ {int (* imdct_half ) (TYPE_5__*,long long*,long long*) ;} ;
struct TYPE_12__ {long long* buf_mdct; long long* temp; TYPE_1__* fdsp; TYPE_5__ mdct; TYPE_6__ mdct_small; } ;
struct TYPE_11__ {scalar_t__* window_sequence; scalar_t__* use_kb_window; } ;
struct TYPE_10__ {long long* coeffs; long long* ret; long long* saved; TYPE_3__ ics; } ;
struct TYPE_9__ {int (* vector_fmul_window ) (long long*,long long*,long long*,long long const*,int) ;} ;
typedef TYPE_2__ SingleChannelElement ;
typedef TYPE_3__ IndividualChannelStream ;
typedef long long INTFLOAT ;
typedef TYPE_4__ AACContext ;


 long long* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (long long*,long long*,int) ;
 int FUNC_2 (TYPE_6__*,long long*,long long*) ;
 int FUNC_3 (long long*,long long*,long long*,long long const*,int) ;
 int FUNC_4 (long long*,long long*,long long*,long long const*,int) ;
 int FUNC_5 (long long*,long long*,long long*,long long const*,int) ;
 int FUNC_6 (TYPE_5__*,long long*,long long*) ;
 int FUNC_7 (long long*,long long*,long long*,long long const*,int) ;
 int FUNC_8 (long long*,long long*,long long*,long long const*,int) ;
 int FUNC_9 (long long*,long long*,long long*,long long const*,int) ;
 int FUNC_10 (long long*,long long*,long long*,long long const*,int) ;
 int FUNC_11 (long long*,long long*,long long*,long long const*,int) ;
 int FUNC_12 (long long*,long long*,long long*,long long const*,int) ;
 int FUNC_13 (long long*,long long*,long long*,long long const*,int) ;

__attribute__((used)) static void FUNC_14(AACContext *VAR_8, SingleChannelElement *VAR_9)
{
    IndividualChannelStream *VAR_10 = &VAR_9->ics;
    INTFLOAT *VAR_11 = VAR_9->coeffs;
    INTFLOAT *VAR_12 = VAR_9->ret;
    INTFLOAT *VAR_13 = VAR_9->saved;
    const INTFLOAT *VAR_14 = VAR_10->use_kb_window[0] ? FUNC_0(VAR_5) : FUNC_0(VAR_7);
    const INTFLOAT *VAR_15 = VAR_10->use_kb_window[1] ? FUNC_0(VAR_4) : FUNC_0(VAR_6);
    const INTFLOAT *VAR_16 = VAR_10->use_kb_window[1] ? FUNC_0(VAR_5) : FUNC_0(VAR_7);
    INTFLOAT *VAR_17 = VAR_8->buf_mdct;
    INTFLOAT *VAR_18 = VAR_8->temp;
    int VAR_19;


    if (VAR_10->window_sequence[0] == VAR_0) {
        for (VAR_19 = 0; VAR_19 < 1024; VAR_19 += 128)
            VAR_8->mdct_small.imdct_half(&VAR_8->mdct_small, VAR_17 + VAR_19, VAR_11 + VAR_19);
    } else {
        VAR_8->mdct.imdct_half(&VAR_8->mdct, VAR_17, VAR_11);




    }







    if ((VAR_10->window_sequence[1] == VAR_3 || VAR_10->window_sequence[1] == VAR_2) &&
            (VAR_10->window_sequence[0] == VAR_3 || VAR_10->window_sequence[0] == VAR_1)) {
        VAR_8->fdsp->vector_fmul_window( VAR_12, VAR_13, VAR_17, VAR_15, 512);
    } else {
        FUNC_1( VAR_12, VAR_13, 448 * sizeof(*VAR_12));

        if (VAR_10->window_sequence[0] == VAR_0) {
            VAR_8->fdsp->vector_fmul_window(VAR_12 + 448 + 0*128, VAR_13 + 448, VAR_17 + 0*128, VAR_16, 64);
            VAR_8->fdsp->vector_fmul_window(VAR_12 + 448 + 1*128, VAR_17 + 0*128 + 64, VAR_17 + 1*128, VAR_14, 64);
            VAR_8->fdsp->vector_fmul_window(VAR_12 + 448 + 2*128, VAR_17 + 1*128 + 64, VAR_17 + 2*128, VAR_14, 64);
            VAR_8->fdsp->vector_fmul_window(VAR_12 + 448 + 3*128, VAR_17 + 2*128 + 64, VAR_17 + 3*128, VAR_14, 64);
            VAR_8->fdsp->vector_fmul_window(VAR_18, VAR_17 + 3*128 + 64, VAR_17 + 4*128, VAR_14, 64);
            FUNC_1( VAR_12 + 448 + 4*128, VAR_18, 64 * sizeof(*VAR_12));
        } else {
            VAR_8->fdsp->vector_fmul_window(VAR_12 + 448, VAR_13 + 448, VAR_17, VAR_16, 64);
            FUNC_1( VAR_12 + 576, VAR_17 + 64, 448 * sizeof(*VAR_12));
        }
    }


    if (VAR_10->window_sequence[0] == VAR_0) {
        FUNC_1( VAR_13, VAR_18 + 64, 64 * sizeof(*VAR_13));
        VAR_8->fdsp->vector_fmul_window(VAR_13 + 64, VAR_17 + 4*128 + 64, VAR_17 + 5*128, VAR_14, 64);
        VAR_8->fdsp->vector_fmul_window(VAR_13 + 192, VAR_17 + 5*128 + 64, VAR_17 + 6*128, VAR_14, 64);
        VAR_8->fdsp->vector_fmul_window(VAR_13 + 320, VAR_17 + 6*128 + 64, VAR_17 + 7*128, VAR_14, 64);
        FUNC_1( VAR_13 + 448, VAR_17 + 7*128 + 64, 64 * sizeof(*VAR_13));
    } else if (VAR_10->window_sequence[0] == VAR_1) {
        FUNC_1( VAR_13, VAR_17 + 512, 448 * sizeof(*VAR_13));
        FUNC_1( VAR_13 + 448, VAR_17 + 7*128 + 64, 64 * sizeof(*VAR_13));
    } else {
        FUNC_1( VAR_13, VAR_17 + 512, 512 * sizeof(*VAR_13));
    }
}
