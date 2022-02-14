
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int (* mdct_calc ) (TYPE_3__*,scalar_t__,scalar_t__) ;} ;
struct TYPE_7__ {float* buf; scalar_t__ in_buff; scalar_t__ mdct_out; TYPE_3__ mdct_ctx; TYPE_1__* fdsp; } ;
struct TYPE_6__ {int (* vector_fmul_reverse ) (scalar_t__,float*,int ,int) ;int (* vector_fmul ) (scalar_t__,float*,int ,int) ;} ;
typedef TYPE_2__ NellyMoserEncodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,float*,int ,int) ;
 int FUNC_1 (scalar_t__,float*,int ,int) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,float*,int ,int) ;
 int FUNC_4 (scalar_t__,float*,int ,int) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_6(NellyMoserEncodeContext *VAR_2)
{
    float *VAR_3 = VAR_2->buf;
    float *VAR_4 = VAR_2->buf + VAR_0;
    float *VAR_5 = VAR_2->buf + 2 * VAR_0;

    VAR_2->fdsp->vector_fmul (VAR_2->in_buff, VAR_3, VAR_1, VAR_0);
    VAR_2->fdsp->vector_fmul_reverse(VAR_2->in_buff + VAR_0, VAR_4, VAR_1, VAR_0);
    VAR_2->mdct_ctx.mdct_calc(&VAR_2->mdct_ctx, VAR_2->mdct_out, VAR_2->in_buff);

    VAR_2->fdsp->vector_fmul (VAR_2->in_buff, VAR_4, VAR_1, VAR_0);
    VAR_2->fdsp->vector_fmul_reverse(VAR_2->in_buff + VAR_0, VAR_5, VAR_1, VAR_0);
    VAR_2->mdct_ctx.mdct_calc(&VAR_2->mdct_ctx, VAR_2->mdct_out + VAR_0, VAR_2->in_buff);
}
