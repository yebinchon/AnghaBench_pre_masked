
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* new_cpl_coords; int new_cpl_leak; scalar_t__ cpl_in_use; scalar_t__* channel_in_cpl; } ;
struct TYPE_4__ {int fbw_channels; int num_blocks; TYPE_2__* blocks; } ;
typedef TYPE_1__ AC3EncodeContext ;
typedef TYPE_2__ AC3Block ;


 int VAR_0 ;

void FUNC_0(AC3EncodeContext *VAR_1)
{
    int VAR_2, VAR_3;
    int VAR_4[VAR_0];


    for (VAR_2 = 1; VAR_2 <= VAR_1->fbw_channels; VAR_2++)
        VAR_4[VAR_2] = 1;
    for (VAR_3 = 0; VAR_3 < VAR_1->num_blocks; VAR_3++) {
        AC3Block *VAR_5 = &VAR_1->blocks[VAR_3];
        for (VAR_2 = 1; VAR_2 <= VAR_1->fbw_channels; VAR_2++) {
            if (VAR_5->channel_in_cpl[VAR_2]) {
                if (VAR_4[VAR_2]) {
                    VAR_5->new_cpl_coords[VAR_2] = 2;
                    VAR_4[VAR_2] = 0;
                }
            } else {
                VAR_4[VAR_2] = 1;
            }
        }
    }


    for (VAR_3 = 0; VAR_3 < VAR_1->num_blocks; VAR_3++) {
        AC3Block *VAR_6 = &VAR_1->blocks[VAR_3];
        if (VAR_6->cpl_in_use) {
            VAR_6->new_cpl_leak = 2;
            break;
        }
    }
}
