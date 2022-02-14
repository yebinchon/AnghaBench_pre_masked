
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {size_t nb_streams; TYPE_2__** streams; } ;
struct TYPE_10__ {size_t stream_index; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {scalar_t__ codec_type; } ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ,char*,...) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    if (!VAR_4)
        return 0;

    if (VAR_4->stream_index < 0 || VAR_4->stream_index >= VAR_3->nb_streams) {
        FUNC_1(VAR_3, VAR_1, "Invalid packet stream index: %d\n",
               VAR_4->stream_index);
        return FUNC_0(VAR_2);
    }

    if (VAR_3->streams[VAR_4->stream_index]->codecpar->codec_type == VAR_0) {
        FUNC_1(VAR_3, VAR_1, "Received a packet for an attachment stream.\n");
        return FUNC_0(VAR_2);
    }

    return 0;
}
