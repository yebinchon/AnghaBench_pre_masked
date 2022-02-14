
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int bytes; int audio_codec; void* num_channels; scalar_t__ big_endian; int sample_rate; } ;
typedef TYPE_1__ EaDemuxContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_4)
{
    EaDemuxContext *VAR_5 = VAR_4->priv_data;
    AVIOContext *VAR_6 = VAR_4->pb;
    int VAR_7;

    VAR_5->sample_rate = VAR_5->big_endian ? FUNC_1(VAR_6) : FUNC_2(VAR_6);
    VAR_5->bytes = FUNC_0(VAR_6);
    VAR_5->num_channels = FUNC_0(VAR_6);
    VAR_7 = FUNC_0(VAR_6);
    FUNC_3(VAR_6, 13);

    switch (VAR_7) {
    case 0:
        switch (VAR_5->bytes) {
        case 1:
            VAR_5->audio_codec = VAR_3;
            break;
        case 2:
            VAR_5->audio_codec = VAR_2;
            break;
        }
        break;
    case 1:
        VAR_5->audio_codec = VAR_1;
        VAR_5->bytes = 1;
        break;
    case 2:
        VAR_5->audio_codec = VAR_0;
        break;
    default:
        FUNC_4(VAR_4,
                              "stream type; audio compression_type=%i",
                              VAR_7);
    }
}
