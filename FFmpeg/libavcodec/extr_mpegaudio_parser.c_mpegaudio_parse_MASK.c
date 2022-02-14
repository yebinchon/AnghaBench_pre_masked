
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_12__ {int codec_id; int sample_rate; int channels; int bit_rate; } ;
struct TYPE_11__ {int duration; int flags; TYPE_2__* priv_data; } ;
struct TYPE_9__ {int state; } ;
struct TYPE_10__ {int frame_size; int header_count; int header; int no_bitrate; TYPE_1__ pc; } ;
typedef TYPE_1__ ParseContext ;
typedef TYPE_2__ MpegAudioParseContext ;
typedef TYPE_3__ AVCodecParserContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int const**,int*) ;
 int FUNC_3 (int,int*,int*,int*,int*,int*) ;
 scalar_t__ FUNC_4 (int const*,char*,int) ;

__attribute__((used)) static int FUNC_5(AVCodecParserContext *VAR_8,
                           AVCodecContext *VAR_9,
                           const uint8_t **VAR_10, int *VAR_11,
                           const uint8_t *VAR_12, int VAR_13)
{
    MpegAudioParseContext *VAR_14 = VAR_8->priv_data;
    ParseContext *VAR_15 = &VAR_14->pc;
    uint32_t VAR_16= VAR_15->state;
    int VAR_17;
    int VAR_18= VAR_4;
    int VAR_19 = !VAR_13;

    for(VAR_17=0; VAR_17<VAR_13; ){
        if(VAR_14->frame_size){
            int VAR_20= FUNC_0(VAR_13 - VAR_17, VAR_14->frame_size);
            VAR_17 += VAR_20;
            VAR_14->frame_size -= VAR_20;
            VAR_16 = 0;

            if(!VAR_14->frame_size){
                VAR_18= VAR_17;
                break;
            }
        }else{
            while(VAR_17<VAR_13){
                int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
                enum AVCodecID VAR_26 = VAR_9->codec_id;

                VAR_16= (VAR_16<<8) + VAR_12[VAR_17++];

                VAR_21 = FUNC_3(VAR_16, &VAR_22, &VAR_23, &VAR_25, &VAR_24, &VAR_26);
                if (VAR_21 < 4) {
                    if (VAR_17 > 4)
                        VAR_14->header_count = -2;
                } else {
                    int VAR_27 = VAR_9->codec_id != VAR_3 && VAR_9->codec_id != VAR_26;
                    if((VAR_16&VAR_7) != (VAR_14->header&VAR_7) && VAR_14->header)
                        VAR_14->header_count= -3;
                    VAR_14->header= VAR_16;
                    VAR_14->header_count++;
                    VAR_14->frame_size = VAR_21-4;

                    if (VAR_14->header_count > VAR_27) {
                        VAR_9->sample_rate= VAR_22;
                        VAR_9->channels = VAR_23;
                        VAR_8->duration = VAR_25;
                        VAR_9->codec_id = VAR_26;
                        if (VAR_14->no_bitrate || !VAR_9->bit_rate) {
                            VAR_14->no_bitrate = 1;
                            VAR_9->bit_rate += (VAR_24 - VAR_9->bit_rate) / (VAR_14->header_count - VAR_27);
                        }
                    }

                    if (VAR_8->flags & VAR_6) {
                        VAR_14->frame_size = 0;
                        VAR_18 = VAR_13;
                    } else if (VAR_26 == VAR_2) {
                        FUNC_1(VAR_9,
                            "MP3ADU full parser");
                        *VAR_10 = ((void*)0);
                        *VAR_11 = 0;
                        return VAR_13;
                    }

                    break;
                }
            }
        }
    }

    VAR_15->state= VAR_16;
    if (FUNC_2(VAR_15, VAR_18, &VAR_12, &VAR_13) < 0) {
        *VAR_10 = ((void*)0);
        *VAR_11 = 0;
        return VAR_13;
    }

    if (VAR_19 && VAR_13 >= VAR_5 && FUNC_4(VAR_12, "TAG", 3) == 0) {
        *VAR_10 = ((void*)0);
        *VAR_11 = 0;
        return VAR_18;
    }

    if (VAR_19 && VAR_13 >= VAR_0 && FUNC_4(VAR_12, VAR_1, 8) == 0) {
        *VAR_10 = ((void*)0);
        *VAR_11 = 0;
        return VAR_18;
    }

    *VAR_10 = VAR_12;
    *VAR_11 = VAR_13;
    return VAR_18;
}
