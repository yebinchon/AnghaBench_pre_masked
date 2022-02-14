
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
struct TYPE_15__ {TYPE_1__* iformat; int pb; TYPE_3__* priv_data; } ;
struct TYPE_14__ {TYPE_2__* codecpar; } ;
struct TYPE_13__ {int sample_rate; int channels; } ;
struct TYPE_12__ {int sample_rate; int channels; int bits_per_coded_sample; int block_align; int codec_id; int codec_type; } ;
struct TYPE_11__ {int * mime_type; int raw_codec_id; } ;
typedef TYPE_3__ PCMAudioDemuxerContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,int ,char*,int *) ;
 int FUNC_5 (int ,char*,int ,int **) ;
 int FUNC_6 (int *,int *,size_t) ;
 TYPE_4__* FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_4__*,int,int,int) ;
 int FUNC_9 (int *,char*,...) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 size_t FUNC_11 (int *) ;
 int * FUNC_12 (int *,char*) ;

__attribute__((used)) static int FUNC_13(AVFormatContext *VAR_6)
{
    PCMAudioDemuxerContext *VAR_7 = VAR_6->priv_data;
    AVStream *VAR_8;
    uint8_t *VAR_9 = ((void*)0);

    VAR_8 = FUNC_7(VAR_6, ((void*)0));
    if (!VAR_8)
        return FUNC_0(VAR_5);


    VAR_8->codecpar->codec_type = VAR_1;
    VAR_8->codecpar->codec_id = VAR_6->iformat->raw_codec_id;
    VAR_8->codecpar->sample_rate = VAR_7->sample_rate;
    VAR_8->codecpar->channels = VAR_7->channels;

    FUNC_5(VAR_6->pb, "mime_type", VAR_4, &VAR_9);
    if (VAR_9 && VAR_6->iformat->mime_type) {
        int VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
        size_t VAR_13 = FUNC_11(VAR_6->iformat->mime_type);
        if (!FUNC_6(VAR_6->iformat->mime_type, VAR_9, VAR_13)) {
            uint8_t *VAR_14 = VAR_9 + VAR_13;
            VAR_13 = FUNC_11(VAR_9);
            while (VAR_14 < VAR_9 + VAR_13) {
                VAR_14 = FUNC_12(VAR_14, ";");
                if (!VAR_14++)
                    break;
                if (!VAR_10)
                    FUNC_9(VAR_14, " rate=%d", &VAR_10);
                if (!VAR_11)
                    FUNC_9(VAR_14, " channels=%d", &VAR_11);
                if (!VAR_12) {
                     char VAR_15[14];
                     if (FUNC_9(VAR_14, " endianness=%13s", VAR_15) == 1) {
                         VAR_12 = FUNC_10(VAR_15, "little-endian") == 0;
                     }
                }
            }
            if (VAR_10 <= 0) {
                FUNC_4(VAR_6, VAR_3,
                       "Invalid sample_rate found in mime_type \"%s\"\n",
                       VAR_9);
                FUNC_2(&VAR_9);
                return VAR_0;
            }
            VAR_8->codecpar->sample_rate = VAR_10;
            if (VAR_11 > 0)
                VAR_8->codecpar->channels = VAR_11;
            if (VAR_12)
                VAR_8->codecpar->codec_id = VAR_2;
        }
    }
    FUNC_2(&VAR_9);

    VAR_8->codecpar->bits_per_coded_sample =
        FUNC_3(VAR_8->codecpar->codec_id);

    FUNC_1(VAR_8->codecpar->bits_per_coded_sample > 0);

    VAR_8->codecpar->block_align =
        VAR_8->codecpar->bits_per_coded_sample * VAR_8->codecpar->channels / 8;

    FUNC_8(VAR_8, 64, 1, VAR_8->codecpar->sample_rate);
    return 0;
}
