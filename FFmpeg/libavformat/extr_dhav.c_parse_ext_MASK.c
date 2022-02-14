
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int width; int height; int video_codec; int frame_rate; int audio_channels; int audio_codec; int sample_rate; } ;
typedef TYPE_1__ DHAVContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 void** VAR_1 ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_2, int VAR_3)
{
    DHAVContext *VAR_4 = VAR_2->priv_data;
    int VAR_5, VAR_6 = 0;

    while (VAR_3 > 0) {
        int VAR_7 = FUNC_2(VAR_2->pb);

        switch (VAR_7) {
        case 0x80:
            VAR_6 = FUNC_4(VAR_2->pb, 1);
            VAR_4->width = 8 * FUNC_2(VAR_2->pb);
            VAR_4->height = 8 * FUNC_2(VAR_2->pb);
            VAR_3 -= 4;
            break;
        case 0x81:
            VAR_6 = FUNC_4(VAR_2->pb, 1);
            VAR_4->video_codec = FUNC_2(VAR_2->pb);
            VAR_4->frame_rate = FUNC_2(VAR_2->pb);
            VAR_3 -= 4;
            break;
        case 0x82:
            VAR_6 = FUNC_4(VAR_2->pb, 3);
            VAR_4->width = FUNC_3(VAR_2->pb);
            VAR_4->height = FUNC_3(VAR_2->pb);
            VAR_3 -= 8;
            break;
        case 0x83:
            VAR_4->audio_channels = FUNC_2(VAR_2->pb);
            VAR_4->audio_codec = FUNC_2(VAR_2->pb);
            VAR_5 = FUNC_2(VAR_2->pb);
            if (VAR_5 < FUNC_0(VAR_1)) {
                VAR_4->sample_rate = VAR_1[VAR_5];
            } else {
                VAR_4->sample_rate = 8000;
            }
            VAR_3 -= 4;
            break;
        case 0x88:
            VAR_6 = FUNC_4(VAR_2->pb, 7);
            VAR_3 -= 8;
            break;
        case 0x8c:
            VAR_6 = FUNC_4(VAR_2->pb, 1);
            VAR_4->audio_channels = FUNC_2(VAR_2->pb);
            VAR_4->audio_codec = FUNC_2(VAR_2->pb);
            VAR_5 = FUNC_2(VAR_2->pb);
            if (VAR_5 < FUNC_0(VAR_1)) {
                VAR_4->sample_rate = VAR_1[VAR_5];
            } else {
                VAR_4->sample_rate = 8000;
            }
            VAR_6 = FUNC_4(VAR_2->pb, 3);
            VAR_3 -= 8;
            break;
        case 0x91:
        case 0x92:
        case 0x93:
        case 0x95:
        case 0x9a:
        case 0x9b:
        case 0xb3:
            VAR_6 = FUNC_4(VAR_2->pb, 7);
            VAR_3 -= 8;
            break;
        case 0x84:
        case 0x85:
        case 0x8b:
        case 0x94:
        case 0x96:
        case 0xa0:
        case 0xb2:
        case 0xb4:
            VAR_6 = FUNC_4(VAR_2->pb, 3);
            VAR_3 -= 4;
            break;
        default:
            FUNC_1(VAR_2, VAR_0, "Unknown type: %X, skipping rest of header.\n", VAR_7);
            VAR_6 = FUNC_4(VAR_2->pb, VAR_3 - 1);
            VAR_3 = 0;
        }

        if (VAR_6 < 0)
            return VAR_6;
    }

    return 0;
}
