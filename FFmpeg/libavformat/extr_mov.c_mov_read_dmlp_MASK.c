
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* codecpar; } ;
struct TYPE_11__ {int size; } ;
struct TYPE_10__ {TYPE_1__* fc; } ;
struct TYPE_9__ {int frame_size; int channel_layout; int channels; int sample_rate; } ;
struct TYPE_8__ {int nb_streams; TYPE_5__** streams; } ;
typedef TYPE_3__ MOVContext ;
typedef TYPE_4__ MOVAtom ;
typedef TYPE_5__ AVStream ;
typedef int AVIOContext ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(MOVContext *VAR_1, AVIOContext *VAR_2, MOVAtom VAR_3)
{
    AVStream *VAR_4;
    unsigned VAR_5;
    int VAR_6, VAR_7, VAR_8;
    int VAR_9;

    if (VAR_1->fc->nb_streams < 1)
        return 0;
    VAR_4 = VAR_1->fc->streams[VAR_1->fc->nb_streams-1];

    if (VAR_3.size < 10)
        return VAR_0;

    VAR_5 = FUNC_0(VAR_2);

    VAR_9 = (VAR_5 >> 28) & 0xF;
    VAR_7 = (VAR_5 >> 15) & 0x1F;
    VAR_8 = VAR_5 & 0x1FFF;
    if (VAR_8)
        VAR_6 = VAR_8;
    else
        VAR_6 = VAR_7;

    VAR_4->codecpar->frame_size = 40 << (VAR_9 & 0x7);
    VAR_4->codecpar->sample_rate = FUNC_1(VAR_9);
    VAR_4->codecpar->channels = FUNC_2(VAR_6);
    VAR_4->codecpar->channel_layout = FUNC_3(VAR_6);

    return 0;
}
