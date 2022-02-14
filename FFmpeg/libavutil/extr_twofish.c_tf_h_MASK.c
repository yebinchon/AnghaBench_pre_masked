
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (size_t*) ;
 int FUNC_1 (size_t*,int ) ;
 size_t* VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_2 (size_t*,int *,int) ;

__attribute__((used)) static uint32_t FUNC_3(uint32_t VAR_2, uint32_t VAR_3[4], int VAR_4)
{
    uint8_t VAR_5[4], VAR_6[4];
    FUNC_1(VAR_5, VAR_2);
    FUNC_2(VAR_5, VAR_3, VAR_4);

    VAR_6[0] = VAR_5[0] ^ VAR_1[VAR_5[1]] ^ VAR_0[VAR_5[2]] ^ VAR_0[VAR_5[3]];
    VAR_6[1] = VAR_0[VAR_5[0]] ^ VAR_1[VAR_5[1]] ^ VAR_1[VAR_5[2]] ^ VAR_5[3];
    VAR_6[2] = VAR_1[VAR_5[0]] ^ VAR_0[VAR_5[1]] ^ VAR_5[2] ^ VAR_1[VAR_5[3]];
    VAR_6[3] = VAR_1[VAR_5[0]] ^ VAR_5[1] ^ VAR_1[VAR_5[2]] ^ VAR_0[VAR_5[3]];

    return FUNC_0(VAR_6);
}
