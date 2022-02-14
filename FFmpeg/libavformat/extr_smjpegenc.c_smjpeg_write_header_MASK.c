
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ codec_type; int height; int width; int codec_id; int channels; int bits_per_coded_sample; int sample_rate; } ;
struct TYPE_13__ {char* key; char* value; } ;
struct TYPE_12__ {int nb_streams; TYPE_1__** streams; int metadata; int * pb; } ;
struct TYPE_11__ {TYPE_4__* codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVDictionaryEntry ;
typedef TYPE_4__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* FUNC_1 (int ,char*,TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (TYPE_1__*,int,int,int) ;
 int FUNC_10 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int FUNC_13(AVFormatContext *VAR_12)
{
    AVDictionaryEntry *VAR_13 = ((void*)0);
    AVIOContext *VAR_14 = VAR_12->pb;
    int VAR_15, VAR_16;

    if (VAR_12->nb_streams > 2) {
        FUNC_2(VAR_12, VAR_3, "more than >2 streams are not supported\n");
        return FUNC_0(VAR_4);
    }
    FUNC_8(VAR_14, VAR_6, 8);
    FUNC_6(VAR_14, 0);
    FUNC_6(VAR_14, 0);

    FUNC_11(VAR_12);
    while ((VAR_13 = FUNC_1(VAR_12->metadata, "", VAR_13, VAR_2))) {
        FUNC_7(VAR_14, VAR_8);
        FUNC_6(VAR_14, FUNC_12(VAR_13->key) + FUNC_12(VAR_13->value) + 3);
        FUNC_8(VAR_14, VAR_13->key, FUNC_12(VAR_13->key));
        FUNC_8(VAR_14, " = ", 3);
        FUNC_8(VAR_14, VAR_13->value, FUNC_12(VAR_13->value));
    }

    for (VAR_15 = 0; VAR_15 < VAR_12->nb_streams; VAR_15++) {
        AVStream *VAR_17 = VAR_12->streams[VAR_15];
        AVCodecParameters *VAR_18 = VAR_17->codecpar;
        if (VAR_18->codec_type == VAR_0) {
            VAR_16 = FUNC_10(VAR_10, VAR_18->codec_id);
            if (!VAR_16) {
                FUNC_2(VAR_12, VAR_3, "unsupported audio codec\n");
                return FUNC_0(VAR_4);
            }
            FUNC_7(VAR_14, VAR_7);
            FUNC_6(VAR_14, 8);
            FUNC_5(VAR_14, VAR_18->sample_rate);
            FUNC_4(VAR_14, VAR_18->bits_per_coded_sample);
            FUNC_4(VAR_14, VAR_18->channels);
            FUNC_7(VAR_14, VAR_16);
            FUNC_9(VAR_17, 32, 1, 1000);
        } else if (VAR_18->codec_type == VAR_1) {
            VAR_16 = FUNC_10(VAR_11, VAR_18->codec_id);
            if (!VAR_16) {
                FUNC_2(VAR_12, VAR_3, "unsupported video codec\n");
                return FUNC_0(VAR_4);
            }
            FUNC_7(VAR_14, VAR_9);
            FUNC_6(VAR_14, 12);
            FUNC_6(VAR_14, 0);
            FUNC_5(VAR_14, VAR_18->width);
            FUNC_5(VAR_14, VAR_18->height);
            FUNC_7(VAR_14, VAR_16);
            FUNC_9(VAR_17, 32, 1, 1000);
        }
    }

    FUNC_7(VAR_14, VAR_5);
    FUNC_3(VAR_14);

    return 0;
}
