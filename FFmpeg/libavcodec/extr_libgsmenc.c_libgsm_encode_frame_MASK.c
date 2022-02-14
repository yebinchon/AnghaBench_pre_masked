
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct gsm_state {int dummy; } ;
typedef int gsm_signal ;
struct TYPE_11__ {int codec_id; int block_align; struct gsm_state* priv_data; } ;
struct TYPE_10__ {scalar_t__* data; } ;
struct TYPE_9__ {int data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;




 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*,int ,int ) ;
 int FUNC_1 (struct gsm_state*,int *,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_1, AVPacket *VAR_2,
                               const AVFrame *VAR_3, int *VAR_4)
{
    int VAR_5;
    gsm_signal *VAR_6 = (gsm_signal *)VAR_3->data[0];
    struct gsm_state *VAR_7 = VAR_1->priv_data;

    if ((VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_1->block_align, 0)) < 0)
        return VAR_5;

    switch(VAR_1->codec_id) {
    case 129:
        FUNC_1(VAR_7, VAR_6, VAR_2->data);
        break;
    case 128:
        FUNC_1(VAR_7, VAR_6, VAR_2->data);
        FUNC_1(VAR_7, VAR_6 + VAR_0, VAR_2->data + 32);
    }

    *VAR_4 = 1;
    return 0;
}
