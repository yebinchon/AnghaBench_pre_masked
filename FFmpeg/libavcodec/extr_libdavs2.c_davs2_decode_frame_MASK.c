
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int len; int dts; int pts; int * data; } ;
struct TYPE_12__ {TYPE_1__* priv_data; } ;
struct TYPE_11__ {int size; int dts; int pts; int * data; } ;
struct TYPE_10__ {int out_frame; int decoder; int headerset; TYPE_6__ packet; } ;
typedef TYPE_1__ DAVS2Context ;
typedef TYPE_2__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,TYPE_6__*) ;
 int FUNC_4 (TYPE_3__*,int *,int*,int *,int,int *) ;
 int FUNC_5 (TYPE_3__*,int *,int*) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_4, void *VAR_5,
                              int *VAR_6, AVPacket *VAR_7)
{
    DAVS2Context *VAR_8 = VAR_4->priv_data;
    int VAR_9 = VAR_7->size;
    uint8_t *VAR_10 = VAR_7->data;
    AVFrame *VAR_11 = VAR_5;
    int VAR_12 = VAR_2;


    if (!VAR_9) {
        return FUNC_5(VAR_4, VAR_11, VAR_6);
    }

    VAR_8->packet.data = VAR_10;
    VAR_8->packet.len = VAR_9;
    VAR_8->packet.pts = VAR_7->pts;
    VAR_8->packet.dts = VAR_7->dts;

    VAR_12 = FUNC_3(VAR_8->decoder, &VAR_8->packet);


    if (VAR_12 == VAR_3) {
        FUNC_0(VAR_4, VAR_1, "Decoder error: can't read packet\n");
        return VAR_0;
    }

    VAR_12 = FUNC_2(VAR_8->decoder, &VAR_8->headerset, &VAR_8->out_frame);

    if (VAR_12 != VAR_2) {
        VAR_12 = FUNC_4(VAR_4, &VAR_8->out_frame, VAR_6, &VAR_8->headerset, VAR_12, VAR_11);
        FUNC_1(VAR_8->decoder, &VAR_8->out_frame);
    }

    return VAR_12 == 0 ? VAR_9 : VAR_12;
}
