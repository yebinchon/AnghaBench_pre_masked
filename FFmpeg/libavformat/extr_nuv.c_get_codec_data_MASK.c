
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int nuv_frametype ;
struct TYPE_6__ {int codec_id; void* bits_per_coded_sample; void* codec_tag; int channel_layout; void* channels; void* sample_rate; int extradata_size; int extradata; } ;
struct TYPE_5__ {int need_parsing; TYPE_4__* codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (char,char,char,char) ;



 int FUNC_2 (void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char*,void*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int VAR_7 ;
 void* FUNC_9 (int ,void*) ;
 int FUNC_10 (int *,TYPE_4__*,int *,int) ;
 int FUNC_11 (void*,int ,int ,int) ;
 int FUNC_12 (void*,void*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_13(AVFormatContext *VAR_9, AVIOContext *VAR_10, AVStream *VAR_11,
                          AVStream *VAR_12, int VAR_13)
{
    nuv_frametype VAR_14;

    if (!VAR_11 && !VAR_13)
        return 1;
    while (!FUNC_5(VAR_10)) {
        int VAR_15, VAR_16;

        VAR_14 = FUNC_6(VAR_10);
        switch (VAR_14) {
        case 130:
            VAR_16 = FUNC_6(VAR_10);
            FUNC_8(VAR_10, 6);
            VAR_15 = FUNC_2(FUNC_7(VAR_10));
            if (VAR_11 && VAR_16 == 'R') {
                if (VAR_11->codecpar->extradata) {
                    FUNC_3(&VAR_11->codecpar->extradata);
                    VAR_11->codecpar->extradata_size = 0;
                }
                if (FUNC_10(((void*)0), VAR_11->codecpar, VAR_10, VAR_15) < 0)
                    return FUNC_0(VAR_6);
                VAR_15 = 0;
                if (!VAR_13)
                    return 0;
            }
            break;
        case 129:
            FUNC_8(VAR_10, 7);
            VAR_15 = FUNC_2(FUNC_7(VAR_10));
            if (VAR_15 != 128 * 4)
                break;
            FUNC_7(VAR_10);
            if (VAR_11) {
                VAR_11->codecpar->codec_tag = FUNC_7(VAR_10);
                VAR_11->codecpar->codec_id =
                    FUNC_9(VAR_7, VAR_11->codecpar->codec_tag);
                if (VAR_11->codecpar->codec_tag == FUNC_1('R', 'J', 'P', 'G'))
                    VAR_11->codecpar->codec_id = VAR_3;
            } else
                FUNC_8(VAR_10, 4);

            if (VAR_12) {
                int VAR_17;

                VAR_12->codecpar->codec_tag = FUNC_7(VAR_10);
                VAR_12->codecpar->sample_rate = FUNC_7(VAR_10);
                if (VAR_12->codecpar->sample_rate <= 0) {
                    FUNC_4(VAR_9, VAR_5, "Invalid sample rate %d\n", VAR_12->codecpar->sample_rate);
                    return VAR_0;
                }
                VAR_12->codecpar->bits_per_coded_sample = FUNC_7(VAR_10);
                VAR_12->codecpar->channels = FUNC_7(VAR_10);
                VAR_12->codecpar->channel_layout = 0;

                VAR_17 = FUNC_12(VAR_12->codecpar->codec_tag,
                                         VAR_12->codecpar->bits_per_coded_sample);
                if (VAR_17 == VAR_2) {
                    VAR_17 = FUNC_9(VAR_8, VAR_12->codecpar->codec_tag);
                    if (VAR_17 == VAR_4)
                        VAR_17 = FUNC_11(VAR_12->codecpar->bits_per_coded_sample,
                                                 0, 0, ~1);
                }
                VAR_12->codecpar->codec_id = VAR_17;

                VAR_12->need_parsing = VAR_1;
            } else
                FUNC_8(VAR_10, 4 * 4);

            VAR_15 -= 6 * 4;
            FUNC_8(VAR_10, VAR_15);
            return 0;
        case 128:
            VAR_15 = 11;
            break;
        default:
            FUNC_8(VAR_10, 7);
            VAR_15 = FUNC_2(FUNC_7(VAR_10));
            break;
        }
        FUNC_8(VAR_10, VAR_15);
    }

    return 0;
}
