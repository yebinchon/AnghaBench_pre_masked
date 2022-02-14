
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_4__ {int state64; int frame_start_found; } ;
struct TYPE_5__ {int cur_byte; int remaining; int h; int w; TYPE_1__ pc; } ;
typedef TYPE_1__ ParseContext ;
typedef TYPE_2__ DNXHDParserContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(DNXHDParserContext *VAR_1,
                                const uint8_t *VAR_2, int VAR_3)
{
    ParseContext *VAR_4 = &VAR_1->pc;
    uint64_t VAR_5 = VAR_4->state64;
    int VAR_6 = VAR_4->frame_start_found;
    int VAR_7 = 0;

    if (!VAR_6) {
        for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
            VAR_5 = (VAR_5 << 8) | VAR_2[VAR_7];
            if (FUNC_2(VAR_5 & 0xffffffffff00LL) != 0) {
                VAR_7++;
                VAR_6 = 1;
                VAR_1->cur_byte = 0;
                VAR_1->remaining = 0;
                break;
            }
        }
    }

    if (VAR_6 && !VAR_1->remaining) {
        if (!VAR_3)
            return 0;
        for (; VAR_7 < VAR_3; VAR_7++) {
            VAR_1->cur_byte++;
            VAR_5 = (VAR_5 << 8) | VAR_2[VAR_7];

            if (VAR_1->cur_byte == 24) {
                VAR_1->h = (VAR_5 >> 32) & 0xFFFF;
            } else if (VAR_1->cur_byte == 26) {
                VAR_1->w = (VAR_5 >> 32) & 0xFFFF;
            } else if (VAR_1->cur_byte == 42) {
                int VAR_8 = (VAR_5 >> 32) & 0xFFFFFFFF;
                int VAR_9;

                if (VAR_8 <= 0)
                    continue;

                VAR_9 = FUNC_0(VAR_8);
                if (VAR_9 <= 0) {
                    VAR_9 = FUNC_1(VAR_8, VAR_1->w, VAR_1->h);
                    if (VAR_9 <= 0)
                        continue;
                }
                VAR_9 += VAR_7 - 47;
                VAR_1->remaining = VAR_9;
                if (VAR_3 >= VAR_1->remaining) {
                    VAR_4->frame_start_found = 0;
                    VAR_4->state64 = -1;
                    VAR_1->cur_byte = 0;
                    VAR_1->remaining = 0;
                    return VAR_9;
                } else {
                    VAR_1->remaining -= VAR_3;

                    VAR_5 = -1;
                    VAR_1->cur_byte += VAR_3 - VAR_7;
                    break;
                }
            }
        }
    } else if (VAR_6) {
        if (VAR_1->remaining > VAR_3) {
            VAR_1->remaining -= VAR_3;
        } else {
            int VAR_10 = VAR_1->remaining;

            VAR_4->frame_start_found = 0;
            VAR_4->state64 = -1;
            VAR_1->cur_byte = 0;
            VAR_1->remaining = 0;
            return VAR_10;
        }
    }
    VAR_4->frame_start_found = VAR_6;
    VAR_4->state64 = VAR_5;
    return VAR_0;
}
