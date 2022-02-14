
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__** streams; } ;
struct TYPE_13__ {size_t stream_index; int duration; } ;
struct TYPE_12__ {TYPE_1__* codecpar; } ;
struct TYPE_11__ {scalar_t__ codec_type; } ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*,TYPE_3__*,int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_3, AVPacket *VAR_4, AVPacket *VAR_5, int VAR_6)
{
    if (VAR_5 && VAR_3->streams[VAR_5->stream_index]->codecpar->codec_type == VAR_0)
        VAR_5->duration = 2;
    return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6,
                               VAR_1, VAR_2);
}
