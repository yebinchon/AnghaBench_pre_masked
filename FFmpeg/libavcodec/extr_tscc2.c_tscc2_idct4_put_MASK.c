
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int,int,int,int,int,int ) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(int *VAR_2, int VAR_3[3], uint8_t *VAR_4, int VAR_5)
{
    int VAR_6;
    int VAR_7[4 * 4];
    int VAR_8, VAR_9, VAR_10, VAR_11;

    for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
        VAR_8 = FUNC_1(VAR_3[0 + (VAR_6 & 1)], VAR_2[0 * 4 + VAR_6]);
        VAR_9 = FUNC_1(VAR_3[1 + (VAR_6 & 1)], VAR_2[1 * 4 + VAR_6]);
        VAR_10 = FUNC_1(VAR_3[0 + (VAR_6 & 1)], VAR_2[2 * 4 + VAR_6]);
        VAR_11 = FUNC_1(VAR_3[1 + (VAR_6 & 1)], VAR_2[3 * 4 + VAR_6]);
        FUNC_0(VAR_7[0 * 4 + VAR_6], VAR_7[1 * 4 + VAR_6],
              VAR_7[2 * 4 + VAR_6], VAR_7[3 * 4 + VAR_6],
              VAR_8, VAR_9, VAR_10, VAR_11, VAR_0);
    }
    for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
        FUNC_0(VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3],
              VAR_7[VAR_6 * 4 + 0], VAR_7[VAR_6 * 4 + 1],
              VAR_7[VAR_6 * 4 + 2], VAR_7[VAR_6 * 4 + 3], VAR_1);
        VAR_4 += VAR_5;
    }
}
