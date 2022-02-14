
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ codec_id; size_t channels; int sample_rate; } ;
struct TYPE_12__ {int value; } ;
struct TYPE_11__ {int metadata; TYPE_1__** streams; int * pb; TYPE_2__* priv_data; } ;
struct TYPE_10__ {size_t header_size; } ;
struct TYPE_9__ {TYPE_5__* codecpar; } ;
typedef TYPE_2__ SoXContext ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVDictionaryEntry ;
typedef TYPE_5__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (size_t,int) ;
 size_t VAR_4 ;
 TYPE_4__* FUNC_2 (int ,char*,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,size_t) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,size_t) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,size_t) ;
 int FUNC_11 (int *,int ,size_t) ;
 int FUNC_12 (int *,char*) ;
 size_t FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(AVFormatContext *VAR_5)
{
    SoXContext *VAR_6 = VAR_5->priv_data;
    AVIOContext *VAR_7 = VAR_5->pb;
    AVCodecParameters *VAR_8 = VAR_5->streams[0]->codecpar;
    AVDictionaryEntry *VAR_9;
    size_t VAR_10 = 0, VAR_11;

    VAR_9 = FUNC_2(VAR_5->metadata, "comment", ((void*)0), 0);
    if (VAR_9)
        VAR_10 = FUNC_13(VAR_9->value);
    VAR_11 = FUNC_1(VAR_10, 8);

    VAR_6->header_size = VAR_4 + VAR_11;

    if (VAR_8->codec_id == VAR_1) {
        FUNC_12(VAR_7, ".SoX");
        FUNC_8(VAR_7, VAR_6->header_size);
        FUNC_9(VAR_7, 0);
        FUNC_9(VAR_7, FUNC_3(VAR_8->sample_rate));
        FUNC_8(VAR_7, VAR_8->channels);
        FUNC_8(VAR_7, VAR_11);
    } else if (VAR_8->codec_id == VAR_0) {
        FUNC_12(VAR_7, "XoS.");
        FUNC_6(VAR_7, VAR_6->header_size);
        FUNC_7(VAR_7, 0);
        FUNC_7(VAR_7, FUNC_3(VAR_8->sample_rate));
        FUNC_6(VAR_7, VAR_8->channels);
        FUNC_6(VAR_7, VAR_11);
    } else {
        FUNC_4(VAR_5, VAR_2, "invalid codec; use pcm_s32le or pcm_s32be\n");
        return FUNC_0(VAR_3);
    }

    if (VAR_10)
        FUNC_10(VAR_7, VAR_9->value, VAR_10);

    FUNC_11(VAR_7, 0, VAR_11 - VAR_10);

    FUNC_5(VAR_7);

    return 0;
}
