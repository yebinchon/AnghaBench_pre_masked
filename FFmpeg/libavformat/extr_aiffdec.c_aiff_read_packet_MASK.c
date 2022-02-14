
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_14__ {scalar_t__ data_end; int block_duration; } ;
struct TYPE_13__ {int pb; TYPE_5__* priv_data; TYPE_2__** streams; } ;
struct TYPE_12__ {int duration; scalar_t__ stream_index; int flags; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_10__ {int block_align; int codec_id; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AIFFInputContext ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_4 ;
 int FUNC_1 (int ,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_5,
                            AVPacket *VAR_6)
{
    AVStream *VAR_7 = VAR_5->streams[0];
    AIFFInputContext *VAR_8 = VAR_5->priv_data;
    int64_t VAR_9;
    int VAR_10, VAR_11;


    VAR_9 = VAR_8->data_end - FUNC_3(VAR_5->pb);
    if (VAR_9 <= 0)
        return VAR_0;

    if (!VAR_7->codecpar->block_align) {
        FUNC_2(VAR_5, VAR_2, "block_align not set\n");
        return VAR_1;
    }


    switch (VAR_7->codecpar->codec_id) {
    case 131:
    case 130:
    case 128:
    case 129:
        VAR_11 = VAR_7->codecpar->block_align;
        break;
    default:
        VAR_11 = VAR_7->codecpar->block_align ? (VAR_4 / VAR_7->codecpar->block_align) * VAR_7->codecpar->block_align : VAR_4;
    }
    VAR_11 = FUNC_0(VAR_9, VAR_11);
    VAR_10 = FUNC_1(VAR_5->pb, VAR_6, VAR_11);
    if (VAR_10 < 0)
        return VAR_10;

    if (VAR_11 >= VAR_7->codecpar->block_align)
        VAR_6->flags &= ~VAR_3;

    VAR_6->stream_index = 0;
    VAR_6->duration = (VAR_10 / VAR_7->codecpar->block_align) * VAR_8->block_duration;
    return 0;
}
