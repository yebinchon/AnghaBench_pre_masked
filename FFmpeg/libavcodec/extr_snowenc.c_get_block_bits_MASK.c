
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int type; int* color; int ref; scalar_t__ my; scalar_t__ mx; } ;
struct TYPE_9__ {int b_width; int block_max_depth; int b_height; TYPE_2__ const* block; } ;
typedef TYPE_1__ SnowContext ;
typedef TYPE_2__ const BlockNode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_2__ const VAR_1 ;
 int FUNC_2 (TYPE_1__*,int*,int*,int,TYPE_2__ const*,TYPE_2__ const*,TYPE_2__ const*) ;

__attribute__((used)) static inline int FUNC_3(SnowContext *VAR_2, int VAR_3, int VAR_4, int VAR_5){
    const int VAR_6 = VAR_2->b_width << VAR_2->block_max_depth;
    const int VAR_7 = VAR_2->b_height<< VAR_2->block_max_depth;
    int VAR_8= VAR_3 + VAR_4*VAR_6;
    const BlockNode *VAR_9 = &VAR_2->block[VAR_8];
    const BlockNode *VAR_10 = VAR_3 ? &VAR_2->block[VAR_8-1] : &VAR_1;
    const BlockNode *VAR_11 = VAR_4 ? &VAR_2->block[VAR_8-VAR_6] : &VAR_1;
    const BlockNode *VAR_12 = VAR_4 && VAR_3 ? &VAR_2->block[VAR_8-VAR_6-1] : VAR_10;
    const BlockNode *VAR_13 = VAR_4 && VAR_3+VAR_5<VAR_6 ? &VAR_2->block[VAR_8-VAR_6+VAR_5] : VAR_12;
    int VAR_14, VAR_15;



    if(VAR_3<0 || VAR_3>=VAR_6 || VAR_4>=VAR_7)
        return 0;
    if(VAR_9->type & VAR_0){
        return 3+2*( FUNC_1(2*FUNC_0(VAR_10->color[0] - VAR_9->color[0]))
                   + FUNC_1(2*FUNC_0(VAR_10->color[1] - VAR_9->color[1]))
                   + FUNC_1(2*FUNC_0(VAR_10->color[2] - VAR_9->color[2])));
    }else{
        FUNC_2(VAR_2, &VAR_14, &VAR_15, VAR_9->ref, VAR_10, VAR_11, VAR_13);
        VAR_14-= VAR_9->mx;
        VAR_15-= VAR_9->my;
        return 2*(1 + FUNC_1(2*FUNC_0(VAR_14))
                    + FUNC_1(2*FUNC_0(VAR_15))
                    + FUNC_1(2*VAR_9->ref));
    }
}
