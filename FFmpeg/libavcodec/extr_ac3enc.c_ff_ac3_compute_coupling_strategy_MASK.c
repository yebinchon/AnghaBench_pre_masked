
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* channel_in_cpl; int num_cpl_channels; int cpl_in_use; int new_cpl_strategy; int new_cpl_leak; int new_snr_offsets; int* end_freq; } ;
struct TYPE_4__ {int num_blocks; int fbw_channels; scalar_t__ cpl_on; int* start_freq; int bandwidth_code; TYPE_2__* blocks; } ;
typedef TYPE_1__ AC3EncodeContext ;
typedef TYPE_2__ AC3Block ;


 size_t VAR_0 ;

void FUNC_0(AC3EncodeContext *VAR_1)
{
    int VAR_2, VAR_3;
    int VAR_4;
    int VAR_5;



    for (VAR_2 = 0; VAR_2 < VAR_1->num_blocks; VAR_2++) {
        AC3Block *VAR_6 = &VAR_1->blocks[VAR_2];
        for (VAR_3 = 1; VAR_3 <= VAR_1->fbw_channels; VAR_3++)
            VAR_6->channel_in_cpl[VAR_3] = VAR_1->cpl_on;
    }



    VAR_4 = 0;
    VAR_5 = 0;
    for (VAR_2 = 0; VAR_2 < VAR_1->num_blocks; VAR_2++) {
        AC3Block *VAR_7 = &VAR_1->blocks[VAR_2];
        VAR_7->num_cpl_channels = 0;
        for (VAR_3 = 1; VAR_3 <= VAR_1->fbw_channels; VAR_3++)
            VAR_7->num_cpl_channels += VAR_7->channel_in_cpl[VAR_3];
        VAR_7->cpl_in_use = VAR_7->num_cpl_channels > 1;
        VAR_5 += VAR_7->cpl_in_use;
        if (!VAR_7->cpl_in_use) {
            VAR_7->num_cpl_channels = 0;
            for (VAR_3 = 1; VAR_3 <= VAR_1->fbw_channels; VAR_3++)
                VAR_7->channel_in_cpl[VAR_3] = 0;
        }

        VAR_7->new_cpl_strategy = !VAR_2;
        if (VAR_2) {
            for (VAR_3 = 1; VAR_3 <= VAR_1->fbw_channels; VAR_3++) {
                if (VAR_7->channel_in_cpl[VAR_3] != VAR_1->blocks[VAR_2-1].channel_in_cpl[VAR_3]) {
                    VAR_7->new_cpl_strategy = 1;
                    break;
                }
            }
        }
        VAR_7->new_cpl_leak = VAR_7->new_cpl_strategy;

        if (!VAR_2 || (VAR_7->cpl_in_use && !VAR_4)) {
            VAR_7->new_snr_offsets = 1;
            if (VAR_7->cpl_in_use)
                VAR_4 = 1;
        } else {
            VAR_7->new_snr_offsets = 0;
        }
    }
    if (!VAR_5)
        VAR_1->cpl_on = 0;


    for (VAR_2 = 0; VAR_2 < VAR_1->num_blocks; VAR_2++) {
        AC3Block *VAR_8 = &VAR_1->blocks[VAR_2];
        for (VAR_3 = 1; VAR_3 <= VAR_1->fbw_channels; VAR_3++) {
            if (VAR_8->channel_in_cpl[VAR_3])
                VAR_8->end_freq[VAR_3] = VAR_1->start_freq[VAR_0];
            else
                VAR_8->end_freq[VAR_3] = VAR_1->bandwidth_code * 3 + 73;
        }
    }
}
