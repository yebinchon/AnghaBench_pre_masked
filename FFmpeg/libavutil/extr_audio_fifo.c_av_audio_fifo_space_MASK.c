
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int allocated_samples; int nb_samples; } ;
typedef TYPE_1__ AVAudioFifo ;



int FUNC_0(AVAudioFifo *VAR_0)
{
    return VAR_0->allocated_samples - VAR_0->nb_samples;
}
