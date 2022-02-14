
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int const int16_t ;
struct TYPE_12__ {int initial_padding; int trellis; int * priv_data; } ;
struct TYPE_11__ {int nb_samples; scalar_t__ pts; scalar_t__* data; } ;
struct TYPE_10__ {scalar_t__ pts; int * data; } ;
typedef int G722Context ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,int const*) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *,int *,int,int const*) ;
 int FUNC_4 (int *,int ,int *,int,int const*) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_1, AVPacket *VAR_2,
                             const AVFrame *VAR_3, int *VAR_4)
{
    G722Context *VAR_5 = VAR_1->priv_data;
    const int16_t *VAR_6 = (const int16_t *)VAR_3->data[0];
    int VAR_7, VAR_8, VAR_9;

    VAR_8 = (VAR_3->nb_samples + 1) / 2;
    if ((VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_8, 0)) < 0)
        return VAR_9;

    VAR_7 = VAR_3->nb_samples - (VAR_3->nb_samples & 1);

    if (VAR_1->trellis)
        FUNC_4(VAR_5, VAR_1->trellis, VAR_2->data, VAR_7, VAR_6);
    else
        FUNC_3(VAR_5, VAR_2->data, VAR_7, VAR_6);


    if (VAR_7 < VAR_3->nb_samples) {
        int16_t VAR_10[2] = { VAR_6[VAR_7], VAR_6[VAR_7] };
        FUNC_0(VAR_5, &VAR_2->data[VAR_7 >> 1], VAR_10);
    }

    if (VAR_3->pts != VAR_0)
        VAR_2->pts = VAR_3->pts - FUNC_2(VAR_1, VAR_1->initial_padding);
    *VAR_4 = 1;
    return 0;
}
