
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {void** u32; int u8x4; } ;
typedef TYPE_1__ av_aes_block ;


 void* FUNC_0 (int **,int ,int ,int ,int ) ;
 int ** VAR_0 ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(av_aes_block VAR_1[2], uint32_t VAR_2[][256], int VAR_3, int VAR_4)
{
    FUNC_1 (*VAR_0)[4] = VAR_1[1].u8x4;
    VAR_1[0].u32[0] = FUNC_0(VAR_2, VAR_0[0][0], VAR_0[VAR_3 ][1], VAR_0[2][2], VAR_0[VAR_4 ][3]);
    VAR_1[0].u32[1] = FUNC_0(VAR_2, VAR_0[1][0], VAR_0[VAR_4 - 1][1], VAR_0[3][2], VAR_0[VAR_3 - 1][3]);
    VAR_1[0].u32[2] = FUNC_0(VAR_2, VAR_0[2][0], VAR_0[VAR_4 ][1], VAR_0[0][2], VAR_0[VAR_3 ][3]);
    VAR_1[0].u32[3] = FUNC_0(VAR_2, VAR_0[3][0], VAR_0[VAR_3 - 1][1], VAR_0[1][2], VAR_0[VAR_4 - 1][3]);
}
