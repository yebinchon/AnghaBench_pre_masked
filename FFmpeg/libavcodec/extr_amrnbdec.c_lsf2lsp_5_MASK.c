
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef int int16_t ;
struct TYPE_5__ {size_t* lsf; } ;
struct TYPE_6__ {float* prev_lsf_r; int * lsp; int prev_lsp_sub4; TYPE_1__ frame; } ;
typedef TYPE_2__ AMRContext ;


 int VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,float*,int const**,int,size_t const,int) ;
 int ** VAR_3 ;
 int ** VAR_4 ;
 int ** VAR_5 ;
 int ** VAR_6 ;
 int ** VAR_7 ;
 float* VAR_8 ;
 int FUNC_1 (int ,int ,int ,double,double,int) ;

__attribute__((used)) static void FUNC_2(AMRContext *VAR_9)
{
    const uint16_t *VAR_10 = VAR_9->frame.lsf;
    float VAR_11[VAR_0];
    const int16_t *VAR_12[5];
    int VAR_13;

    VAR_12[0] = VAR_3[VAR_10[0]];
    VAR_12[1] = VAR_4[VAR_10[1]];
    VAR_12[2] = VAR_5[VAR_10[2] >> 1];
    VAR_12[3] = VAR_6[VAR_10[3]];
    VAR_12[4] = VAR_7[VAR_10[4]];

    for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++)
        VAR_11[VAR_13] = VAR_9->prev_lsf_r[VAR_13] * VAR_1 * VAR_2 + VAR_8[VAR_13];

    FUNC_0(VAR_9, VAR_9->lsp[1], VAR_11, VAR_12, 0, VAR_10[2] & 1, 0);
    FUNC_0(VAR_9, VAR_9->lsp[3], VAR_11, VAR_12, 2, VAR_10[2] & 1, 1);


    FUNC_1(VAR_9->lsp[0], VAR_9->prev_lsp_sub4, VAR_9->lsp[1], 0.5, 0.5, VAR_0);
    FUNC_1(VAR_9->lsp[2], VAR_9->lsp[1] , VAR_9->lsp[3], 0.5, 0.5, VAR_0);
}
