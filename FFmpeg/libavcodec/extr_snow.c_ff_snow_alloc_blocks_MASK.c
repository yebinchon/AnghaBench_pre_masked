
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int b_width; int b_height; int block_max_depth; int block; TYPE_1__* avctx; } ;
struct TYPE_4__ {int height; int width; } ;
typedef TYPE_2__ SnowContext ;
typedef int BlockNode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

int FUNC_4(SnowContext *VAR_2){
    int VAR_3= FUNC_1(VAR_2->avctx->width, VAR_1);
    int VAR_4= FUNC_1(VAR_2->avctx->height, VAR_1);

    VAR_2->b_width = VAR_3;
    VAR_2->b_height= VAR_4;

    FUNC_2(VAR_2->block);
    VAR_2->block= FUNC_3(VAR_3 * VAR_4, sizeof(BlockNode) << (VAR_2->block_max_depth*2));
    if (!VAR_2->block)
        return FUNC_0(VAR_0);

    return 0;
}
