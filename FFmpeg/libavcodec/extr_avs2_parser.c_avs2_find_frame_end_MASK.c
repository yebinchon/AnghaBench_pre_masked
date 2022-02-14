
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int frame_start_found; int state; } ;
typedef TYPE_1__ ParseContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(ParseContext *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    int VAR_5 = VAR_2->frame_start_found;
    uint32_t VAR_6 = VAR_2->state;
    int VAR_7 = 0;

    if (!VAR_5) {
        for (; VAR_7 < VAR_4; ++VAR_7) {
            VAR_6 = (VAR_6<<8) | VAR_3[VAR_7];
            if (FUNC_0(VAR_3[VAR_7])){
                ++VAR_7;
                VAR_5 = 1;
                break;
            }
        }
    }

    if (VAR_5) {
        if (!VAR_4)
            return VAR_0;
        for (; VAR_7 < VAR_4; ++VAR_7) {
            VAR_6 = (VAR_6 << 8) | VAR_3[VAR_7];
            if ((VAR_6 & 0xFFFFFF00) == 0x100 && VAR_6 > VAR_1) {
                VAR_2->frame_start_found = 0;
                VAR_2->state = -1;
                return VAR_7 - 3;
            }
        }
    }

    VAR_2->frame_start_found = VAR_5;
    VAR_2->state = VAR_6;

    return VAR_0;
}
