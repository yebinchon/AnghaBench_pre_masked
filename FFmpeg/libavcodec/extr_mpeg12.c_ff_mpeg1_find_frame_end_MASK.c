
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int state; int frame_start_found; } ;
typedef TYPE_1__ ParseContext ;
typedef int AVCodecParserContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int const* FUNC_1 (int const*,int const*,int*) ;
 int FUNC_2 (int *,int,int,int) ;

int FUNC_3(ParseContext *VAR_7, const uint8_t *VAR_8, int VAR_9, AVCodecParserContext *VAR_10)
{
    int VAR_11;
    uint32_t VAR_12 = VAR_7->state;


    if (VAR_9 == 0)
        return 0;
    for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
        FUNC_0(VAR_7->frame_start_found >= 0 && VAR_7->frame_start_found <= 4);
        if (VAR_7->frame_start_found & 1) {
            if (VAR_12 == VAR_1 && (VAR_8[VAR_11] & 0xF0) != 0x80)
                VAR_7->frame_start_found--;
            else if (VAR_12 == VAR_1 + 2) {
                if ((VAR_8[VAR_11] & 3) == 3)
                    VAR_7->frame_start_found = 0;
                else
                    VAR_7->frame_start_found = (VAR_7->frame_start_found + 1) & 3;
            }
            VAR_12++;
        } else {
            VAR_11 = FUNC_1(VAR_8 + VAR_11, VAR_8 + VAR_9, &VAR_12) - VAR_8 - 1;
            if (VAR_7->frame_start_found == 0 && VAR_12 >= VAR_6 && VAR_12 <= VAR_5) {
                VAR_11++;
                VAR_7->frame_start_found = 4;
            }
            if (VAR_12 == VAR_3) {
                VAR_7->frame_start_found = 0;
                VAR_7->state=-1;
                return VAR_11+1;
            }
            if (VAR_7->frame_start_found == 2 && VAR_12 == VAR_4)
                VAR_7->frame_start_found = 0;
            if (VAR_7->frame_start_found < 4 && VAR_12 == VAR_1)
                VAR_7->frame_start_found++;
            if (VAR_7->frame_start_found == 4 && (VAR_12 & 0xFFFFFF00) == 0x100) {
                if (VAR_12 < VAR_6 || VAR_12 > VAR_5) {
                    VAR_7->frame_start_found = 0;
                    VAR_7->state = -1;
                    return VAR_11 - 3;
                }
            }
            if (VAR_7->frame_start_found == 0 && VAR_10 && VAR_12 == VAR_2) {
                FUNC_2(VAR_10, VAR_11 - 3, 1, VAR_11 > 3);
            }
        }
    }
    VAR_7->state = VAR_12;
    return VAR_0;
}
