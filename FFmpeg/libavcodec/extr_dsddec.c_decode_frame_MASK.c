
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* avpkt; TYPE_3__* frame; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_14__ {int channels; int (* execute2 ) (TYPE_4__*,int ,TYPE_1__*,int *,int) ;} ;
struct TYPE_13__ {int nb_samples; } ;
struct TYPE_12__ {int size; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ,TYPE_1__*,int *,int) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_1, void *VAR_2,
                        int *VAR_3, AVPacket *VAR_4)
{
    ThreadData VAR_5;
    AVFrame *VAR_6 = VAR_2;
    int VAR_7;

    VAR_6->nb_samples = VAR_4->size / VAR_1->channels;

    if ((VAR_7 = FUNC_0(VAR_1, VAR_6, 0)) < 0)
        return VAR_7;

    VAR_5.frame = VAR_6;
    VAR_5.avpkt = VAR_4;
    VAR_1->execute2(VAR_1, VAR_0, &VAR_5, ((void*)0), VAR_1->channels);

    *VAR_3 = 1;
    return VAR_6->nb_samples * VAR_1->channels;
}
