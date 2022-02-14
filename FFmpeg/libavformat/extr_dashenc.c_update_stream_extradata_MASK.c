
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int extradata; scalar_t__ extradata_size; } ;
struct TYPE_10__ {int codec_str; TYPE_2__* ctx; } ;
struct TYPE_9__ {TYPE_1__** streams; } ;
struct TYPE_8__ {TYPE_4__* codecpar; } ;
typedef TYPE_3__ OutputStream ;
typedef int AVRational ;
typedef int AVPacket ;
typedef int AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *,TYPE_4__*,int *,int ,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1, OutputStream *VAR_2,
                                   AVPacket *VAR_3, AVRational *VAR_4)
{
    AVCodecParameters *VAR_5 = VAR_2->ctx->streams[0]->codecpar;
    uint8_t *VAR_6;
    int VAR_7, VAR_8;

    if (VAR_5->extradata_size)
        return 0;

    VAR_6 = FUNC_0(VAR_3, VAR_0, &VAR_8);
    if (!VAR_8)
        return 0;

    VAR_7 = FUNC_1(VAR_5, VAR_8);
    if (VAR_7 < 0)
        return VAR_7;

    FUNC_2(VAR_5->extradata, VAR_6, VAR_8);

    FUNC_3(VAR_1, VAR_5, VAR_4, VAR_2->codec_str, sizeof(VAR_2->codec_str));

    return 0;
}
