
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int mb_width; } ;
struct TYPE_4__ {scalar_t__* top_borders_allocated; scalar_t__ edge_emu_buffer_allocated; scalar_t__ bipred_scratchpad_allocated; int * top_borders; int edge_emu_buffer; int bipred_scratchpad; TYPE_2__* h264; } ;
typedef TYPE_1__ H264SliceContext ;
typedef TYPE_2__ H264Context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *,scalar_t__*,int) ;
 int FUNC_4 (int *,scalar_t__*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(H264SliceContext *VAR_1, int VAR_2)
{
    const H264Context *VAR_3 = VAR_1->h264;
    int VAR_4 = FUNC_2(FUNC_1(VAR_2) + 32, 32);

    FUNC_3(&VAR_1->bipred_scratchpad, &VAR_1->bipred_scratchpad_allocated, 16 * 6 * VAR_4);


    FUNC_3(&VAR_1->edge_emu_buffer, &VAR_1->edge_emu_buffer_allocated, VAR_4 * 2 * 21);

    FUNC_4(&VAR_1->top_borders[0], &VAR_1->top_borders_allocated[0],
                   VAR_3->mb_width * 16 * 3 * sizeof(uint8_t) * 2);
    FUNC_4(&VAR_1->top_borders[1], &VAR_1->top_borders_allocated[1],
                   VAR_3->mb_width * 16 * 3 * sizeof(uint8_t) * 2);

    if (!VAR_1->bipred_scratchpad || !VAR_1->edge_emu_buffer ||
        !VAR_1->top_borders[0] || !VAR_1->top_borders[1]) {
        FUNC_5(&VAR_1->bipred_scratchpad);
        FUNC_5(&VAR_1->edge_emu_buffer);
        FUNC_5(&VAR_1->top_borders[0]);
        FUNC_5(&VAR_1->top_borders[1]);

        VAR_1->bipred_scratchpad_allocated = 0;
        VAR_1->edge_emu_buffer_allocated = 0;
        VAR_1->top_borders_allocated[0] = 0;
        VAR_1->top_borders_allocated[1] = 0;
        return FUNC_0(VAR_0);
    }

    return 0;
}
