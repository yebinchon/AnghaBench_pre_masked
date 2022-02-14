
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int hlit_color; } ;
struct TYPE_5__ {TYPE_1__ c; int box_flags; } ;
typedef TYPE_2__ MovTextContext ;
typedef int AVPacket ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_1(const uint8_t *VAR_1, MovTextContext *VAR_2, AVPacket *VAR_3)
{
    VAR_2->box_flags |= VAR_0;
    FUNC_0(VAR_2->c.hlit_color, VAR_1, 4);
    VAR_1 += 4;
    return 0;
}
