
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_13__ {int block_align; TYPE_1__* priv_data; } ;
struct TYPE_12__ {scalar_t__* data; } ;
struct TYPE_11__ {int data; } ;
struct TYPE_10__ {int codec; } ;
typedef TYPE_1__ LibCodec2Context ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0, AVPacket *VAR_1,
                            const AVFrame *VAR_2, int *VAR_3)
{
    LibCodec2Context *VAR_4 = VAR_0->priv_data;
    int16_t *VAR_5 = (int16_t *)VAR_2->data[0];

    int VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_0->block_align, 0);
    if (VAR_6 < 0) {
        return VAR_6;
    }

    FUNC_0(VAR_4->codec, VAR_1->data, VAR_5);
    *VAR_3 = 1;

    return 0;
}
