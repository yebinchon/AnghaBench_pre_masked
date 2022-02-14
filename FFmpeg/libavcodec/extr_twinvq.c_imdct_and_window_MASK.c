
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef enum TwinVQFrameType { ____Placeholder_TwinVQFrameType } TwinVQFrameType ;
struct TYPE_10__ {int size; TYPE_1__* fmode; } ;
typedef TYPE_3__ TwinVQModeTab ;
struct TYPE_11__ {float* tmp_buf; float* curr_frame; int* last_block_pos; TYPE_2__* fdsp; TYPE_3__* mtab; TYPE_5__* mdct_ctx; } ;
typedef TYPE_4__ TwinVQContext ;
struct TYPE_12__ {int (* imdct_half ) (TYPE_5__*,float*,float*) ;} ;
struct TYPE_9__ {int (* vector_fmul_window ) (float*,float*,float*,int ,int) ;} ;
struct TYPE_8__ {int sub; } ;
typedef TYPE_5__ FFTContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (int) ;
 int * VAR_3 ;
 int FUNC_1 (float*,float*,int) ;
 int FUNC_2 (TYPE_5__*,float*,float*) ;
 int FUNC_3 (float*,float*,float*,int ,int) ;
 size_t* VAR_4 ;

__attribute__((used)) static void FUNC_4(TwinVQContext *VAR_5, enum TwinVQFrameType VAR_6,
                             int VAR_7, float *VAR_8, float *VAR_9, int VAR_10)
{
    FFTContext *VAR_11 = &VAR_5->mdct_ctx[VAR_6];
    const TwinVQModeTab *VAR_12 = VAR_5->mtab;
    int VAR_13 = VAR_12->size / VAR_12->fmode[VAR_6].sub;
    int VAR_14 = VAR_12->size;
    float *VAR_15 = VAR_5->tmp_buf;
    int VAR_16, VAR_17, VAR_18;
    float *VAR_19 = VAR_5->curr_frame + 2 * VAR_10 * VAR_12->size;
    float *VAR_20 = VAR_19;
    float *VAR_21;
    int VAR_22[] = {
        VAR_12->size / VAR_12->fmode[VAR_0].sub,
        VAR_12->size / VAR_12->fmode[VAR_1].sub,
        VAR_12->size / (VAR_12->fmode[VAR_2].sub * 2),
    };

    VAR_18 = VAR_22[VAR_4[VAR_7]];
    VAR_17 = VAR_18;
    VAR_21 = VAR_9 + (VAR_14 - VAR_13) / 2;

    for (VAR_16 = 0; VAR_16 < VAR_12->fmode[VAR_6].sub; VAR_16++) {
        int VAR_23 = VAR_6 == VAR_1 ? 8 : VAR_7;

        if (!VAR_16 && VAR_7 == 4)
            VAR_23 = 4;
        else if (VAR_16 == VAR_12->fmode[VAR_6].sub - 1 && VAR_7 == 7)
            VAR_23 = 7;

        VAR_18 = VAR_22[VAR_4[VAR_23]];

        VAR_11->imdct_half(VAR_11, VAR_15 + VAR_13 * VAR_16, VAR_8 + VAR_13 * VAR_16);

        VAR_5->fdsp->vector_fmul_window(VAR_20, VAR_21 + (VAR_13 - VAR_18) / 2,
                                      VAR_15 + VAR_13 * VAR_16,
                                      VAR_3[FUNC_0(VAR_18)],
                                      VAR_18 / 2);
        VAR_20 += VAR_18;

        FUNC_1(VAR_20, VAR_15 + VAR_13 * VAR_16 + VAR_18 / 2,
               (VAR_13 - VAR_18 / 2) * sizeof(float));

        VAR_20 += VAR_6 == VAR_1 ? (VAR_13 - VAR_18) / 2 : VAR_13 - VAR_18;

        VAR_21 = VAR_15 + VAR_13 * VAR_16 + VAR_13 / 2;
    }

    VAR_5->last_block_pos[VAR_10] = (VAR_14 + VAR_17) / 2;
}
