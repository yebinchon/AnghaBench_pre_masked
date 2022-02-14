
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* d; struct TYPE_4__* data_ptrs; struct TYPE_4__* sample_peak; struct TYPE_4__* channel_map; struct TYPE_4__* audio_data; struct TYPE_4__* short_term_block_energy_histogram; struct TYPE_4__* block_energy_histogram; } ;
typedef TYPE_1__ FFEBUR128State ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(FFEBUR128State ** VAR_0)
{
    FUNC_0((*VAR_0)->d->block_energy_histogram);
    FUNC_0((*VAR_0)->d->short_term_block_energy_histogram);
    FUNC_0((*VAR_0)->d->audio_data);
    FUNC_0((*VAR_0)->d->channel_map);
    FUNC_0((*VAR_0)->d->sample_peak);
    FUNC_0((*VAR_0)->d->data_ptrs);
    FUNC_0((*VAR_0)->d);
    FUNC_0(*VAR_0);
    *VAR_0 = ((void*)0);
}
