
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* src; } ;
struct TYPE_14__ {int pts; int pkt_pos; int sample_rate; int * data; } ;
struct TYPE_13__ {int wave_nb_samples; int wave_samples; int pts; TYPE_2__* wave; int frame_nb_samples; } ;
struct TYPE_12__ {int num_channels; int sample_rate; } ;
struct TYPE_11__ {TYPE_3__* priv; } ;
typedef TYPE_3__ FliteContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_2)
{
    AVFrame *VAR_3;
    FliteContext *VAR_4 = VAR_2->src->priv;
    int VAR_5 = FUNC_1(VAR_4->wave_nb_samples, VAR_4->frame_nb_samples);

    if (!VAR_5)
        return VAR_0;

    VAR_3 = FUNC_3(VAR_2, VAR_5);
    if (!VAR_3)
        return FUNC_0(VAR_1);

    FUNC_4(VAR_3->data[0], VAR_4->wave_samples,
           VAR_5 * VAR_4->wave->num_channels * 2);
    VAR_3->pts = VAR_4->pts;
    VAR_3->pkt_pos = -1;
    VAR_3->sample_rate = VAR_4->wave->sample_rate;
    VAR_4->pts += VAR_5;
    VAR_4->wave_samples += VAR_5 * VAR_4->wave->num_channels;
    VAR_4->wave_nb_samples -= VAR_5;

    return FUNC_2(VAR_2, VAR_3);
}
