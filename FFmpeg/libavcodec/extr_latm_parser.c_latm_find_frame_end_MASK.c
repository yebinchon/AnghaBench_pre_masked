
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_5__ {int frame_start_found; int state; } ;
struct TYPE_6__ {int count; TYPE_1__ pc; } ;
typedef TYPE_1__ ParseContext ;
typedef TYPE_2__ LATMParseContext ;
typedef TYPE_3__ AVCodecParserContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(AVCodecParserContext *VAR_4, const uint8_t *VAR_5,
                               int VAR_6)
{
    LATMParseContext *VAR_7 = VAR_4->priv_data;
    ParseContext *VAR_8 = &VAR_7->pc;
    int VAR_9, VAR_10;
    uint32_t VAR_11;

    VAR_9 = VAR_8->frame_start_found;
    VAR_11 = VAR_8->state;

    if (!VAR_9) {
        for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
            VAR_11 = (VAR_11<<8) | VAR_5[VAR_10];
            if ((VAR_11 & VAR_2) == VAR_1) {
                VAR_10++;
                VAR_7->count = -VAR_10;
                VAR_9 = 1;
                break;
            }
        }
    }

    if (VAR_9) {

        if (VAR_6 == 0)
            return 0;
        if ((VAR_11 & VAR_3) - VAR_7->count <= VAR_6) {
            VAR_8->frame_start_found = 0;
            VAR_8->state = -1;
            return (VAR_11 & VAR_3) - VAR_7->count;
        }
    }

    VAR_7->count += VAR_6;
    VAR_8->frame_start_found = VAR_9;
    VAR_8->state = VAR_11;

    return VAR_0;
}
