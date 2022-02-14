
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int * rd_scratchpad; } ;
struct TYPE_16__ {int linesize; int lambda2; int ** dest; int block; TYPE_2__* avctx; void* tex_pb; void* pb2; scalar_t__ data_partitioning; void* pb; TYPE_1__ sc; int * blocks; } ;
struct TYPE_15__ {scalar_t__ mb_decision; } ;
typedef void* PutBitContext ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int,int) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int **,int **,int) ;
 int FUNC_6 (void**) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static inline void FUNC_8(MpegEncContext *VAR_2, MpegEncContext *VAR_3, MpegEncContext *VAR_4, int VAR_5,
                           PutBitContext VAR_6[2], PutBitContext VAR_7[2], PutBitContext VAR_8[2],
                           int *VAR_9, int *VAR_10, int VAR_11, int VAR_12)
{
    int VAR_13;
    uint8_t *VAR_14[3];

    FUNC_2(VAR_2, VAR_3, VAR_5);

    VAR_2->block= VAR_2->blocks[*VAR_10];
    VAR_2->pb= VAR_6[*VAR_10];
    if(VAR_2->data_partitioning){
        VAR_2->pb2 = VAR_7 [*VAR_10];
        VAR_2->tex_pb= VAR_8[*VAR_10];
    }

    if(*VAR_10){
        FUNC_5(VAR_14, VAR_2->dest, sizeof(VAR_2->dest));
        VAR_2->dest[0] = VAR_2->sc.rd_scratchpad;
        VAR_2->dest[1] = VAR_2->sc.rd_scratchpad + 16*VAR_2->linesize;
        VAR_2->dest[2] = VAR_2->sc.rd_scratchpad + 16*VAR_2->linesize + 8;
        FUNC_0(VAR_2->linesize >= 32);
    }

    FUNC_3(VAR_2, VAR_11, VAR_12);

    VAR_13= FUNC_6(&VAR_2->pb);
    if(VAR_2->data_partitioning){
        VAR_13+= FUNC_6(&VAR_2->pb2);
        VAR_13+= FUNC_6(&VAR_2->tex_pb);
    }

    if(VAR_2->avctx->mb_decision == VAR_1){
        FUNC_4(VAR_2, VAR_2->block);

        VAR_13 *= VAR_2->lambda2;
        VAR_13 += FUNC_7(VAR_2) << VAR_0;
    }

    if(*VAR_10){
        FUNC_5(VAR_2->dest, VAR_14, sizeof(VAR_2->dest));
    }

    if(VAR_13<*VAR_9){
        *VAR_9= VAR_13;
        *VAR_10^=1;

        FUNC_1(VAR_4, VAR_2, VAR_5);
    }
}
