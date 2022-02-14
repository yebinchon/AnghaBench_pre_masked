
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int param_written; } ;
typedef TYPE_2__ VocEncContext ;
struct TYPE_12__ {int codec_tag; int sample_rate; int bits_per_coded_sample; int channels; } ;
struct TYPE_11__ {TYPE_1__** streams; int * pb; TYPE_2__* priv_data; } ;
struct TYPE_10__ {int size; int data; } ;
struct TYPE_8__ {TYPE_5__* codecpar; } ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVCodecParameters ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    VocEncContext *VAR_6 = VAR_4->priv_data;
    AVCodecParameters *VAR_7 = VAR_4->streams[0]->codecpar;
    AVIOContext *VAR_8 = VAR_4->pb;

    if (!VAR_6->param_written) {
        if (VAR_7->codec_tag > 3) {
            FUNC_0(VAR_8, VAR_1);
            FUNC_2(VAR_8, VAR_5->size + 12);
            FUNC_3(VAR_8, VAR_7->sample_rate);
            FUNC_0(VAR_8, VAR_7->bits_per_coded_sample);
            FUNC_0(VAR_8, VAR_7->channels);
            FUNC_1(VAR_8, VAR_7->codec_tag);
            FUNC_3(VAR_8, 0);
        } else {
            if (VAR_4->streams[0]->codecpar->channels > 1) {
                FUNC_0(VAR_8, VAR_0);
                FUNC_2(VAR_8, 4);
                FUNC_1(VAR_8, 65536-(256000000 + VAR_7->sample_rate*VAR_7->channels/2)/(VAR_7->sample_rate*VAR_7->channels));
                FUNC_0(VAR_8, VAR_7->codec_tag);
                FUNC_0(VAR_8, VAR_7->channels - 1);
            }
            FUNC_0(VAR_8, VAR_2);
            FUNC_2(VAR_8, VAR_5->size + 2);
            FUNC_0(VAR_8, 256 - (1000000 + VAR_7->sample_rate/2) / VAR_7->sample_rate);
            FUNC_0(VAR_8, VAR_7->codec_tag);
        }
        VAR_6->param_written = 1;
    } else {
        FUNC_0(VAR_8, VAR_3);
        FUNC_2(VAR_8, VAR_5->size);
    }

    FUNC_4(VAR_8, VAR_5->data, VAR_5->size);
    return 0;
}
