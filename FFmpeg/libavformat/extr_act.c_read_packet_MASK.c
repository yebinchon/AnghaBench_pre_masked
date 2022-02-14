
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int second_packet; int bytes_left_in_chunk; int * audio_buffer; } ;
struct TYPE_12__ {TYPE_2__** streams; int * pb; TYPE_5__* priv_data; } ;
struct TYPE_11__ {int duration; int * data; } ;
struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {int sample_rate; } ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ ACTContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_2,
                          AVPacket *VAR_3)
{
    ACTContext *VAR_4 = VAR_2->priv_data;
    AVIOContext *VAR_5 = VAR_2->pb;
    int VAR_6;
    int VAR_7=VAR_2->streams[0]->codecpar->sample_rate==8000?10:22;


    if(VAR_2->streams[0]->codecpar->sample_rate==8000)
        VAR_6=FUNC_1(VAR_3, 10);
    else
        VAR_6=FUNC_1(VAR_3, 11);

    if(VAR_6)
        return VAR_6;

    if(VAR_2->streams[0]->codecpar->sample_rate==4400 && !VAR_4->second_packet)
    {
        VAR_6 = FUNC_2(VAR_5, VAR_4->audio_buffer, VAR_7);

        if(VAR_6<0)
            return VAR_6;
        if(VAR_6!=VAR_7)
            return FUNC_0(VAR_1);

        VAR_3->data[0]=VAR_4->audio_buffer[11];
        VAR_3->data[1]=VAR_4->audio_buffer[0];
        VAR_3->data[2]=VAR_4->audio_buffer[12];
        VAR_3->data[3]=VAR_4->audio_buffer[1];
        VAR_3->data[4]=VAR_4->audio_buffer[13];
        VAR_3->data[5]=VAR_4->audio_buffer[2];
        VAR_3->data[6]=VAR_4->audio_buffer[14];
        VAR_3->data[7]=VAR_4->audio_buffer[3];
        VAR_3->data[8]=VAR_4->audio_buffer[15];
        VAR_3->data[9]=VAR_4->audio_buffer[4];
        VAR_3->data[10]=VAR_4->audio_buffer[16];

        VAR_4->second_packet=1;
    }
    else if(VAR_2->streams[0]->codecpar->sample_rate==4400 && VAR_4->second_packet)
    {
        VAR_3->data[0]=VAR_4->audio_buffer[5];
        VAR_3->data[1]=VAR_4->audio_buffer[17];
        VAR_3->data[2]=VAR_4->audio_buffer[6];
        VAR_3->data[3]=VAR_4->audio_buffer[18];
        VAR_3->data[4]=VAR_4->audio_buffer[7];
        VAR_3->data[5]=VAR_4->audio_buffer[19];
        VAR_3->data[6]=VAR_4->audio_buffer[8];
        VAR_3->data[7]=VAR_4->audio_buffer[20];
        VAR_3->data[8]=VAR_4->audio_buffer[9];
        VAR_3->data[9]=VAR_4->audio_buffer[21];
        VAR_3->data[10]=VAR_4->audio_buffer[10];

        VAR_4->second_packet=0;
    }
    else
    {
        VAR_6 = FUNC_2(VAR_5, VAR_4->audio_buffer, VAR_7);

        if(VAR_6<0)
            return VAR_6;
        if(VAR_6!=VAR_7)
            return FUNC_0(VAR_1);

        VAR_3->data[0]=VAR_4->audio_buffer[5];
        VAR_3->data[1]=VAR_4->audio_buffer[0];
        VAR_3->data[2]=VAR_4->audio_buffer[6];
        VAR_3->data[3]=VAR_4->audio_buffer[1];
        VAR_3->data[4]=VAR_4->audio_buffer[7];
        VAR_3->data[5]=VAR_4->audio_buffer[2];
        VAR_3->data[6]=VAR_4->audio_buffer[8];
        VAR_3->data[7]=VAR_4->audio_buffer[3];
        VAR_3->data[8]=VAR_4->audio_buffer[9];
        VAR_3->data[9]=VAR_4->audio_buffer[4];
    }

    VAR_4->bytes_left_in_chunk -= VAR_7;

    if(VAR_4->bytes_left_in_chunk < VAR_7)
    {
        FUNC_3(VAR_5, VAR_4->bytes_left_in_chunk);
        VAR_4->bytes_left_in_chunk=VAR_0;
    }

    VAR_3->duration=1;

    return VAR_6;
}
