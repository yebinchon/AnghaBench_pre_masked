
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
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(ParseContext *VAR_4, const uint8_t *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;
    uint32_t VAR_9;

    VAR_7 = VAR_4->frame_start_found;
    VAR_9 = VAR_4->state;

    VAR_8 = 0;
    if (!VAR_7) {
        for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
            VAR_9 = (VAR_9 << 8) | VAR_5[VAR_8];
            if (VAR_9 == VAR_3) {
                VAR_8++;
                VAR_7 = 1;
                break;
            }
        }
    }

    if (VAR_7) {

        if (VAR_6 == 0)
            return 0;
        for (; VAR_8 < VAR_6; VAR_8++) {
            VAR_9 = (VAR_9 << 8) | VAR_5[VAR_8];
            if ((VAR_9 & 0xFFFFFF00) == 0x100) {
                if (VAR_9 == VAR_2 || VAR_9 == VAR_1)
                    continue;
                VAR_4->frame_start_found = 0;
                VAR_4->state = -1;
                return VAR_8 - 3;
            }
        }
    }
    VAR_4->frame_start_found = VAR_7;
    VAR_4->state = VAR_9;
    return VAR_0;
}
