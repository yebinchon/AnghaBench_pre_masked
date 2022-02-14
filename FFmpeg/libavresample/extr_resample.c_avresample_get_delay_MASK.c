
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* resample; int resample_needed; } ;
struct TYPE_6__ {scalar_t__ padding_size; TYPE_1__* buffer; } ;
struct TYPE_5__ {scalar_t__ nb_samples; } ;
typedef TYPE_2__ ResampleContext ;
typedef TYPE_3__ AVAudioResampleContext ;


 int FUNC_0 (scalar_t__,int ) ;

int FUNC_1(AVAudioResampleContext *VAR_0)
{
    ResampleContext *VAR_1 = VAR_0->resample;

    if (!VAR_0->resample_needed || !VAR_0->resample)
        return 0;

    return FUNC_0(VAR_1->buffer->nb_samples - VAR_1->padding_size, 0);
}
