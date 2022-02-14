
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int deblock_coefs; int cbp_chroma; int cbp_luma; int mb_type; int tmp_b_block_base; int * intra_types; int intra_types_hist; } ;
typedef TYPE_1__ RV34DecContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(RV34DecContext *VAR_0)
{
    FUNC_0(&VAR_0->intra_types_hist);
    VAR_0->intra_types = ((void*)0);
    FUNC_0(&VAR_0->tmp_b_block_base);
    FUNC_0(&VAR_0->mb_type);
    FUNC_0(&VAR_0->cbp_luma);
    FUNC_0(&VAR_0->cbp_chroma);
    FUNC_0(&VAR_0->deblock_coefs);
}
