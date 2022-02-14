
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_6__ {int state64; } ;
struct TYPE_8__ {int header_size; int block_size; int remaining; TYPE_1__ pc; } ;
struct TYPE_7__ {int duration; TYPE_3__* priv_data; } ;
typedef TYPE_1__ ParseContext ;
typedef TYPE_2__ AVCodecParserContext ;
typedef int AVCodecContext ;
typedef TYPE_3__ ADXParseContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int,int const**,int*) ;

__attribute__((used)) static int FUNC_1(AVCodecParserContext *VAR_3,
                           AVCodecContext *VAR_4,
                           const uint8_t **VAR_5, int *VAR_6,
                           const uint8_t *VAR_7, int VAR_8)
{
    ADXParseContext *VAR_9 = VAR_3->priv_data;
    ParseContext *VAR_10 = &VAR_9->pc;
    int VAR_11 = VAR_2;
    int VAR_12;
    uint64_t VAR_13 = VAR_10->state64;

    if (!VAR_9->header_size) {
        for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
            VAR_13 = (VAR_13 << 8) | VAR_7[VAR_12];

            if ((VAR_13 & 0xFFFF0000FFFFFF00) == 0x8000000003120400ULL) {
                int VAR_14 = VAR_13 & 0xFF;
                int VAR_15 = ((VAR_13 >> 32) & 0xFFFF) + 4;
                if (VAR_14 > 0 && VAR_15 >= 8) {
                    VAR_9->header_size = VAR_15;
                    VAR_9->block_size = VAR_1 * VAR_14;
                    VAR_9->remaining = VAR_12 - 7 + VAR_9->header_size + VAR_9->block_size;
                    break;
                }
            }
        }
        VAR_10->state64 = VAR_13;
    }

    if (VAR_9->header_size) {
        if (!VAR_9->remaining)
            VAR_9->remaining = VAR_9->block_size;
        if (VAR_9->remaining <= VAR_8) {
            VAR_11 = VAR_9->remaining;
            VAR_9->remaining = 0;
        } else
            VAR_9->remaining -= VAR_8;
    }

    if (FUNC_0(VAR_10, VAR_11, &VAR_7, &VAR_8) < 0 || !VAR_8) {
        *VAR_5 = ((void*)0);
        *VAR_6 = 0;
        return VAR_8;
    }

    VAR_3->duration = VAR_0;

    *VAR_5 = VAR_7;
    *VAR_6 = VAR_8;
    return VAR_11;
}
