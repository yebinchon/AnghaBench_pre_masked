
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int header_size; } ;
struct TYPE_14__ {int channels; } ;
struct TYPE_13__ {int pb; TYPE_1__** streams; TYPE_5__* priv_data; } ;
struct TYPE_12__ {int pos; int size; int duration; int pts; int data; scalar_t__ stream_index; } ;
struct TYPE_11__ {TYPE_4__* codecpar; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;
typedef TYPE_5__ ADXDemuxerContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_3__*,int ,char*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    ADXDemuxerContext *VAR_7 = VAR_5->priv_data;
    AVCodecParameters *VAR_8 = VAR_5->streams[0]->codecpar;
    int VAR_9, VAR_10;

    if (VAR_8->channels <= 0) {
        FUNC_3(VAR_5, VAR_2, "invalid number of channels %d\n", VAR_8->channels);
        return VAR_1;
    }

    VAR_10 = VAR_3 * VAR_8->channels;

    VAR_6->pos = FUNC_5(VAR_5->pb);
    VAR_6->stream_index = 0;

    VAR_9 = FUNC_2(VAR_5->pb, VAR_6, VAR_10);
    if (VAR_9 != VAR_10) {
        FUNC_4(VAR_6);
        return VAR_9 < 0 ? VAR_9 : FUNC_0(VAR_4);
    }
    if (FUNC_1(VAR_6->data) & 0x8000) {
        FUNC_4(VAR_6);
        return VAR_0;
    }
    VAR_6->size = VAR_10;
    VAR_6->duration = 1;
    VAR_6->pts = (VAR_6->pos - VAR_7->header_size) / VAR_10;

    return 0;
}
