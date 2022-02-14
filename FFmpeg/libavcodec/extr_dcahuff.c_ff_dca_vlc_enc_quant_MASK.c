
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int PutBitContext ;


 int FUNC_0 (int) ;
 int *** VAR_0 ;
 int *** VAR_1 ;
 size_t* VAR_2 ;
 size_t* VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;

void FUNC_2(PutBitContext *VAR_4, int *VAR_5, uint8_t VAR_6, uint8_t VAR_7, uint8_t VAR_8)
{
    uint8_t VAR_9, VAR_10;
    for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
        VAR_10 = VAR_5[VAR_9] - VAR_2[VAR_8];
        FUNC_0(VAR_10 < VAR_3[VAR_8]);
        FUNC_1(VAR_4, VAR_0[VAR_8][VAR_7][VAR_10], VAR_1[VAR_8][VAR_7][VAR_10]);
    }
}
