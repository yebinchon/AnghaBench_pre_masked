
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_8__ {scalar_t__ pts; } ;
struct TYPE_7__ {int channels; int audio_pts; } ;
typedef TYPE_1__ CdataDemuxContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    CdataDemuxContext *VAR_2 = VAR_0->priv_data;
    int VAR_3 = 76*VAR_2->channels;

    int VAR_4 = FUNC_0(VAR_0->pb, VAR_1, VAR_3);
    if (VAR_4 < 0)
        return VAR_4;
    VAR_1->pts = VAR_2->audio_pts++;
    return 0;
}
