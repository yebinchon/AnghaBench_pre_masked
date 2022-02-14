
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int size; int data; } ;
struct TYPE_17__ {int channels; TYPE_1__* codec; TYPE_2__* priv_data; } ;
struct TYPE_16__ {int nb_samples; scalar_t__ extended_data; } ;
struct TYPE_15__ {int frame_len; int block_size; TYPE_8__* pkt; int gb; } ;
struct TYPE_14__ {scalar_t__ id; } ;
typedef int GetBitContext ;
typedef TYPE_2__ BinkAudioContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (TYPE_8__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,float**,int) ;
 int FUNC_3 (TYPE_4__*,TYPE_8__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_3, AVFrame *VAR_4)
{
    BinkAudioContext *VAR_5 = VAR_3->priv_data;
    GetBitContext *VAR_6 = &VAR_5->gb;
    int VAR_7;

    if (!VAR_5->pkt->data) {
        VAR_7 = FUNC_3(VAR_3, VAR_5->pkt);
        if (VAR_7 < 0)
            return VAR_7;

        if (VAR_5->pkt->size < 4) {
            FUNC_0(VAR_3, VAR_2, "Packet is too small\n");
            VAR_7 = VAR_0;
            goto fail;
        }

        VAR_7 = FUNC_7(VAR_6, VAR_5->pkt->data, VAR_5->pkt->size);
        if (VAR_7 < 0)
            goto fail;


        FUNC_9(VAR_6, 32);
    }


    VAR_4->nb_samples = VAR_5->frame_len;
    if ((VAR_7 = FUNC_4(VAR_3, VAR_4, 0)) < 0)
        return VAR_7;

    if (FUNC_2(VAR_5, (float **)VAR_4->extended_data,
                     VAR_3->codec->id == VAR_1)) {
        FUNC_0(VAR_3, VAR_2, "Incomplete packet\n");
        return VAR_0;
    }
    FUNC_5(VAR_6);
    if (!FUNC_6(VAR_6)) {
        FUNC_8(VAR_6, 0, sizeof(*VAR_6));
        FUNC_1(VAR_5->pkt);
    }

    VAR_4->nb_samples = VAR_5->block_size / VAR_3->channels;

    return 0;
fail:
    FUNC_1(VAR_5->pkt);
    return VAR_7;
}
