
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_16__ {int channels; int frame_size; TYPE_2__* priv_data; } ;
struct TYPE_15__ {scalar_t__* data; } ;
struct TYPE_14__ {int size; int duration; int pts; int data; } ;
struct TYPE_12__ {int frame_size; } ;
struct TYPE_13__ {int pkt_frame_count; int frames_per_packet; int afq; int bits; int enc_state; TYPE_1__ header; } ;
typedef TYPE_2__ LibSpeexEncContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int *,TYPE_4__ const*) ;
 int FUNC_1 (int *,int,int *,int *) ;
 int FUNC_2 (TYPE_5__*,TYPE_3__*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_0, AVPacket *VAR_1,
                        const AVFrame *VAR_2, int *VAR_3)
{
    LibSpeexEncContext *VAR_4 = VAR_0->priv_data;
    int16_t *VAR_5 = VAR_2 ? (int16_t *)VAR_2->data[0] : ((void*)0);
    int VAR_6;

    if (VAR_5) {

        if (VAR_0->channels == 2)
            FUNC_8(VAR_5, VAR_4->header.frame_size, &VAR_4->bits);
        FUNC_7(VAR_4->enc_state, VAR_5, &VAR_4->bits);
        VAR_4->pkt_frame_count++;
        if ((VAR_6 = FUNC_0(&VAR_4->afq, VAR_2)) < 0)
            return VAR_6;
    } else {

        if (!VAR_4->pkt_frame_count)
            return 0;

        while (VAR_4->pkt_frame_count < VAR_4->frames_per_packet) {
            FUNC_4(&VAR_4->bits, 15, 5);
            VAR_4->pkt_frame_count++;
        }
    }


    if (VAR_4->pkt_frame_count == VAR_4->frames_per_packet) {
        VAR_4->pkt_frame_count = 0;
        if ((VAR_6 = FUNC_2(VAR_0, VAR_1, FUNC_3(&VAR_4->bits), 0)) < 0)
            return VAR_6;
        VAR_6 = FUNC_6(&VAR_4->bits, VAR_1->data, VAR_1->size);
        FUNC_5(&VAR_4->bits);


        FUNC_1(&VAR_4->afq, VAR_4->frames_per_packet * VAR_0->frame_size,
                           &VAR_1->pts, &VAR_1->duration);

        VAR_1->size = VAR_6;
        *VAR_3 = 1;
        return 0;
    }
    return 0;
}
