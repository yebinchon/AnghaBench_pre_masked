
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_5__ {int state64; int frame_start_found; } ;
struct TYPE_6__ {TYPE_1__ pc; } ;
typedef TYPE_1__ ParseContext ;
typedef TYPE_2__ HEVCParserContext ;
typedef TYPE_3__ AVCodecParserContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_0(AVCodecParserContext *VAR_8, const uint8_t *VAR_9,
                               int VAR_10)
{
    HEVCParserContext *VAR_11 = VAR_8->priv_data;
    ParseContext *VAR_12 = &VAR_11->pc;
    int VAR_13;

    for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
        int VAR_14;

        VAR_12->state64 = (VAR_12->state64 << 8) | VAR_9[VAR_13];

        if (((VAR_12->state64 >> 3 * 8) & 0xFFFFFF) != VAR_7)
            continue;

        VAR_14 = (VAR_12->state64 >> (2 * 8 + 1)) & 0x3F;

        if ((VAR_14 >= VAR_6 && VAR_14 <= VAR_3) || VAR_14 == VAR_5 ||
            (VAR_14 >= 41 && VAR_14 <= 44) || (VAR_14 >= 48 && VAR_14 <= 55)) {
            if (VAR_12->frame_start_found) {
                VAR_12->frame_start_found = 0;
                return VAR_13 - 5;
            }
        } else if (VAR_14 <= VAR_4 ||
                   (VAR_14 >= VAR_1 && VAR_14 <= VAR_2)) {
            int VAR_15 = VAR_9[VAR_13] >> 7;
            if (VAR_15) {
                if (!VAR_12->frame_start_found) {
                    VAR_12->frame_start_found = 1;
                } else {
                    VAR_12->frame_start_found = 0;
                    return VAR_13 - 5;
                }
            }
        }
    }

    return VAR_0;
}
