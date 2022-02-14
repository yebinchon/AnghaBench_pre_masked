
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct ogg_stream {int psize; scalar_t__ pstart; scalar_t__ buf; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_19__ {int codec_id; int codec_type; } ;
struct TYPE_18__ {scalar_t__ sample_rate; } ;
struct TYPE_17__ {int flags; } ;
struct TYPE_16__ {TYPE_1__** streams; struct ogg* priv_data; } ;
struct TYPE_15__ {TYPE_8__* codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVCodecParserContext ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*,int **,int*,scalar_t__,int ,int ,int ,int) ;
 TYPE_4__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__**) ;
 int FUNC_6 (TYPE_4__*,TYPE_8__*) ;
 int FUNC_7 (TYPE_1__*,int,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_8 (AVFormatContext * VAR_5, int VAR_6)
{
    struct ogg *VAR_7 = VAR_5->priv_data;
    AVStream *VAR_8 = VAR_5->streams[VAR_6];
    struct ogg_stream *VAR_9 = VAR_7->streams + VAR_6;
    AVCodecParserContext *VAR_10 = FUNC_2(VAR_1);
    AVCodecContext *VAR_11;
    int VAR_12, VAR_13;
    uint8_t *VAR_14;

    if (!VAR_10)
        return -1;

    VAR_8->codecpar->codec_type = VAR_0;
    VAR_8->codecpar->codec_id = VAR_1;

    VAR_11 = FUNC_4(((void*)0));
    if (!VAR_11) {
        VAR_13 = FUNC_0(VAR_3);
        goto fail;
    }

    VAR_13 = FUNC_6(VAR_11, VAR_8->codecpar);
    if (VAR_13 < 0)
        goto fail;

    VAR_10->flags = VAR_4;
    FUNC_3(VAR_10, VAR_11,
                     &VAR_14, &VAR_12, VAR_9->buf + VAR_9->pstart, VAR_9->psize,
                     VAR_2, VAR_2, -1);

    FUNC_1(VAR_10);

    if (VAR_11->sample_rate) {
        FUNC_7(VAR_8, 64, 1, VAR_11->sample_rate);
        FUNC_5(&VAR_11);
        return 0;
    }

    FUNC_5(&VAR_11);
    return 1;
fail:
    FUNC_1(VAR_10);
    FUNC_5(&VAR_11);
    return VAR_13;
}
