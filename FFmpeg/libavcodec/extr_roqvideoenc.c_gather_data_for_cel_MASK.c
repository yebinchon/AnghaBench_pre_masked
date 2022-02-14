
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_20__ {size_t best_coding; size_t cbEntry; size_t* subCels; scalar_t__ best_bit_use; scalar_t__* eval_dist; } ;
struct TYPE_19__ {int linesize; int data; } ;
struct TYPE_18__ {int sourceY; int sourceX; int* eval_dist; size_t cbEntry; int best_coding; TYPE_7__* subCels; int motion; } ;
struct TYPE_17__ {int width; int framesSinceKeyframe; int lambda; TYPE_6__* frame_to_enc; TYPE_1__* current_frame; int * this_motion8; } ;
struct TYPE_15__ {int * usedCB2; int * usedCB4; int numCB4; int unpacked_cb4_enlarged; } ;
struct TYPE_16__ {int mainChunkSize; TYPE_2__ codebooks; int * used_option; } ;
struct TYPE_14__ {int linesize; int data; } ;
typedef TYPE_3__ RoqTempdata ;
typedef TYPE_4__ RoqContext ;
typedef TYPE_5__ CelEvaluation ;


 void* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,int ,int,int,int,int,int ,int ,int) ;
 int FUNC_1 (TYPE_4__*,int,int,int ,int) ;
 int FUNC_2 (TYPE_7__*,int,int,TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_6__*,int,int,int *,int) ;
 int FUNC_4 (int *,int ,int ,size_t*,int) ;

__attribute__((used)) static void FUNC_5(CelEvaluation *VAR_6, RoqContext *VAR_7,
                                RoqTempdata *VAR_8)
{
    uint8_t VAR_9[8*8*3];
    int VAR_10 = VAR_6->sourceY*VAR_7->width/64 + VAR_6->sourceX/8;
    int VAR_11, VAR_12, VAR_13, VAR_14;

    int VAR_15[4] = {2, 10, 10, 0};

    if (VAR_7->framesSinceKeyframe >= 1) {
        VAR_6->motion = VAR_7->this_motion8[VAR_10];

        VAR_6->eval_dist[VAR_3] =
            FUNC_1(VAR_7, VAR_6->sourceX, VAR_6->sourceY,
                             VAR_7->this_motion8[VAR_10], 8);
    } else
        VAR_6->eval_dist[VAR_3] = VAR_0;

    if (VAR_7->framesSinceKeyframe >= 2)
        VAR_6->eval_dist[VAR_4] = FUNC_0(VAR_7->frame_to_enc->data,
                                               VAR_7->current_frame->data,
                                               VAR_6->sourceX, VAR_6->sourceY,
                                               VAR_6->sourceX, VAR_6->sourceY,
                                               VAR_7->frame_to_enc->linesize,
                                               VAR_7->current_frame->linesize,8);
    else
        VAR_6->eval_dist[VAR_4] = VAR_0;

    FUNC_3(VAR_7->frame_to_enc, VAR_6->sourceX, VAR_6->sourceY, VAR_9, 8);

    VAR_6->eval_dist[VAR_5] =
        FUNC_4(VAR_9, VAR_8->codebooks.unpacked_cb4_enlarged,
                 VAR_8->codebooks.numCB4, &VAR_6->cbEntry, 8);

    FUNC_2(VAR_6->subCels + 0, VAR_6->sourceX+0, VAR_6->sourceY+0, VAR_7, VAR_8);
    FUNC_2(VAR_6->subCels + 1, VAR_6->sourceX+4, VAR_6->sourceY+0, VAR_7, VAR_8);
    FUNC_2(VAR_6->subCels + 2, VAR_6->sourceX+0, VAR_6->sourceY+4, VAR_7, VAR_8);
    FUNC_2(VAR_6->subCels + 3, VAR_6->sourceX+4, VAR_6->sourceY+4, VAR_7, VAR_8);

    VAR_6->eval_dist[VAR_2] = 0;
    VAR_14 = 0;
    for (VAR_11=0; VAR_11<4; VAR_11++) {
        VAR_6->eval_dist[VAR_2] +=
            VAR_6->subCels[VAR_11].eval_dist[VAR_6->subCels[VAR_11].best_coding];
        VAR_14 += VAR_6->subCels[VAR_11].best_bit_use;
    }

    VAR_13 = VAR_0;
    VAR_15[3] = 2 + VAR_14;

    for (VAR_11=0; VAR_11<4; VAR_11++)
        if (VAR_1*VAR_6->eval_dist[VAR_11] + VAR_7->lambda*VAR_15[VAR_11] <
            VAR_13) {
            VAR_6->best_coding = VAR_11;
            VAR_13 = VAR_1*VAR_6->eval_dist[VAR_11] +
                VAR_7->lambda*VAR_15[VAR_11];
        }

    VAR_8->used_option[VAR_6->best_coding]++;
    VAR_8->mainChunkSize += VAR_15[VAR_6->best_coding];

    if (VAR_6->best_coding == VAR_5)
        VAR_8->codebooks.usedCB4[VAR_6->cbEntry]++;

    if (VAR_6->best_coding == VAR_2)
        for (VAR_11=0; VAR_11<4; VAR_11++) {
            if (VAR_6->subCels[VAR_11].best_coding == VAR_5)
                VAR_8->codebooks.usedCB4[VAR_6->subCels[VAR_11].cbEntry]++;
            else if (VAR_6->subCels[VAR_11].best_coding == VAR_2)
                for (VAR_12=0; VAR_12<4; VAR_12++)
                    VAR_8->codebooks.usedCB2[VAR_6->subCels[VAR_11].subCels[VAR_12]]++;
        }
}
