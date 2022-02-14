
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int w; int h; int motion_x; int motion_y; int motion_scale; int dst_x; int dst_y; int src_x; int src_y; int source; scalar_t__ flags; } ;
typedef TYPE_1__ AVMotionVector ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVMotionVector *VAR_0, uint32_t VAR_1,
                  int VAR_2, int VAR_3,
                  int VAR_4, int VAR_5, int VAR_6,
                  int VAR_7)
{
    VAR_0->w = FUNC_2(VAR_1) || FUNC_1(VAR_1) ? 8 : 16;
    VAR_0->h = FUNC_2(VAR_1) || FUNC_0(VAR_1) ? 8 : 16;
    VAR_0->motion_x = VAR_4;
    VAR_0->motion_y = VAR_5;
    VAR_0->motion_scale = VAR_6;
    VAR_0->dst_x = VAR_2;
    VAR_0->dst_y = VAR_3;
    VAR_0->src_x = VAR_2 + VAR_4 / VAR_6;
    VAR_0->src_y = VAR_3 + VAR_5 / VAR_6;
    VAR_0->source = VAR_7 ? 1 : -1;
    VAR_0->flags = 0;
    return 1;
}
