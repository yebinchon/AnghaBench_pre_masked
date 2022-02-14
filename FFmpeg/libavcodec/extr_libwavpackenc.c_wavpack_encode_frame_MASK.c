
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_13__ {scalar_t__ frame_size; TYPE_1__* priv_data; } ;
struct TYPE_12__ {scalar_t__ nb_samples; scalar_t__* data; } ;
struct TYPE_11__ {int duration; int pts; int size; } ;
struct TYPE_10__ {int afq; scalar_t__ got_output; int wv; int user_size; TYPE_2__* pkt; } ;
typedef TYPE_1__ LibWavpackContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,int ,char*,int ) ;
 int FUNC_4 (int *,TYPE_3__ const*) ;
 int FUNC_5 (int *,scalar_t__,int *,int *) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_2, AVPacket *VAR_3,
                                const AVFrame *VAR_4, int *VAR_5)
{
    LibWavpackContext *VAR_6 = VAR_2->priv_data;
    int VAR_7;

    VAR_6->got_output = 0;
    VAR_6->pkt = VAR_3;
    VAR_6->user_size = VAR_3->size;

    if (VAR_4) {
        VAR_7 = FUNC_4(&VAR_6->afq, VAR_4);
        if (VAR_7 < 0)
            return VAR_7;

        VAR_7 = FUNC_2(VAR_6->wv, (int32_t*)VAR_4->data[0], VAR_4->nb_samples);
        if (!VAR_7) {
            FUNC_3(VAR_2, VAR_1, "Error encoding a frame: %s\n",
                   FUNC_1(VAR_6->wv));
            return VAR_0;
        }
    }

    if (!VAR_6->got_output &&
        (!VAR_4 || VAR_4->nb_samples < VAR_2->frame_size)) {
        VAR_7 = FUNC_0(VAR_6->wv);
        if (!VAR_7) {
            FUNC_3(VAR_2, VAR_1, "Error flushing the encoder: %s\n",
                   FUNC_1(VAR_6->wv));
            return VAR_0;
        }
    }

    if (VAR_6->got_output) {
        FUNC_5(&VAR_6->afq, VAR_2->frame_size, &VAR_3->pts, &VAR_3->duration);
        *VAR_5 = 1;
    }

    return 0;
}
