
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int left_cbp; int top_cbp; int * cabac_state; int cabac; } ;
typedef TYPE_1__ H264SliceContext ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(H264SliceContext *VAR_0)
{
    int VAR_1, VAR_2, VAR_3, VAR_4 = 0;

    VAR_2 = VAR_0->left_cbp;
    VAR_1 = VAR_0->top_cbp;

    VAR_3 = !(VAR_2 & 0x02) + 2 * !(VAR_1 & 0x04);
    VAR_4 += FUNC_0(&VAR_0->cabac, &VAR_0->cabac_state[73 + VAR_3]);
    VAR_3 = !(VAR_4 & 0x01) + 2 * !(VAR_1 & 0x08);
    VAR_4 += FUNC_0(&VAR_0->cabac, &VAR_0->cabac_state[73 + VAR_3]) << 1;
    VAR_3 = !(VAR_2 & 0x08) + 2 * !(VAR_4 & 0x01);
    VAR_4 += FUNC_0(&VAR_0->cabac, &VAR_0->cabac_state[73 + VAR_3]) << 2;
    VAR_3 = !(VAR_4 & 0x04) + 2 * !(VAR_4 & 0x02);
    VAR_4 += FUNC_0(&VAR_0->cabac, &VAR_0->cabac_state[73 + VAR_3]) << 3;
    return VAR_4;
}
