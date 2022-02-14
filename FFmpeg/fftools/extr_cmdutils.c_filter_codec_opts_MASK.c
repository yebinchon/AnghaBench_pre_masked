
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_19__ {int const* priv_class; } ;
struct TYPE_18__ {char* key; int value; } ;
struct TYPE_17__ {scalar_t__ oformat; } ;
struct TYPE_16__ {TYPE_1__* codecpar; } ;
struct TYPE_15__ {int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVDictionaryEntry ;
typedef int AVDictionary ;
typedef TYPE_5__ AVCodec ;
typedef int AVClass ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_0 (int *,char*,TYPE_4__*,int ) ;
 int FUNC_1 (int **,char*,int ,int ) ;
 scalar_t__ FUNC_2 (int const**,char*,int *,int,int ) ;
 TYPE_5__* FUNC_3 (int) ;
 TYPE_5__* FUNC_4 (int) ;
 int * FUNC_5 () ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*,char*) ;
 int FUNC_7 (int) ;
 char* FUNC_8 (char*,char) ;

AVDictionary *FUNC_9(AVDictionary *VAR_7, enum AVCodecID VAR_8,
                                AVFormatContext *VAR_9, AVStream *VAR_10, AVCodec *VAR_11)
{
    AVDictionary *VAR_12 = ((void*)0);
    AVDictionaryEntry *VAR_13 = ((void*)0);
    int VAR_14 = VAR_9->oformat ? VAR_3
                                      : VAR_2;
    char VAR_15 = 0;
    const AVClass *VAR_16 = FUNC_5();

    if (!VAR_11)
        VAR_11 = VAR_9->oformat ? FUNC_4(VAR_8)
                                      : FUNC_3(VAR_8);

    switch (VAR_10->codecpar->codec_type) {
    case 128:
        VAR_15 = 'v';
        VAR_14 |= VAR_5;
        break;
    case 130:
        VAR_15 = 'a';
        VAR_14 |= VAR_1;
        break;
    case 129:
        VAR_15 = 's';
        VAR_14 |= VAR_4;
        break;
    }

    while ((VAR_13 = FUNC_0(VAR_7, "", VAR_13, VAR_0))) {
        char *VAR_17 = FUNC_8(VAR_13->key, ':');


        if (VAR_17)
            switch (FUNC_6(VAR_9, VAR_10, VAR_17 + 1)) {
            case 1: *VAR_17 = 0; break;
            case 0: continue;
            default: FUNC_7(1);
            }

        if (FUNC_2(&VAR_16, VAR_13->key, ((void*)0), VAR_14, VAR_6) ||
            !VAR_11 ||
            (VAR_11->priv_class &&
             FUNC_2(&VAR_11->priv_class, VAR_13->key, ((void*)0), VAR_14,
                         VAR_6)))
            FUNC_1(&VAR_12, VAR_13->key, VAR_13->value, 0);
        else if (VAR_13->key[0] == VAR_15 &&
                 FUNC_2(&VAR_16, VAR_13->key + 1, ((void*)0), VAR_14,
                             VAR_6))
            FUNC_1(&VAR_12, VAR_13->key + 1, VAR_13->value, 0);

        if (VAR_17)
            *VAR_17 = ':';
    }
    return VAR_12;
}
