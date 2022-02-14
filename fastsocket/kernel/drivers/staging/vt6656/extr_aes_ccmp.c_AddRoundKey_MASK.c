
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 int* VAR_0 ;
 int FUNC_0 (int*,int*,int*) ;

void FUNC_1(BYTE *VAR_1, int VAR_2)
{
BYTE VAR_3[4];
BYTE VAR_4[10] = { 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36};

    VAR_3[0] = VAR_0[VAR_1[13]];
    VAR_3[1] = VAR_0[VAR_1[14]];
    VAR_3[2] = VAR_0[VAR_1[15]];
    VAR_3[3] = VAR_0[VAR_1[12]];

    VAR_1[0] = VAR_1[0] ^ VAR_4[VAR_2];
    FUNC_0(&VAR_1[0], VAR_3, &VAR_1[0]);

    FUNC_0(&VAR_1[4], &VAR_1[0], &VAR_1[4]);
    FUNC_0(&VAR_1[8], &VAR_1[4], &VAR_1[8]);
    FUNC_0(&VAR_1[12], &VAR_1[8], &VAR_1[12]);
}
