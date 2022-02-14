
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int width; int dirty; int len; int start; } ;
struct TYPE_5__ {int diff_lines; } ;
typedef TYPE_1__ FlashSV2Context ;
typedef TYPE_2__ Block ;


 scalar_t__ FUNC_0 (int const*,int *,int) ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_2(FlashSV2Context * VAR_0, Block * VAR_1, const uint8_t * VAR_2,
                      uint8_t * VAR_3, uint8_t * VAR_4, int VAR_5, int VAR_6)
{
    if (FUNC_0(VAR_2, VAR_3, VAR_1->width * 3) != 0) {
        VAR_1->dirty = 1;
        FUNC_1(VAR_3, VAR_2, VAR_1->width * 3);

        VAR_0->diff_lines++;

    }
    if (FUNC_0(VAR_2, VAR_4, VAR_1->width * 3) != 0) {
        if (VAR_1->len == 0)
            VAR_1->start = VAR_5;
        VAR_1->len = VAR_5 + 1 - VAR_1->start;
    }
    return 0;
}
