
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* imdct_half ) (int *,int*,int*) ;} ;
struct TYPE_12__ {int* buf_mdct; TYPE_2__* fdsp; int mdct_ld; TYPE_1__ mdct; } ;
struct TYPE_11__ {scalar_t__* use_kb_window; } ;
struct TYPE_10__ {int* coeffs; int* ret; int* saved; TYPE_4__ ics; } ;
struct TYPE_9__ {int (* vector_fmul_window ) (int*,int*,int*,int ,int) ;} ;
typedef TYPE_3__ SingleChannelElement ;
typedef TYPE_4__ IndividualChannelStream ;
typedef int INTFLOAT ;
typedef TYPE_5__ AACContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int *,int*,int*) ;
 int FUNC_3 (int*,int*,int*,int ,int) ;
 int FUNC_4 (int*,int*,int*,int ,int) ;

__attribute__((used)) static void FUNC_5(AACContext *VAR_2, SingleChannelElement *VAR_3)
{
    IndividualChannelStream *VAR_4 = &VAR_3->ics;
    INTFLOAT *VAR_5 = VAR_3->coeffs;
    INTFLOAT *VAR_6 = VAR_3->ret;
    INTFLOAT *VAR_7 = VAR_3->saved;
    INTFLOAT *VAR_8 = VAR_2->buf_mdct;





    VAR_2->mdct.imdct_half(&VAR_2->mdct_ld, VAR_8, VAR_5);







    if (VAR_4->use_kb_window[1]) {

        FUNC_1(VAR_6, VAR_7, 192 * sizeof(*VAR_6));
        VAR_2->fdsp->vector_fmul_window(VAR_6 + 192, VAR_7 + 192, VAR_8, FUNC_0(VAR_0), 64);
        FUNC_1( VAR_6 + 320, VAR_8 + 64, 192 * sizeof(*VAR_6));
    } else {
        VAR_2->fdsp->vector_fmul_window(VAR_6, VAR_7, VAR_8, FUNC_0(VAR_1), 256);
    }


    FUNC_1(VAR_7, VAR_8 + 256, 256 * sizeof(*VAR_7));
}
