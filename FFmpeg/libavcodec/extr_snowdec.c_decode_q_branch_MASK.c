
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int level; int* color; int mx; int my; unsigned int ref; int type; } ;
struct TYPE_10__ {int b_width; int block_max_depth; int nb_planes; int ref_frames; int * block_state; int c; int avctx; scalar_t__ keyframe; TYPE_2__ const* block; } ;
typedef TYPE_1__ SnowContext ;
typedef TYPE_2__ const BlockNode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 void* FUNC_4 (int *,int *,int) ;
 TYPE_2__ const VAR_3 ;
 int FUNC_5 (TYPE_1__*,int*,int*,unsigned int,TYPE_2__ const*,TYPE_2__ const*,TYPE_2__ const*) ;
 int FUNC_6 (TYPE_1__*,int,int,int,int,int,int,int,int,unsigned int,int) ;

__attribute__((used)) static int FUNC_7(SnowContext *VAR_4, int VAR_5, int VAR_6, int VAR_7){
    const int VAR_8= VAR_4->b_width << VAR_4->block_max_depth;
    const int VAR_9= VAR_4->block_max_depth - VAR_5;
    const int VAR_10= (VAR_6 + VAR_7*VAR_8) << VAR_9;
    int VAR_11= (VAR_6+1)<<VAR_9;
    const BlockNode *VAR_12 = VAR_6 ? &VAR_4->block[VAR_10-1] : &VAR_3;
    const BlockNode *VAR_13 = VAR_7 ? &VAR_4->block[VAR_10-VAR_8] : &VAR_3;
    const BlockNode *VAR_14 = VAR_7 && VAR_6 ? &VAR_4->block[VAR_10-VAR_8-1] : VAR_12;
    const BlockNode *VAR_15 = VAR_7 && VAR_11<VAR_8 && ((VAR_6&1)==0 || VAR_5==0) ? &VAR_4->block[VAR_10-VAR_8+(1<<VAR_9)] : VAR_14;
    int VAR_16= 2*VAR_12->level + 2*VAR_13->level + VAR_14->level + VAR_15->level;
    int VAR_17;

    if(VAR_4->keyframe){
        FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7, VAR_3.color[0], VAR_3.color[1], VAR_3.color[2], VAR_3.mx, VAR_3.my, VAR_3.ref, VAR_2);
        return 0;
    }

    if(VAR_5==VAR_4->block_max_depth || FUNC_3(&VAR_4->c, &VAR_4->block_state[4 + VAR_16])){
        int VAR_18, VAR_19, VAR_20;
        int VAR_21 = VAR_12->color[0];
        int VAR_22= VAR_12->color[1];
        int VAR_23= VAR_12->color[2];
        unsigned VAR_24 = 0;
        int VAR_25= FUNC_2(2*VAR_12->ref) + FUNC_2(2*VAR_13->ref);
        int VAR_26= FUNC_2(2*FUNC_0(VAR_12->mx - VAR_13->mx)) + 0*FUNC_2(2*FUNC_0(VAR_15->mx - VAR_13->mx));
        int VAR_27= FUNC_2(2*FUNC_0(VAR_12->my - VAR_13->my)) + 0*FUNC_2(2*FUNC_0(VAR_15->my - VAR_13->my));

        VAR_18= FUNC_3(&VAR_4->c, &VAR_4->block_state[1 + VAR_12->type + VAR_13->type]) ? VAR_2 : 0;
        if(VAR_18){
            int VAR_28, VAR_29, VAR_30;
            FUNC_5(VAR_4, &VAR_19, &VAR_20, 0, VAR_12, VAR_13, VAR_15);
            VAR_28 = FUNC_4(&VAR_4->c, &VAR_4->block_state[32], 1);
            if (VAR_28 < -255 || VAR_28 > 255) {
                return VAR_0;
            }
            VAR_21 += VAR_28;
            if (VAR_4->nb_planes > 2) {
                VAR_29 = FUNC_4(&VAR_4->c, &VAR_4->block_state[64], 1);
                VAR_30 = FUNC_4(&VAR_4->c, &VAR_4->block_state[96], 1);
                if (VAR_29 < -255 || VAR_29 > 255 || VAR_30 < -255 || VAR_30 > 255) {
                    return VAR_0;
                }
                VAR_22 += VAR_29;
                VAR_23 += VAR_30;
            }
        }else{
            if(VAR_4->ref_frames > 1)
                VAR_24= FUNC_4(&VAR_4->c, &VAR_4->block_state[128 + 1024 + 32*VAR_25], 0);
            if (VAR_24 >= VAR_4->ref_frames) {
                FUNC_1(VAR_4->avctx, VAR_1, "Invalid ref\n");
                return VAR_0;
            }
            FUNC_5(VAR_4, &VAR_19, &VAR_20, VAR_24, VAR_12, VAR_13, VAR_15);
            VAR_19+= (unsigned)FUNC_4(&VAR_4->c, &VAR_4->block_state[128 + 32*(VAR_26 + 16*!!VAR_24)], 1);
            VAR_20+= (unsigned)FUNC_4(&VAR_4->c, &VAR_4->block_state[128 + 32*(VAR_27 + 16*!!VAR_24)], 1);
        }
        FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7, VAR_21, VAR_22, VAR_23, VAR_19, VAR_20, VAR_24, VAR_18);
    }else{
        if ((VAR_17 = FUNC_7(VAR_4, VAR_5+1, 2*VAR_6+0, 2*VAR_7+0)) < 0 ||
            (VAR_17 = FUNC_7(VAR_4, VAR_5+1, 2*VAR_6+1, 2*VAR_7+0)) < 0 ||
            (VAR_17 = FUNC_7(VAR_4, VAR_5+1, 2*VAR_6+0, 2*VAR_7+1)) < 0 ||
            (VAR_17 = FUNC_7(VAR_4, VAR_5+1, 2*VAR_6+1, 2*VAR_7+1)) < 0)
            return VAR_17;
    }
    return 0;
}
