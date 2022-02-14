
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int qpel_mc_func ;
typedef int h264_chroma_mc_func ;
struct TYPE_9__ {size_t ref; } ;
typedef TYPE_2__ cavs_vector ;
struct TYPE_10__ {int l_stride; int c_stride; int mbx; int mby; TYPE_1__* DPB; } ;
struct TYPE_8__ {int * f; } ;
typedef TYPE_3__ AVSContext ;
typedef int AVFrame ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,int,int,int,int *,int *,int *,int,int,int *,int ,TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_1(AVSContext *VAR_1, int VAR_2, int VAR_3,
                               uint8_t *VAR_4,
                               uint8_t *VAR_5,
                               uint8_t *VAR_6,
                               int VAR_7, int VAR_8,
                               qpel_mc_func *VAR_9,
                               h264_chroma_mc_func VAR_10,
                               qpel_mc_func *VAR_11,
                               h264_chroma_mc_func VAR_12,
                               cavs_vector *VAR_13)
{
    qpel_mc_func *VAR_14 = VAR_9;
    h264_chroma_mc_func VAR_15 = VAR_10;

    VAR_4 += VAR_7 * 2 + VAR_8 * VAR_1->l_stride * 2;
    VAR_5 += VAR_7 + VAR_8 * VAR_1->c_stride;
    VAR_6 += VAR_7 + VAR_8 * VAR_1->c_stride;
    VAR_7 += 8 * VAR_1->mbx;
    VAR_8 += 8 * VAR_1->mby;

    if (VAR_13->ref >= 0) {
        AVFrame *VAR_16 = VAR_1->DPB[VAR_13->ref].f;
        FUNC_0(VAR_1, VAR_16, VAR_2, VAR_3, 0,
                    VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
                    VAR_14, VAR_15, VAR_13);

        VAR_14 = VAR_11;
        VAR_15 = VAR_12;
    }

    if ((VAR_13 + VAR_0)->ref >= 0) {
        AVFrame *VAR_17 = VAR_1->DPB[0].f;
        FUNC_0(VAR_1, VAR_17, VAR_2, VAR_3, 1,
                    VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
                    VAR_14, VAR_15, VAR_13 + VAR_0);
    }
}
