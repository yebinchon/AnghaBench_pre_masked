
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int PutBitContext ;


 int ** VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(PutBitContext *VAR_2, int *VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
    uint8_t VAR_6, VAR_7;
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        VAR_7 = VAR_3[VAR_6] - 1;
        FUNC_0(VAR_2, VAR_0[VAR_5][VAR_7], VAR_1[VAR_5][VAR_7]);
    }
}
