
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {scalar_t__ index; } ;
struct TYPE_12__ {int remaining_size; int state; int (* sync ) (int,TYPE_4__*,int *,int*) ;int header_size; scalar_t__ codec_id; int bit_rate; int service_type; int samples; int channel_layout; int channels; int sample_rate; int need_next_header; TYPE_1__ pc; } ;
struct TYPE_11__ {scalar_t__ codec_id; int bit_rate; int audio_service_type; int channel_layout; int channels; int sample_rate; } ;
struct TYPE_10__ {int duration; TYPE_4__* priv_data; } ;
typedef TYPE_1__ ParseContext ;
typedef TYPE_2__ AVCodecParserContext ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ AACAC3ParseContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int const**,int*) ;
 int FUNC_2 (int,TYPE_4__*,int *,int*) ;

int FUNC_3(AVCodecParserContext *VAR_3,
                     AVCodecContext *VAR_4,
                     const uint8_t **VAR_5, int *VAR_6,
                     const uint8_t *VAR_7, int VAR_8)
{
    AACAC3ParseContext *VAR_9 = VAR_3->priv_data;
    ParseContext *VAR_10 = &VAR_9->pc;
    int VAR_11, VAR_12;
    int VAR_13;
    int VAR_14 = 0;

get_next:
    VAR_12=VAR_2;
    if(VAR_9->remaining_size <= VAR_8){
        if(VAR_9->remaining_size && !VAR_9->need_next_header){
            VAR_12= VAR_9->remaining_size;
            VAR_9->remaining_size = 0;
        }else{
            VAR_11=0;
            for(VAR_12=VAR_9->remaining_size; VAR_12<VAR_8; VAR_12++){
                VAR_9->state = (VAR_9->state<<8) + VAR_7[VAR_12];
                if((VAR_11=VAR_9->sync(VAR_9->state, VAR_9, &VAR_9->need_next_header, &VAR_13)))
                    break;
            }
            if(VAR_11<=0){
                VAR_12=VAR_2;
            }else{
                VAR_14 = 1;
                VAR_9->state=0;
                VAR_12-= VAR_9->header_size -1;
                VAR_9->remaining_size = VAR_11;
                if(!VAR_13 || VAR_10->index+VAR_12<=0){
                    VAR_9->remaining_size += VAR_12;
                    goto get_next;
                }
                else if (VAR_12 < 0) {
                    VAR_9->remaining_size += VAR_12;
                }
            }
        }
    }

    if(FUNC_1(VAR_10, VAR_12, &VAR_7, &VAR_8)<0){
        VAR_9->remaining_size -= FUNC_0(VAR_9->remaining_size, VAR_8);
        *VAR_5 = ((void*)0);
        *VAR_6 = 0;
        return VAR_8;
    }

    *VAR_5 = VAR_7;
    *VAR_6 = VAR_8;


    if(VAR_9->codec_id)
        VAR_4->codec_id = VAR_9->codec_id;

    if (VAR_14) {





        if (VAR_4->codec_id != VAR_0) {
            VAR_4->sample_rate = VAR_9->sample_rate;
            if (VAR_4->codec_id != VAR_1) {
                VAR_4->channels = VAR_9->channels;
                VAR_4->channel_layout = VAR_9->channel_layout;
            }
            VAR_3->duration = VAR_9->samples;
            VAR_4->audio_service_type = VAR_9->service_type;
        }

        if (VAR_4->codec_id != VAR_1)
            VAR_4->bit_rate = VAR_9->bit_rate;
    }

    return VAR_12;
}
