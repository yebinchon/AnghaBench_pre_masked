
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t BYTE ;


 size_t* VAR_0 ;
 size_t* VAR_1 ;

void FUNC_0(BYTE *VAR_2, BYTE *VAR_3)
{

    VAR_3[0] = VAR_0[VAR_2[0]] ^ VAR_1[VAR_2[1]] ^ VAR_2[2] ^ VAR_2[3];
    VAR_3[1] = VAR_2[0] ^ VAR_0[VAR_2[1]] ^ VAR_1[VAR_2[2]] ^ VAR_2[3];
    VAR_3[2] = VAR_2[0] ^ VAR_2[1] ^ VAR_0[VAR_2[2]] ^ VAR_1[VAR_2[3]];
    VAR_3[3] = VAR_1[VAR_2[0]] ^ VAR_2[1] ^ VAR_2[2] ^ VAR_0[VAR_2[3]];
}
