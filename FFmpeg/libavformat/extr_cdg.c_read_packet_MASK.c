
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_9__ {int* data; int dts; int pts; int pos; int flags; scalar_t__ stream_index; } ;
struct TYPE_8__ {int got_first_packet; } ;
typedef TYPE_1__ CDGContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    CDGContext *VAR_6 = VAR_4->priv_data;
    int VAR_7;

    while (1) {
        VAR_7 = FUNC_0(VAR_4->pb, VAR_5, VAR_3);
        if (VAR_7 < 1 || (VAR_5->data[0] & VAR_2) == VAR_1)
            break;
        FUNC_1(VAR_5);
    }

    if (!VAR_6->got_first_packet) {
        VAR_5->flags |= VAR_0;
        VAR_6->got_first_packet = 1;
    }

    VAR_5->stream_index = 0;
    VAR_5->dts=
    VAR_5->pts= VAR_5->pos / VAR_3;

    if(VAR_7>5 && (VAR_5->data[0]&0x3F) == 9 && (VAR_5->data[1]&0x3F)==1 && !(VAR_5->data[2+2+1] & 0x0F)){
        VAR_5->flags = VAR_0;
    }
    return VAR_7;
}
