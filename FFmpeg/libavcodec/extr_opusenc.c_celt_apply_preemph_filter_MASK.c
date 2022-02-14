
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {float emph_coeff; float* overlap; float* samples; } ;
struct TYPE_11__ {int channels; TYPE_5__* block; } ;
struct TYPE_9__ {int framesize; } ;
struct TYPE_10__ {TYPE_2__ packet; TYPE_1__* avctx; } ;
struct TYPE_8__ {int frame_size; } ;
typedef TYPE_3__ OpusEncContext ;
typedef TYPE_4__ CeltFrame ;
typedef TYPE_5__ CeltBlock ;


 float VAR_0 ;
 int VAR_1 ;
 int const FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(OpusEncContext *VAR_2, CeltFrame *VAR_3)
{
    const int VAR_4 = VAR_2->avctx->frame_size;
    const int VAR_5 = FUNC_0(VAR_2->packet.framesize) / VAR_4;


    for (int VAR_6 = 0; VAR_6 < VAR_3->channels; VAR_6++) {
        CeltBlock *VAR_7 = &VAR_3->block[VAR_6];
        float VAR_8 = VAR_7->emph_coeff;
        for (int VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
            float VAR_10 = VAR_7->overlap[VAR_9];
            VAR_7->overlap[VAR_9] = VAR_10 - VAR_8;
            VAR_8 = VAR_10 * VAR_0;
        }
        VAR_7->emph_coeff = VAR_8;
    }


    for (int VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
        for (int VAR_12 = 0; VAR_12 < VAR_3->channels; VAR_12++) {
            CeltBlock *VAR_13 = &VAR_3->block[VAR_12];
            float VAR_14 = VAR_13->emph_coeff;
            for (int VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
                float VAR_16 = VAR_13->samples[VAR_11*VAR_4 + VAR_15];
                VAR_13->samples[VAR_11*VAR_4 + VAR_15] = VAR_16 - VAR_14;
                VAR_14 = VAR_16 * VAR_0;
            }
            if (VAR_11 != (VAR_5 - 1))
                VAR_13->emph_coeff = VAR_14;
        }
    }
}
