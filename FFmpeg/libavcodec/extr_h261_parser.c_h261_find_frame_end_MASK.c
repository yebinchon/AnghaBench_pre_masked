
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int frame_start_found; int state; } ;
typedef TYPE_1__ ParseContext ;
typedef int AVCodecContext ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(ParseContext *VAR_1, AVCodecContext *VAR_2,
                               const uint8_t *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    uint32_t VAR_8;

    VAR_5 = VAR_1->frame_start_found;
    VAR_8 = VAR_1->state;

    for (VAR_6 = 0; VAR_6 < VAR_4 && !VAR_5; VAR_6++) {
        VAR_8 = (VAR_8 << 8) | VAR_3[VAR_6];
        for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
            if (((VAR_8 >> VAR_7) & 0xFFFFF0) == 0x000100) {
                VAR_5 = 1;
                break;
            }
        }
    }
    if (VAR_5) {
        for (; VAR_6 < VAR_4; VAR_6++) {
            VAR_8 = (VAR_8 << 8) | VAR_3[VAR_6];
            for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
                if (((VAR_8 >> VAR_7) & 0xFFFFF0) == 0x000100) {
                    VAR_1->frame_start_found = 0;
                    VAR_1->state = (VAR_8 >> (3 * 8)) + 0xFF00;
                    return VAR_6 - 2;
                }
            }
        }
    }

    VAR_1->frame_start_found = VAR_5;
    VAR_1->state = VAR_8;
    return VAR_0;
}
