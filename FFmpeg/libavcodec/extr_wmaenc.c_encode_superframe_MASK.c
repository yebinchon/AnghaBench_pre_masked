
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_23__ {int buf; } ;
struct TYPE_19__ {int block_len_bits; int frame_len_bits; int block_len; double** coefs; TYPE_5__ pb; scalar_t__ ms_stereo; } ;
typedef TYPE_1__ WMACodecContext ;
struct TYPE_22__ {int block_align; int initial_padding; TYPE_1__* priv_data; } ;
struct TYPE_21__ {scalar_t__ pts; } ;
struct TYPE_20__ {int size; scalar_t__ pts; int data; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,TYPE_3__ const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 int FUNC_4 (TYPE_1__*,float**,int ,int,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,int,char) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_4, AVPacket *VAR_5,
                             const AVFrame *VAR_6, int *VAR_7)
{
    WMACodecContext *VAR_8 = VAR_4->priv_data;
    int VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_8->block_len_bits = VAR_8->frame_len_bits;
    VAR_8->block_len = 1 << VAR_8->block_len_bits;

    VAR_11 = FUNC_1(VAR_4, VAR_6);

    if (VAR_11 < 0)
        return VAR_11;

    if (VAR_8->ms_stereo) {
        float VAR_13, VAR_14;
        int VAR_15;

        for (VAR_15 = 0; VAR_15 < VAR_8->block_len; VAR_15++) {
            VAR_13 = VAR_8->coefs[0][VAR_15] * 0.5;
            VAR_14 = VAR_8->coefs[1][VAR_15] * 0.5;
            VAR_8->coefs[0][VAR_15] = VAR_13 + VAR_14;
            VAR_8->coefs[1][VAR_15] = VAR_13 - VAR_14;
        }
    }

    if ((VAR_11 = FUNC_5(VAR_4, VAR_5, 2 * VAR_3, 0)) < 0)
        return VAR_11;

    VAR_10 = 128;
    for (VAR_9 = 64; VAR_9; VAR_9 >>= 1) {
        VAR_12 = FUNC_4(VAR_8, VAR_8->coefs, VAR_5->data, VAR_5->size,
                                 VAR_10 - VAR_9);
        if (VAR_12 <= 0)
            VAR_10 -= VAR_9;
    }

    while(VAR_10 <= 128 && VAR_12 > 0)
        VAR_12 = FUNC_4(VAR_8, VAR_8->coefs, VAR_5->data, VAR_5->size, VAR_10++);
    if (VAR_12 > 0) {
        FUNC_3(VAR_4, VAR_0, "Invalid input data or requested bitrate too low, cannot encode\n");
        VAR_5->size = 0;
        return FUNC_0(VAR_2);
    }
    FUNC_2((FUNC_9(&VAR_8->pb) & 7) == 0);
    VAR_9= VAR_4->block_align - (FUNC_9(&VAR_8->pb)+7)/8;
    FUNC_2(VAR_9>=0);
    while(VAR_9--)
        FUNC_8(&VAR_8->pb, 8, 'N');

    FUNC_7(&VAR_8->pb);
    FUNC_2(FUNC_10(&VAR_8->pb) - VAR_8->pb.buf == VAR_4->block_align);

    if (VAR_6->pts != VAR_1)
        VAR_5->pts = VAR_6->pts - FUNC_6(VAR_4, VAR_4->initial_padding);

    VAR_5->size = VAR_4->block_align;
    *VAR_7 = 1;
    return 0;
}
