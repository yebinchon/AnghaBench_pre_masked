
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int** VAR_4 ;

__attribute__((used)) static void FUNC_0(void)
{
    uint64_t VAR_5;
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < 256; VAR_6++) {
        VAR_5 = VAR_0[VAR_6];
        VAR_4[0][VAR_6] = (VAR_5 << 56) ^ (VAR_5 << 48) ^ (VAR_5 << 40) ^ (VAR_5 << 24) ^ VAR_5;
        VAR_4[7][VAR_6] = (VAR_5 << 56) ^ (VAR_5 << 48) ^ (VAR_5 << 40) ^ (VAR_5 << 24) ^ (VAR_5 << 16) ^ (VAR_5 << 8);
        VAR_5 = VAR_1[VAR_6];
        VAR_4[1][VAR_6] = (VAR_5 << 48) ^ (VAR_5 << 40) ^ (VAR_5 << 32) ^ (VAR_5 << 24) ^ (VAR_5 << 16);
        VAR_4[4][VAR_6] = (VAR_5 << 48) ^ (VAR_5 << 40) ^ (VAR_5 << 32) ^ (VAR_5 << 16) ^ (VAR_5 << 8) ^ VAR_5;
        VAR_5 = VAR_2[VAR_6];
        VAR_4[2][VAR_6] = (VAR_5 << 56) ^ (VAR_5 << 40) ^ (VAR_5 << 32) ^ (VAR_5 << 16) ^ (VAR_5 << 8);
        VAR_4[5][VAR_6] = (VAR_5 << 56) ^ (VAR_5 << 40) ^ (VAR_5 << 32) ^ (VAR_5 << 24) ^ (VAR_5 << 8) ^ VAR_5;
        VAR_5 = VAR_3[VAR_6];
        VAR_4[3][VAR_6] = (VAR_5 << 56) ^ (VAR_5 << 48) ^ (VAR_5 << 32) ^ (VAR_5 << 8) ^ VAR_5;
        VAR_4[6][VAR_6] = (VAR_5 << 56) ^ (VAR_5 << 48) ^ (VAR_5 << 32) ^ (VAR_5 << 24) ^ (VAR_5 << 16) ^ VAR_5;
    }
}
