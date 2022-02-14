
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int dst_x; int dst_y; int src_x; int src_y; int source; scalar_t__ flags; } ;
typedef TYPE_1__ AVMotionVector ;



__attribute__((used)) static void FUNC_0(AVMotionVector *VAR_0, int VAR_1,
                        int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    VAR_0->w = VAR_1;
    VAR_0->h = VAR_1;
    VAR_0->dst_x = VAR_2 + (VAR_1 >> 1);
    VAR_0->dst_y = VAR_3 + (VAR_1 >> 1);
    VAR_0->src_x = VAR_4 + (VAR_1 >> 1);
    VAR_0->src_y = VAR_5 + (VAR_1 >> 1);
    VAR_0->source = VAR_6 ? 1 : -1;
    VAR_0->flags = 0;
}
