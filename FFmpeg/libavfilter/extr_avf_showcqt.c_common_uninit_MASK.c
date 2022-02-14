
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {TYPE_3__** data; int * buf; } ;
struct TYPE_6__ {struct TYPE_6__* val; } ;
struct TYPE_5__ {int fft_time; int cqt_time; int process_cqt_time; int update_sono_time; int alloc_time; int bar_time; int axis_time; int sono_time; int cqt_len; TYPE_3__* bar_v_buf; TYPE_3__* sono_v_buf; TYPE_3__* freq; TYPE_3__* rcp_h_buf; TYPE_3__* h_buf; TYPE_3__* c_buf; TYPE_3__* attack_data; TYPE_3__* cqt_result; TYPE_3__* fft_result; TYPE_3__* fft_data; TYPE_3__* coeffs; int * fft_ctx; TYPE_4__* sono_frame; TYPE_4__* axis_frame; int ctx; } ;
typedef TYPE_1__ ShowCQTContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__**) ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (int ,int,char*,int) ;

__attribute__((used)) static void FUNC_4(ShowCQTContext *VAR_1)
{
    int VAR_2;
    int VAR_3 = VAR_0;
    int64_t VAR_4;

    if (VAR_1->fft_time)
        FUNC_3(VAR_1->ctx, VAR_3, "fft_time         = %16.3f s.\n", VAR_1->fft_time * 1e-6);
    if (VAR_1->cqt_time)
        FUNC_3(VAR_1->ctx, VAR_3, "cqt_time         = %16.3f s.\n", VAR_1->cqt_time * 1e-6);
    if (VAR_1->process_cqt_time)
        FUNC_3(VAR_1->ctx, VAR_3, "process_cqt_time = %16.3f s.\n", VAR_1->process_cqt_time * 1e-6);
    if (VAR_1->update_sono_time)
        FUNC_3(VAR_1->ctx, VAR_3, "update_sono_time = %16.3f s.\n", VAR_1->update_sono_time * 1e-6);
    if (VAR_1->alloc_time)
        FUNC_3(VAR_1->ctx, VAR_3, "alloc_time       = %16.3f s.\n", VAR_1->alloc_time * 1e-6);
    if (VAR_1->bar_time)
        FUNC_3(VAR_1->ctx, VAR_3, "bar_time         = %16.3f s.\n", VAR_1->bar_time * 1e-6);
    if (VAR_1->axis_time)
        FUNC_3(VAR_1->ctx, VAR_3, "axis_time        = %16.3f s.\n", VAR_1->axis_time * 1e-6);
    if (VAR_1->sono_time)
        FUNC_3(VAR_1->ctx, VAR_3, "sono_time        = %16.3f s.\n", VAR_1->sono_time * 1e-6);

    VAR_4 = VAR_1->fft_time + VAR_1->cqt_time + VAR_1->process_cqt_time + VAR_1->update_sono_time
              + VAR_1->alloc_time + VAR_1->bar_time + VAR_1->axis_time + VAR_1->sono_time;
    if (VAR_4)
        FUNC_3(VAR_1->ctx, VAR_3, "plot_time        = %16.3f s.\n", VAR_4 * 1e-6);

    VAR_1->fft_time = VAR_1->cqt_time = VAR_1->process_cqt_time = VAR_1->update_sono_time
                = VAR_1->alloc_time = VAR_1->bar_time = VAR_1->axis_time = VAR_1->sono_time = 0;

    if (VAR_1->axis_frame && !VAR_1->axis_frame->buf[0]) {
        FUNC_2(VAR_1->axis_frame->data);
        for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
            VAR_1->axis_frame->data[VAR_2] = ((void*)0);
    }

    FUNC_1(&VAR_1->axis_frame);
    FUNC_1(&VAR_1->sono_frame);
    FUNC_0(VAR_1->fft_ctx);
    VAR_1->fft_ctx = ((void*)0);
    if (VAR_1->coeffs)
        for (VAR_2 = 0; VAR_2 < VAR_1->cqt_len; VAR_2++)
            FUNC_2(&VAR_1->coeffs[VAR_2].val);
    FUNC_2(&VAR_1->coeffs);
    FUNC_2(&VAR_1->fft_data);
    FUNC_2(&VAR_1->fft_result);
    FUNC_2(&VAR_1->cqt_result);
    FUNC_2(&VAR_1->attack_data);
    FUNC_2(&VAR_1->c_buf);
    FUNC_2(&VAR_1->h_buf);
    FUNC_2(&VAR_1->rcp_h_buf);
    FUNC_2(&VAR_1->freq);
    FUNC_2(&VAR_1->sono_v_buf);
    FUNC_2(&VAR_1->bar_v_buf);
}
