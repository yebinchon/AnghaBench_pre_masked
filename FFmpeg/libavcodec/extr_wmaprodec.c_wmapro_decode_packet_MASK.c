
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int packet_loss; int samples_per_frame; } ;
typedef TYPE_1__ WMAProDecodeCtx ;
struct TYPE_11__ {TYPE_1__* priv_data; } ;
struct TYPE_10__ {int nb_samples; } ;
typedef int AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (TYPE_3__*,TYPE_1__*,void*,int*,int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0, void *VAR_1,
                                int *VAR_2, AVPacket *VAR_3)
{
    WMAProDecodeCtx *VAR_4 = VAR_0->priv_data;
    AVFrame *VAR_5 = VAR_1;
    int VAR_6;


    VAR_5->nb_samples = VAR_4->samples_per_frame;
    if ((VAR_6 = FUNC_1(VAR_0, VAR_5, 0)) < 0) {
        VAR_4->packet_loss = 1;
        return 0;
    }

    return FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2, VAR_3);
}
