
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_12__ {int value; } ;
struct TYPE_11__ {TYPE_2__* codecpar; } ;
struct TYPE_8__ {int* data; int size; } ;
struct TYPE_10__ {TYPE_1__ codec_priv; TYPE_4__* stream; } ;
struct TYPE_9__ {int channel_layout; } ;
typedef TYPE_3__ MatroskaTrack ;
typedef TYPE_4__ AVStream ;
typedef int AVFormatContext ;
typedef TYPE_5__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **) ;
 TYPE_5__* FUNC_1 (int *,char*,int *,int ) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,int **,int*,int,int ) ;
 int FUNC_4 (int*,int*,int*,int*) ;
 int FUNC_5 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_3,
                               MatroskaTrack *VAR_4,
                               int *VAR_5)
{
    AVStream *VAR_6 = VAR_4->stream;
    uint8_t *VAR_7 = VAR_4->codec_priv.data;
    int VAR_8 = VAR_4->codec_priv.size;

    if (VAR_8 < 8 + VAR_2 || VAR_7[4] & 0x7f) {
        FUNC_2(VAR_3, VAR_0, "Invalid FLAC private data\n");
        VAR_4->codec_priv.size = 0;
        return 0;
    }
    *VAR_5 = 8;
    VAR_4->codec_priv.size = 8 + VAR_2;

    VAR_7 += VAR_4->codec_priv.size;
    VAR_8 -= VAR_4->codec_priv.size;


    while (VAR_8 >= 4) {
        int VAR_9, VAR_10, VAR_11;

        FUNC_4(VAR_7, &VAR_9, &VAR_10, &VAR_11);

        VAR_7 += 4;
        VAR_8 -= 4;
        if (VAR_11 > VAR_8)
            return 0;


        if (VAR_10 == VAR_1) {
            AVDictionary *VAR_12 = ((void*)0);
            AVDictionaryEntry *VAR_13;

            FUNC_3(VAR_3, &VAR_12, VAR_7, VAR_11, 0);
            VAR_13 = FUNC_1(VAR_12, "WAVEFORMATEXTENSIBLE_CHANNEL_MASK", ((void*)0), 0);
            if (VAR_13) {
                uint64_t VAR_14 = FUNC_5(VAR_13->value, ((void*)0), 0);
                if (!VAR_14 || VAR_14 & ~0x3ffffULL) {
                    FUNC_2(VAR_3, VAR_0,
                           "Invalid value of WAVEFORMATEXTENSIBLE_CHANNEL_MASK\n");
                } else
                    VAR_6->codecpar->channel_layout = VAR_14;
            }
            FUNC_0(&VAR_12);
        }

        VAR_7 += VAR_11;
        VAR_8 -= VAR_11;
    }

    return 0;
}
