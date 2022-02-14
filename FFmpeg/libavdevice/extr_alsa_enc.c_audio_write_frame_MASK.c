
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {TYPE_2__** streams; TYPE_3__* priv_data; } ;
struct TYPE_15__ {int nb_samples; int pkt_duration; int pkt_dts; int * data; } ;
struct TYPE_14__ {int size; int duration; int dts; int data; } ;
struct TYPE_13__ {int frame_size; } ;
struct TYPE_12__ {TYPE_1__* codecpar; } ;
struct TYPE_11__ {int format; } ;
typedef TYPE_3__ AlsaData ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_6__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, int VAR_3,
                             AVFrame **VAR_4, unsigned VAR_5)
{
    AlsaData *VAR_6 = VAR_2->priv_data;
    AVPacket VAR_7;


    if ((VAR_5 & VAR_0))
        return FUNC_2(VAR_2->streams[VAR_3]->codecpar->format) ?
               FUNC_0(VAR_1) : 0;

    VAR_7.data = (*VAR_4)->data[0];
    VAR_7.size = (*VAR_4)->nb_samples * VAR_6->frame_size;
    VAR_7.dts = (*VAR_4)->pkt_dts;
    VAR_7.duration = (*VAR_4)->pkt_duration;
    return FUNC_1(VAR_2, &VAR_7);
}
