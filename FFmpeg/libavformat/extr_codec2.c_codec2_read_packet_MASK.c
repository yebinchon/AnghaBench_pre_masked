
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int pb; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_12__ {int duration; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_10__ {int frames_per_packet; } ;
struct TYPE_9__ {int block_align; int frame_size; } ;
typedef TYPE_2__ Codec2Context ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    Codec2Context *VAR_3 = VAR_1->priv_data;
    AVStream *VAR_4 = VAR_1->streams[0];
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    VAR_8 = VAR_4->codecpar->block_align;
    VAR_9 = VAR_4->codecpar->frame_size;

    if (VAR_8 <= 0 || VAR_9 <= 0 || VAR_3->frames_per_packet <= 0) {
        return FUNC_0(VAR_0);
    }


    VAR_6 = VAR_3->frames_per_packet * VAR_8;
    VAR_5 = FUNC_1(VAR_1->pb, VAR_2, VAR_6);
    if (VAR_5 < 0) {
        return VAR_5;
    }



    VAR_7 = VAR_5 / VAR_8;
    VAR_2->duration = VAR_7 * VAR_9;

    return VAR_5;
}
