
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int * pb; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_12__ {int flags; scalar_t__ stream_index; int pts; } ;
struct TYPE_11__ {size_t duration; TYPE_1__* index_entries; } ;
struct TYPE_10__ {size_t pts; } ;
struct TYPE_9__ {int pos; } ;
typedef TYPE_2__ CineDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_4__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    CineDemuxContext *VAR_6 = VAR_4->priv_data;
    AVStream *VAR_7 = VAR_4->streams[0];
    AVIOContext *VAR_8 = VAR_4->pb;
    int VAR_9, VAR_10, VAR_11;

    if (VAR_6->pts >= VAR_7->duration)
        return VAR_0;

    FUNC_2(VAR_8, VAR_7->index_entries[VAR_6->pts].pos, VAR_3);
    VAR_9 = FUNC_1(VAR_8);
    if (VAR_9 < 8)
        return VAR_1;
    FUNC_3(VAR_8, VAR_9 - 8);
    VAR_10 = FUNC_1(VAR_8);

    VAR_11 = FUNC_0(VAR_8, VAR_5, VAR_10);
    if (VAR_11 < 0)
        return VAR_11;

    VAR_5->pts = VAR_6->pts++;
    VAR_5->stream_index = 0;
    VAR_5->flags |= VAR_2;
    return 0;
}
