
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef enum AlacRawDataBlockType { ____Placeholder_AlacRawDataBlockType } AlacRawDataBlockType ;
struct TYPE_9__ {int size; int data; } ;
struct TYPE_8__ {TYPE_1__* avctx; int pbctx; } ;
struct TYPE_7__ {int channels; } ;
typedef int PutBitContext ;
typedef TYPE_2__ AlacEncodeContext ;
typedef TYPE_3__ AVPacket ;


 int const VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int** VAR_3 ;
 size_t** VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int const,int,size_t* const,size_t* const) ;

__attribute__((used)) static int FUNC_5(AlacEncodeContext *VAR_5, AVPacket *VAR_6,
                       uint8_t * const *VAR_7)
{
    PutBitContext *VAR_8 = &VAR_5->pbctx;
    const enum AlacRawDataBlockType *VAR_9 = VAR_3[VAR_5->avctx->channels - 1];
    const uint8_t *VAR_10 = VAR_4[VAR_5->avctx->channels - 1];
    int VAR_11, VAR_12, VAR_13, VAR_14;

    FUNC_1(VAR_8, VAR_6->data, VAR_6->size);

    VAR_11 = VAR_12 = VAR_13 = VAR_14 = 0;
    while (VAR_11 < VAR_5->avctx->channels) {
        if (VAR_9[VAR_12] == VAR_0) {
            FUNC_4(VAR_5, VAR_0, VAR_14, VAR_7[VAR_10[VAR_11]],
                          VAR_7[VAR_10[VAR_11 + 1]]);
            VAR_14++;
            VAR_11 += 2;
        } else {
            FUNC_4(VAR_5, VAR_2, VAR_13, VAR_7[VAR_10[VAR_11]], ((void*)0));
            VAR_13++;
            VAR_11++;
        }
        VAR_12++;
    }

    FUNC_2(VAR_8, 3, VAR_1);
    FUNC_0(VAR_8);

    return FUNC_3(VAR_8) >> 3;
}
