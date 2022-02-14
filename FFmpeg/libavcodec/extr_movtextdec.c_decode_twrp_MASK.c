
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int wrap_flag; } ;
struct TYPE_5__ {TYPE_1__ w; int box_flags; } ;
typedef TYPE_2__ MovTextContext ;
typedef int AVPacket ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const uint8_t *VAR_1, MovTextContext *VAR_2, AVPacket *VAR_3)
{
    VAR_2->box_flags |= VAR_0;
    VAR_2->w.wrap_flag = *VAR_1++;
    return 0;
}
