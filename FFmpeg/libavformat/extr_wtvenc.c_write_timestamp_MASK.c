
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int last_chunk_pos; int last_timestamp_pos; } ;
typedef TYPE_2__ WtvContext ;
struct TYPE_13__ {scalar_t__ codec_type; } ;
struct TYPE_12__ {TYPE_1__** streams; TYPE_2__* priv_data; int * pb; } ;
struct TYPE_11__ {size_t stream_index; int pts; int flags; } ;
struct TYPE_9__ {TYPE_5__* codecpar; } ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,int *,int,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    AVIOContext *VAR_7 = VAR_5->pb;
    WtvContext *VAR_8 = VAR_5->priv_data;
    AVCodecParameters *VAR_9 = VAR_5->streams[VAR_6->stream_index]->codecpar;

    FUNC_1(VAR_5, &VAR_4, 56, 0x40000000 | (VAR_3 + VAR_6->stream_index));
    FUNC_2(VAR_7, 8);
    FUNC_0(VAR_7, VAR_6->pts == VAR_1 ? -1 : VAR_6->pts);
    FUNC_0(VAR_7, VAR_6->pts == VAR_1 ? -1 : VAR_6->pts);
    FUNC_0(VAR_7, VAR_6->pts == VAR_1 ? -1 : VAR_6->pts);
    FUNC_0(VAR_7, 0);
    FUNC_0(VAR_7, VAR_9->codec_type == VAR_0 && (VAR_6->flags & VAR_2) ? 1 : 0);
    FUNC_0(VAR_7, 0);

    VAR_8->last_timestamp_pos = VAR_8->last_chunk_pos;
}
