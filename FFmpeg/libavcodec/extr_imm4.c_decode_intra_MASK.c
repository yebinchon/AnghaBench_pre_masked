
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int bits; int table; } ;
struct TYPE_12__ {int height; int width; TYPE_2__* priv_data; } ;
struct TYPE_11__ {int* linesize; scalar_t__* data; } ;
struct TYPE_9__ {int (* idct_put ) (scalar_t__,int,int ) ;} ;
struct TYPE_10__ {scalar_t__ hi; int lo; int factor; int * block; TYPE_1__ idsp; } ;
typedef TYPE_2__ IMM4Context ;
typedef int GetBitContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 TYPE_8__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,int *,unsigned int,int ,int,unsigned int) ;
 unsigned int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int* VAR_2 ;
 int FUNC_4 (scalar_t__,int,int ) ;
 int FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (scalar_t__,int,int ) ;
 int FUNC_7 (scalar_t__,int,int ) ;
 int FUNC_8 (scalar_t__,int,int ) ;
 int FUNC_9 (scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_3, GetBitContext *VAR_4, AVFrame *VAR_5)
{
    IMM4Context *VAR_6 = VAR_3->priv_data;
    int VAR_7, VAR_8, VAR_9, VAR_10 = 0;

    if (VAR_6->hi == 0) {
        if (VAR_6->lo > 2)
            return VAR_0;
        VAR_6->factor = VAR_2[VAR_6->lo];
    } else {
        VAR_6->factor = VAR_6->lo * 2;
    }

    if (VAR_6->hi) {
        VAR_10 = VAR_6->factor;
        VAR_10 >>= 1;
        if (!(VAR_10 & 1))
            VAR_10--;
    }

    for (VAR_9 = 0; VAR_9 < VAR_3->height; VAR_9 += 16) {
        for (VAR_8 = 0; VAR_8 < VAR_3->width; VAR_8 += 16) {
            unsigned VAR_11, VAR_12, VAR_13;

            VAR_13 = FUNC_3(VAR_4, VAR_1.table, VAR_1.bits, 1) >> 4;
            VAR_11 = FUNC_1(VAR_4);

            VAR_12 = FUNC_2(VAR_4, 1);

            VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_13 | (VAR_12 << 2), 0, VAR_10, VAR_11);
            if (VAR_7 < 0)
                return VAR_7;

            VAR_6->idsp.idct_put(VAR_5->data[0] + VAR_9 * VAR_5->linesize[0] + VAR_8,
                             VAR_5->linesize[0], VAR_6->block[0]);
            VAR_6->idsp.idct_put(VAR_5->data[0] + VAR_9 * VAR_5->linesize[0] + VAR_8 + 8,
                             VAR_5->linesize[0], VAR_6->block[1]);
            VAR_6->idsp.idct_put(VAR_5->data[0] + (VAR_9 + 8) * VAR_5->linesize[0] + VAR_8,
                             VAR_5->linesize[0], VAR_6->block[2]);
            VAR_6->idsp.idct_put(VAR_5->data[0] + (VAR_9 + 8) * VAR_5->linesize[0] + VAR_8 + 8,
                             VAR_5->linesize[0], VAR_6->block[3]);
            VAR_6->idsp.idct_put(VAR_5->data[1] + (VAR_9 >> 1) * VAR_5->linesize[1] + (VAR_8 >> 1),
                             VAR_5->linesize[1], VAR_6->block[4]);
            VAR_6->idsp.idct_put(VAR_5->data[2] + (VAR_9 >> 1) * VAR_5->linesize[2] + (VAR_8 >> 1),
                             VAR_5->linesize[2], VAR_6->block[5]);
        }
    }

    return 0;
}
