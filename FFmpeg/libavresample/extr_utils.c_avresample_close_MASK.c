
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ use_channel_map; int mix_matrix; int am; int resample; int ac_out; int ac_in; int * out_fifo; int out_buffer; int resample_out_buffer; int in_buffer; } ;
typedef TYPE_1__ AVAudioResampleContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(AVAudioResampleContext *VAR_0)
{
    FUNC_3(&VAR_0->in_buffer);
    FUNC_3(&VAR_0->resample_out_buffer);
    FUNC_3(&VAR_0->out_buffer);
    FUNC_0(VAR_0->out_fifo);
    VAR_0->out_fifo = ((void*)0);
    FUNC_2(&VAR_0->ac_in);
    FUNC_2(&VAR_0->ac_out);
    FUNC_5(&VAR_0->resample);
    FUNC_4(&VAR_0->am);
    FUNC_1(&VAR_0->mix_matrix);

    VAR_0->use_channel_map = 0;
}
