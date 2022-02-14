
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int (* mdct_calc ) (TYPE_6__*,int *,int *) ;} ;
struct TYPE_9__ {TYPE_6__ mdct_ltp; TYPE_1__* fdsp; } ;
struct TYPE_8__ {scalar_t__* window_sequence; scalar_t__* use_kb_window; } ;
struct TYPE_7__ {int (* vector_fmul_reverse ) (int *,int *,int const*,int) ;int (* vector_fmul ) (int *,int *,int const*,int) ;} ;
typedef TYPE_2__ IndividualChannelStream ;
typedef int INTFLOAT ;
typedef TYPE_3__ AACContext ;


 int * FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *,int const*,int) ;
 int FUNC_3 (int *,int *,int const*,int) ;
 int FUNC_4 (int *,int *,int const*,int) ;
 int FUNC_5 (int *,int *,int const*,int) ;
 int FUNC_6 (TYPE_6__*,int *,int *) ;

__attribute__((used)) static void FUNC_7(AACContext *VAR_6, INTFLOAT *VAR_7,
                                   INTFLOAT *VAR_8, IndividualChannelStream *VAR_9)
{
    const INTFLOAT *VAR_10 = VAR_9->use_kb_window[0] ? FUNC_0(VAR_2) : FUNC_0(VAR_4);
    const INTFLOAT *VAR_11 = VAR_9->use_kb_window[0] ? FUNC_0(VAR_3) : FUNC_0(VAR_5);
    const INTFLOAT *VAR_12 = VAR_9->use_kb_window[1] ? FUNC_0(VAR_2) : FUNC_0(VAR_4);
    const INTFLOAT *VAR_13 = VAR_9->use_kb_window[1] ? FUNC_0(VAR_3) : FUNC_0(VAR_5);

    if (VAR_9->window_sequence[0] != VAR_1) {
        VAR_6->fdsp->vector_fmul(VAR_8, VAR_8, VAR_12, 1024);
    } else {
        FUNC_1(VAR_8, 0, 448 * sizeof(*VAR_8));
        VAR_6->fdsp->vector_fmul(VAR_8 + 448, VAR_8 + 448, VAR_13, 128);
    }
    if (VAR_9->window_sequence[0] != VAR_0) {
        VAR_6->fdsp->vector_fmul_reverse(VAR_8 + 1024, VAR_8 + 1024, VAR_10, 1024);
    } else {
        VAR_6->fdsp->vector_fmul_reverse(VAR_8 + 1024 + 448, VAR_8 + 1024 + 448, VAR_11, 128);
        FUNC_1(VAR_8 + 1024 + 576, 0, 448 * sizeof(*VAR_8));
    }
    VAR_6->mdct_ltp.mdct_calc(&VAR_6->mdct_ltp, VAR_7, VAR_8);
}
