
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int GetBitContext ;


 size_t FUNC_0 (int *,int) ;
 size_t* VAR_0 ;

__attribute__((used)) static void FUNC_1(GetBitContext *VAR_1, uint8_t VAR_2[257])
{
    uint8_t VAR_3;
    int VAR_4;

    VAR_2[0] = FUNC_0(VAR_1, 8);
    VAR_3 = VAR_0[VAR_2[0]];

    for (VAR_4 = 1; VAR_4 <= VAR_2[0]; VAR_4++) {
        VAR_2[VAR_4] = FUNC_0(VAR_1, 8) ^ VAR_3;
        VAR_3 = VAR_0[VAR_2[VAR_4] ^ VAR_3];
    }
    VAR_2[VAR_4] = 0;
}
