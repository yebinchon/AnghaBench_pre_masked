
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int index; } ;
struct TYPE_11__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_10__ {int flags; int stream_index; } ;
struct TYPE_9__ {int remaining_audio_size; TYPE_6__* st_audio; } ;
typedef TYPE_1__ AvsFormat ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_6__*,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext * VAR_2, AVPacket * VAR_3)
{
    AvsFormat *VAR_4 = VAR_2->priv_data;
    int VAR_5, VAR_6;

    VAR_6 = FUNC_1(VAR_2->pb);
    VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4->st_audio, VAR_4->remaining_audio_size);
    VAR_6 = FUNC_1(VAR_2->pb) - VAR_6;
    VAR_4->remaining_audio_size -= VAR_6;

    if (VAR_5 == FUNC_0(VAR_1))
        return 0;
    if (VAR_5 < 0)
        return VAR_5;

    VAR_3->stream_index = VAR_4->st_audio->index;
    VAR_3->flags |= VAR_0;

    return VAR_6;
}
