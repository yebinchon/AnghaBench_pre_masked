
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__** streams; } ;
struct TYPE_13__ {int nb_samples; int channels; int pkt_duration; int pkt_dts; int format; int * data; } ;
struct TYPE_12__ {int size; int duration; int dts; int data; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_10__ {int format; } ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_2, int VAR_3,
                             AVFrame **VAR_4, unsigned VAR_5)
{
    AVPacket VAR_6;


    if (VAR_5 & VAR_0)
        return FUNC_2(VAR_2->streams[VAR_3]->codecpar->format) ?
               FUNC_0(VAR_1) : 0;

    VAR_6.data = (*VAR_4)->data[0];
    VAR_6.size = (*VAR_4)->nb_samples * FUNC_1((*VAR_4)->format) * (*VAR_4)->channels;
    VAR_6.dts = (*VAR_4)->pkt_dts;
    VAR_6.duration = (*VAR_4)->pkt_duration;
    return FUNC_3(VAR_2, &VAR_6);
}
