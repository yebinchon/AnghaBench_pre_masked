
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ogg_stream {int* buf; int pstart; int psize; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_8__ {TYPE_2__** streams; struct ogg* priv_data; } ;
struct TYPE_7__ {TYPE_1__* codecpar; } ;
struct TYPE_6__ {int width; int height; int channels; int sample_rate; int bit_rate; void* codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (TYPE_2__*,int,int ,int) ;
 int VAR_3 ;
 void* FUNC_4 (int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(AVFormatContext *VAR_5, int VAR_6)
{
    struct ogg *VAR_7 = VAR_5->priv_data;
    struct ogg_stream *VAR_8 = VAR_7->streams + VAR_6;
    AVStream *VAR_9 = VAR_5->streams[VAR_6];
    uint8_t *VAR_10 = VAR_8->buf + VAR_8->pstart;
    uint32_t VAR_11;

    if(!(*VAR_10 & 1))
        return 0;
    if(*VAR_10 != 1)
        return 1;

    if (VAR_8->psize < 100)
        return VAR_0;
    VAR_11 = FUNC_1(VAR_10 + 96);

    if(VAR_11 == 0x05589f80){
        if (VAR_8->psize < 184)
            return VAR_0;

        VAR_9->codecpar->codec_type = VAR_2;
        VAR_9->codecpar->codec_id = FUNC_4(VAR_3, FUNC_1(VAR_10 + 68));
        FUNC_3(VAR_9, 64, FUNC_2(VAR_10 + 164), 10000000);
        VAR_9->codecpar->width = FUNC_1(VAR_10 + 176);
        VAR_9->codecpar->height = FUNC_1(VAR_10 + 180);
    } else if(VAR_11 == 0x05589f81){
        if (VAR_8->psize < 136)
            return VAR_0;

        VAR_9->codecpar->codec_type = VAR_1;
        VAR_9->codecpar->codec_id = FUNC_4(VAR_4, FUNC_0(VAR_10 + 124));
        VAR_9->codecpar->channels = FUNC_0(VAR_10 + 126);
        VAR_9->codecpar->sample_rate = FUNC_1(VAR_10 + 128);
        VAR_9->codecpar->bit_rate = FUNC_1(VAR_10 + 132) * 8;
    }

    return 1;
}
