
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ctx_flags; TYPE_2__* priv_data; int * pb; } ;
struct TYPE_6__ {TYPE_1__* channels; } ;
struct TYPE_5__ {int video_stream_index; int audio_stream_index; } ;
typedef TYPE_2__ StrDemuxContext ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int *,int,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_6)
{
    AVIOContext *VAR_7 = VAR_6->pb;
    StrDemuxContext *VAR_8 = VAR_6->priv_data;
    unsigned char VAR_9[VAR_2];
    int VAR_10;
    int VAR_11;


    if (FUNC_2(VAR_7, VAR_9, VAR_3) != VAR_3)
        return FUNC_0(VAR_1);
    if (FUNC_1(&VAR_9[0]) == VAR_4)
        VAR_10 = VAR_3;
    else
        VAR_10 = 0;

    FUNC_3(VAR_7, VAR_10, VAR_5);

    for(VAR_11=0; VAR_11<32; VAR_11++){
        VAR_8->channels[VAR_11].video_stream_index=
        VAR_8->channels[VAR_11].audio_stream_index= -1;
    }

    VAR_6->ctx_flags |= VAR_0;

    return 0;
}
