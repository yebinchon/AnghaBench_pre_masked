
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct ogg_stream {int* buf; int pstart; int psize; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_15__ {TYPE_3__** streams; struct ogg* priv_data; } ;
struct TYPE_14__ {void* num; void* den; } ;
struct TYPE_11__ {void* den; void* num; } ;
struct TYPE_13__ {int need_parsing; TYPE_2__* codecpar; TYPE_1__ sample_aspect_ratio; } ;
struct TYPE_12__ {int codec_id; int codec_type; void* height; void* width; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVRational ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int*) ;
 void* FUNC_1 (int*) ;
 void* FUNC_2 (int*) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_5__*,int ,char*,...) ;
 int FUNC_4 (TYPE_3__*,int,void*,void*) ;
 int FUNC_5 (TYPE_5__*,TYPE_3__*,int*,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_7, int VAR_8)
{
    struct ogg *VAR_9 = VAR_7->priv_data;
    struct ogg_stream *VAR_10 = VAR_9->streams + VAR_8;
    uint8_t *VAR_11 = VAR_10->buf + VAR_10->pstart;
    AVStream *VAR_12 = VAR_7->streams[VAR_8];
    AVRational VAR_13;

    if (VAR_10->psize < 7 || VAR_11[0] != 0x4f)
        return 0;

    switch (VAR_11[5]){
    case 0x01:
        if (VAR_10->psize < VAR_6) {
            FUNC_3(VAR_7, VAR_4, "Invalid OggVP8 header packet");
            return VAR_0;
        }

        if (VAR_11[6] != 1) {
            FUNC_3(VAR_7, VAR_5,
                   "Unknown OggVP8 version %d.%d\n", VAR_11[6], VAR_11[7]);
            return VAR_0;
        }

        VAR_12->codecpar->width = FUNC_0(VAR_11 + 8);
        VAR_12->codecpar->height = FUNC_0(VAR_11 + 10);
        VAR_12->sample_aspect_ratio.num = FUNC_1(VAR_11 + 12);
        VAR_12->sample_aspect_ratio.den = FUNC_1(VAR_11 + 15);
        VAR_13.num = FUNC_2(VAR_11 + 18);
        VAR_13.den = FUNC_2(VAR_11 + 22);

        FUNC_4(VAR_12, 64, VAR_13.den, VAR_13.num);
        VAR_12->codecpar->codec_type = VAR_1;
        VAR_12->codecpar->codec_id = VAR_3;
        VAR_12->need_parsing = VAR_2;
        break;
    case 0x02:
        if (VAR_11[6] != 0x20)
            return VAR_0;
        FUNC_5(VAR_7, VAR_12, VAR_11 + 7, VAR_10->psize - 7);
        break;
    default:
        FUNC_3(VAR_7, VAR_4, "Unknown VP8 header type 0x%02X\n", VAR_11[5]);
        return VAR_0;
    }

    return 1;
}
