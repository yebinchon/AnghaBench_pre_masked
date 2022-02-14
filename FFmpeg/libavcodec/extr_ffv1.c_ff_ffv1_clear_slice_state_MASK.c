
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int plane_count; scalar_t__ ac; scalar_t__* initial_states; TYPE_2__* plane; } ;
struct TYPE_7__ {int* interlace_bit_state; size_t quant_table_index; int context_count; TYPE_1__* vlc_state; int state; } ;
struct TYPE_6__ {int error_sum; int count; scalar_t__ bias; scalar_t__ drift; } ;
typedef TYPE_2__ PlaneContext ;
typedef TYPE_3__ FFV1Context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int ,int,int) ;

void FUNC_2(FFV1Context *VAR_2, FFV1Context *VAR_3)
{
    int VAR_4, VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_2->plane_count; VAR_4++) {
        PlaneContext *VAR_6 = &VAR_3->plane[VAR_4];

        VAR_6->interlace_bit_state[0] = 128;
        VAR_6->interlace_bit_state[1] = 128;

        if (VAR_3->ac != VAR_0) {
            if (VAR_2->initial_states[VAR_6->quant_table_index]) {
                FUNC_0(VAR_6->state, VAR_2->initial_states[VAR_6->quant_table_index],
                       VAR_1 * VAR_6->context_count);
            } else
                FUNC_1(VAR_6->state, 128, VAR_1 * VAR_6->context_count);
        } else {
            for (VAR_5 = 0; VAR_5 < VAR_6->context_count; VAR_5++) {
                VAR_6->vlc_state[VAR_5].drift = 0;
                VAR_6->vlc_state[VAR_5].error_sum = 4;
                VAR_6->vlc_state[VAR_5].bias = 0;
                VAR_6->vlc_state[VAR_5].count = 1;
            }
        }
    }
}
