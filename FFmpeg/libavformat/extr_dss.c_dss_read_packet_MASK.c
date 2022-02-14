
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {scalar_t__ audio_codec; } ;
typedef TYPE_1__ DSSDemuxContext ;
typedef int AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    DSSDemuxContext *VAR_3 = VAR_1->priv_data;

    if (VAR_3->audio_codec == VAR_0)
        return FUNC_1(VAR_1, VAR_2);
    else
        return FUNC_0(VAR_1, VAR_2);
}
