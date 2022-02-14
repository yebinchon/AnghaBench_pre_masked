
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef long int64_t ;
struct TYPE_17__ {int length; unsigned char* text; int version; scalar_t__ type; scalar_t__ sequence; } ;
typedef TYPE_2__ VivoContext ;
struct TYPE_20__ {int duration; int metadata; int pb; TYPE_2__* priv_data; } ;
struct TYPE_19__ {int member_0; int member_1; long num; long den; } ;
struct TYPE_18__ {TYPE_1__* codecpar; scalar_t__ start_time; } ;
struct TYPE_16__ {int sample_rate; long width; long height; int bits_per_coded_sample; int block_align; int bit_rate; int channels; int codec_type; scalar_t__ codec_tag; int codec_id; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVRational ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,unsigned char*,unsigned char*,int ) ;
 TYPE_4__ FUNC_2 (TYPE_4__) ;
 int FUNC_3 (TYPE_5__*,int ,char*,...) ;
 int FUNC_4 (TYPE_4__*,unsigned char*,int,int ,TYPE_5__*) ;
 int FUNC_5 (long,int,int) ;
 TYPE_3__* FUNC_6 (TYPE_5__*,int *) ;
 int FUNC_7 (int ,unsigned char*,int) ;
 int FUNC_8 (int ,size_t) ;
 int FUNC_9 (TYPE_3__*,int,int,long) ;
 int FUNC_10 (unsigned char*,char*,int*) ;
 unsigned char* FUNC_11 (unsigned char*,char) ;
 int FUNC_12 (unsigned char*,char*) ;
 unsigned char* FUNC_13 (unsigned char*,char*) ;
 long FUNC_14 (unsigned char*,char**,int) ;
 int FUNC_15 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_16(AVFormatContext *VAR_8)
{
    VivoContext *VAR_9 = VAR_8->priv_data;
    AVRational VAR_10 = { 1, 25};
    AVStream *VAR_11, *VAR_12;
    unsigned char *VAR_13, *VAR_14, *VAR_15, *VAR_16;
    long VAR_17;
    int VAR_18, VAR_19;
    int64_t VAR_20 = 0;
    char *VAR_21;

    VAR_12 = FUNC_6(VAR_8, ((void*)0));
    VAR_11 = FUNC_6(VAR_8, ((void*)0));
    if (!VAR_11 || !VAR_12)
        return FUNC_0(VAR_7);

    VAR_11->codecpar->sample_rate = 8000;

    while (1) {
        if ((VAR_18 = FUNC_15(VAR_8)) < 0)
            return VAR_18;


        if (VAR_9->sequence || VAR_9->type)
            break;

        if (VAR_9->length <= 1024) {
            FUNC_7(VAR_8->pb, VAR_9->text, VAR_9->length);
            VAR_9->text[VAR_9->length] = 0;
        } else {
            FUNC_3(VAR_8, VAR_6, "too big header, skipping\n");
            FUNC_8(VAR_8->pb, VAR_9->length);
            continue;
        }

        VAR_13 = VAR_9->text;
        while (*VAR_13) {
            VAR_14 = FUNC_13(VAR_13, "\r\n");
            if (!VAR_14)
                break;

            *VAR_14 = 0;
            VAR_15 = VAR_13;
            VAR_13 = VAR_14 + 2;

            if (VAR_14 == VAR_15)
                continue;

            VAR_16 = FUNC_11(VAR_15, ':');
            if (!VAR_16) {
                FUNC_3(VAR_8, VAR_6, "missing colon in key:value pair '%s'\n",
                       VAR_15);
                continue;
            }

            *VAR_16++ = 0;

            FUNC_3(VAR_8, VAR_5, "header: '%s' = '%s'\n", VAR_15, VAR_16);

            VAR_17 = FUNC_14(VAR_16, &VAR_21, 10);
            VAR_19 = 0;
            if (*VAR_21 == 0) {
                FUNC_3(VAR_8, VAR_5, "got a valid integer (%ld)\n", VAR_17);
                VAR_19 = 1;
                if (!FUNC_12(VAR_15, "Duration")) {
                    VAR_20 = VAR_17;
                } else if (!FUNC_12(VAR_15, "Width")) {
                    VAR_12->codecpar->width = VAR_17;
                } else if (!FUNC_12(VAR_15, "Height")) {
                    VAR_12->codecpar->height = VAR_17;
                } else if (!FUNC_12(VAR_15, "TimeUnitNumerator")) {
                    VAR_10.num = VAR_17 / 1000;
                } else if (!FUNC_12(VAR_15, "TimeUnitDenominator")) {
                    VAR_10.den = VAR_17;
                } else if (!FUNC_12(VAR_15, "SamplingFrequency")) {
                    VAR_11->codecpar->sample_rate = VAR_17;
                } else if (!FUNC_12(VAR_15, "NominalBitrate")) {
                } else if (!FUNC_12(VAR_15, "Length")) {

                } else {
                    VAR_19 = 0;
                }
            }

            if (!FUNC_12(VAR_15, "Version")) {
                if (FUNC_10(VAR_16, "Vivo/%d.", &VAR_9->version) != 1)
                    return VAR_0;
                VAR_19 = 1;
            } else if (!FUNC_12(VAR_15, "FPS")) {
                AVRational VAR_22;

                VAR_19 = 1;
                if (!FUNC_4(&VAR_22, VAR_16, 10000, VAR_6, VAR_8))
                    VAR_10 = FUNC_2(VAR_22);
            }

            if (!VAR_19)
                FUNC_1(&VAR_8->metadata, VAR_15, VAR_16, 0);
        }
    }

    FUNC_9(VAR_11, 64, 1, VAR_11->codecpar->sample_rate);
    FUNC_9(VAR_12, 64, VAR_10.num, VAR_10.den);
    if (VAR_20)
        VAR_8->duration = FUNC_5(VAR_20, 1000, 1);

    VAR_12->start_time = 0;
    VAR_12->codecpar->codec_tag = 0;
    VAR_12->codecpar->codec_type = VAR_2;

    if (VAR_9->version == 1) {
        VAR_12->codecpar->codec_id = VAR_4;
        VAR_11->codecpar->codec_id = VAR_3;
        VAR_11->codecpar->bits_per_coded_sample = 8;
        VAR_11->codecpar->block_align = 24;
        VAR_11->codecpar->bit_rate = 6400;
    }

    VAR_11->start_time = 0;
    VAR_11->codecpar->codec_tag = 0;
    VAR_11->codecpar->codec_type = VAR_1;
    VAR_11->codecpar->channels = 1;

    return 0;
}
