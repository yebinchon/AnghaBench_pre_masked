
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {void* hlit_end; void* hlit_start; } ;
struct TYPE_5__ {TYPE_1__ h; int box_flags; } ;
typedef TYPE_2__ MovTextContext ;
typedef int AVPacket ;


 void* FUNC_0 (int const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const uint8_t *VAR_1, MovTextContext *VAR_2, AVPacket *VAR_3)
{
    VAR_2->box_flags |= VAR_0;
    VAR_2->h.hlit_start = FUNC_0(VAR_1);
    VAR_1 += 2;
    VAR_2->h.hlit_end = FUNC_0(VAR_1);
    VAR_1 += 2;
    return 0;
}
