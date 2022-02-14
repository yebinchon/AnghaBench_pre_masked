
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int skip_packets; } ;
typedef TYPE_1__ XMAParserContext ;
struct TYPE_5__ {int duration; int key_frame; TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVCodecParserContext ;
typedef int AVCodecContext ;



__attribute__((used)) static int FUNC_0(AVCodecParserContext *VAR_0, AVCodecContext *VAR_1,
                     const uint8_t **VAR_2, int *VAR_3,
                     const uint8_t *VAR_4, int VAR_5)
{
    XMAParserContext *VAR_6 = VAR_0->priv_data;

    if (VAR_5 % 2048 == 0) {
        int VAR_7 = 0, VAR_8, VAR_9 = VAR_5 / 2048;

        for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
            if (VAR_6->skip_packets == 0) {
                VAR_7 += VAR_4[VAR_8 * 2048] * 128;
                VAR_6->skip_packets = VAR_4[VAR_8 * 2048 + 3] + 1;
            }
            VAR_6->skip_packets--;
        }

        VAR_0->duration = VAR_7;
        VAR_0->key_frame = !!VAR_7;
    }



    *VAR_2 = VAR_4;
    *VAR_3 = VAR_5;
    return VAR_5;
}
