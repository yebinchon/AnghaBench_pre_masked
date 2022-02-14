
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int edges; int mb_x; int mb_y; int mb_width; int chroma_orient; int* prediction_table; scalar_t__ raw_orient; } ;
typedef TYPE_1__ IntraX8Context ;



__attribute__((used)) static void FUNC_0(IntraX8Context *const VAR_0)
{
    VAR_0->edges = 1 * !(VAR_0->mb_x >> 1);
    VAR_0->edges |= 2 * !(VAR_0->mb_y >> 1);
    VAR_0->edges |= 4 * (VAR_0->mb_x >= (2 * VAR_0->mb_width - 1));

    VAR_0->raw_orient = 0;

    if (VAR_0->edges & 3) {
        VAR_0->chroma_orient = 4 << ((0xCC >> VAR_0->edges) & 1);
        return;
    }

    VAR_0->chroma_orient = (VAR_0->prediction_table[2 * VAR_0->mb_x - 2] & 0x03) << 2;
}
