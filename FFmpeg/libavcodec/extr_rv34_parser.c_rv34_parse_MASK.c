
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {scalar_t__ codec_id; } ;
struct TYPE_7__ {scalar_t__ pts; int pict_type; TYPE_1__* priv_data; } ;
struct TYPE_6__ {scalar_t__ key_dts; int key_pts; } ;
typedef TYPE_1__ RV34ParseContext ;
typedef TYPE_2__ AVCodecParserContext ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const*) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_1(AVCodecParserContext *VAR_3,
                      AVCodecContext *VAR_4,
                      const uint8_t **VAR_5, int *VAR_6,
                      const uint8_t *VAR_7, int VAR_8)
{
    RV34ParseContext *VAR_9 = VAR_3->priv_data;
    int VAR_10, VAR_11, VAR_12;

    if (VAR_8 < 13 + *VAR_7 * 8) {
        *VAR_5 = VAR_7;
        *VAR_6 = VAR_8;
        return VAR_8;
    }

    VAR_12 = FUNC_0(VAR_7 + 9 + *VAR_7 * 8);
    if (VAR_4->codec_id == VAR_0) {
        VAR_10 = (VAR_12 >> 27) & 3;
        VAR_11 = (VAR_12 >> 7) & 0x1FFF;
    } else {
        VAR_10 = (VAR_12 >> 29) & 3;
        VAR_11 = (VAR_12 >> 6) & 0x1FFF;
    }

    if (VAR_10 != 3 && VAR_3->pts != VAR_1) {
        VAR_9->key_dts = VAR_3->pts;
        VAR_9->key_pts = VAR_11;
    } else {
        if (VAR_10 != 3)
            VAR_3->pts = VAR_9->key_dts + ((VAR_11 - VAR_9->key_pts) & 0x1FFF);
        else
            VAR_3->pts = VAR_9->key_dts - ((VAR_9->key_pts - VAR_11) & 0x1FFF);
    }
    VAR_3->pict_type = VAR_2[VAR_10];

    *VAR_5 = VAR_7;
    *VAR_6 = VAR_8;
    return VAR_8;
}
