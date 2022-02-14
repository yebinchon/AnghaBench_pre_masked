
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int* color; int ref; int mx; int my; int level; int type; } ;
struct TYPE_12__ {int b_width; int block_max_depth; int nb_planes; int ref_frames; int * block_state; int c; scalar_t__ keyframe; TYPE_2__ const* block; } ;
typedef TYPE_1__ SnowContext ;
typedef TYPE_2__ const BlockNode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_2__ const VAR_1 ;
 int FUNC_2 (TYPE_1__*,int*,int*,int,TYPE_2__ const*,TYPE_2__ const*,TYPE_2__ const*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int,int) ;
 scalar_t__ FUNC_5 (TYPE_2__ const*,TYPE_2__ const*) ;
 int FUNC_6 (TYPE_1__*,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_7(SnowContext *VAR_2, int VAR_3, int VAR_4, int VAR_5){
    const int VAR_6= VAR_2->b_width << VAR_2->block_max_depth;
    const int VAR_7= VAR_2->block_max_depth - VAR_3;
    const int VAR_8= (VAR_4 + VAR_5*VAR_6) << VAR_7;
    int VAR_9= (VAR_4+1)<<VAR_7;
    BlockNode *VAR_10= &VAR_2->block[VAR_8];
    const BlockNode *VAR_11 = VAR_4 ? &VAR_2->block[VAR_8-1] : &VAR_1;
    const BlockNode *VAR_12 = VAR_5 ? &VAR_2->block[VAR_8-VAR_6] : &VAR_1;
    const BlockNode *VAR_13 = VAR_5 && VAR_4 ? &VAR_2->block[VAR_8-VAR_6-1] : VAR_11;
    const BlockNode *VAR_14 = VAR_5 && VAR_9<VAR_6 && ((VAR_4&1)==0 || VAR_3==0) ? &VAR_2->block[VAR_8-VAR_6+(1<<VAR_7)] : VAR_13;
    int VAR_15 = VAR_11->color[0];
    int VAR_16= VAR_11->color[1];
    int VAR_17= VAR_11->color[2];
    int VAR_18, VAR_19;
    int VAR_20= FUNC_1(2*VAR_11->ref) + FUNC_1(2*VAR_12->ref);
    int VAR_21= FUNC_1(2*FUNC_0(VAR_11->mx - VAR_12->mx)) + 16*!!VAR_10->ref;
    int VAR_22= FUNC_1(2*FUNC_0(VAR_11->my - VAR_12->my)) + 16*!!VAR_10->ref;
    int VAR_23= 2*VAR_11->level + 2*VAR_12->level + VAR_13->level + VAR_14->level;

    if(VAR_2->keyframe){
        FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_15, VAR_16, VAR_17, 0, 0, 0, VAR_0);
        return;
    }

    if(VAR_3!=VAR_2->block_max_depth){
        if(FUNC_5(VAR_10,VAR_10+1) && FUNC_5(VAR_10,VAR_10+VAR_6) && FUNC_5(VAR_10,VAR_10+VAR_6+1)){
            FUNC_3(&VAR_2->c, &VAR_2->block_state[4 + VAR_23], 1);
        }else{
            FUNC_3(&VAR_2->c, &VAR_2->block_state[4 + VAR_23], 0);
            FUNC_7(VAR_2, VAR_3+1, 2*VAR_4+0, 2*VAR_5+0);
            FUNC_7(VAR_2, VAR_3+1, 2*VAR_4+1, 2*VAR_5+0);
            FUNC_7(VAR_2, VAR_3+1, 2*VAR_4+0, 2*VAR_5+1);
            FUNC_7(VAR_2, VAR_3+1, 2*VAR_4+1, 2*VAR_5+1);
            return;
        }
    }
    if(VAR_10->type & VAR_0){
        FUNC_2(VAR_2, &VAR_18, &VAR_19, 0, VAR_11, VAR_12, VAR_14);
        FUNC_3(&VAR_2->c, &VAR_2->block_state[1 + (VAR_11->type&1) + (VAR_12->type&1)], 1);
        FUNC_4(&VAR_2->c, &VAR_2->block_state[32], VAR_10->color[0]-VAR_15 , 1);
        if (VAR_2->nb_planes > 2) {
            FUNC_4(&VAR_2->c, &VAR_2->block_state[64], VAR_10->color[1]-VAR_16, 1);
            FUNC_4(&VAR_2->c, &VAR_2->block_state[96], VAR_10->color[2]-VAR_17, 1);
        }
        FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_10->color[0], VAR_10->color[1], VAR_10->color[2], VAR_18, VAR_19, 0, VAR_0);
    }else{
        FUNC_2(VAR_2, &VAR_18, &VAR_19, VAR_10->ref, VAR_11, VAR_12, VAR_14);
        FUNC_3(&VAR_2->c, &VAR_2->block_state[1 + (VAR_11->type&1) + (VAR_12->type&1)], 0);
        if(VAR_2->ref_frames > 1)
            FUNC_4(&VAR_2->c, &VAR_2->block_state[128 + 1024 + 32*VAR_20], VAR_10->ref, 0);
        FUNC_4(&VAR_2->c, &VAR_2->block_state[128 + 32*VAR_21], VAR_10->mx - VAR_18, 1);
        FUNC_4(&VAR_2->c, &VAR_2->block_state[128 + 32*VAR_22], VAR_10->my - VAR_19, 1);
        FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_15, VAR_16, VAR_17, VAR_10->mx, VAR_10->my, VAR_10->ref, 0);
    }
}
