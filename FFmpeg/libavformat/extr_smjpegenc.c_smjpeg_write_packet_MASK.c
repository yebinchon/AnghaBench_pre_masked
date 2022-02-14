
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ codec_type; } ;
struct TYPE_11__ {TYPE_2__** streams; int * pb; TYPE_1__* priv_data; } ;
struct TYPE_10__ {size_t stream_index; scalar_t__ duration; scalar_t__ pts; scalar_t__ size; int data; } ;
struct TYPE_9__ {TYPE_5__* codecpar; } ;
struct TYPE_8__ {int duration; } ;
typedef TYPE_1__ SMJPEGMuxContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    SMJPEGMuxContext *VAR_6 = VAR_4->priv_data;
    AVIOContext *VAR_7 = VAR_4->pb;
    AVStream *VAR_8 = VAR_4->streams[VAR_5->stream_index];
    AVCodecParameters *VAR_9 = VAR_8->codecpar;

    if (VAR_9->codec_type == VAR_0)
        FUNC_2(VAR_7, VAR_2);
    else if (VAR_9->codec_type == VAR_1)
        FUNC_2(VAR_7, VAR_3);
    else
        return 0;

    FUNC_1(VAR_7, VAR_5->pts);
    FUNC_1(VAR_7, VAR_5->size);
    FUNC_3(VAR_7, VAR_5->data, VAR_5->size);

    VAR_6->duration = FUNC_0(VAR_6->duration, VAR_5->pts + VAR_5->duration);
    return 0;
}
