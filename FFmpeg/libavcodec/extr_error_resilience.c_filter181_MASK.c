
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static void FUNC_1(int16_t *VAR_2, int VAR_3, int VAR_4, ptrdiff_t VAR_5)
{
    int VAR_6, VAR_7;


    for (VAR_7 = 1; VAR_7 < VAR_4 - 1; VAR_7++) {
        int VAR_8 = VAR_2[0 + VAR_7 * VAR_5];

        for (VAR_6 = 1; VAR_6 < VAR_3 - 1; VAR_6++) {
            int VAR_9;
            VAR_9 = -VAR_8 +
                 VAR_2[VAR_6 + VAR_7 * VAR_5] * 8 -
                 VAR_2[VAR_6 + 1 + VAR_7 * VAR_5];
            VAR_9 = (FUNC_0(VAR_9, VAR_1/10923, VAR_0/10923 - 32768) * 10923 + 32768) >> 16;
            VAR_8 = VAR_2[VAR_6 + VAR_7 * VAR_5];
            VAR_2[VAR_6 + VAR_7 * VAR_5] = VAR_9;
        }
    }


    for (VAR_6 = 1; VAR_6 < VAR_3 - 1; VAR_6++) {
        int VAR_10 = VAR_2[VAR_6];

        for (VAR_7 = 1; VAR_7 < VAR_4 - 1; VAR_7++) {
            int VAR_11;

            VAR_11 = -VAR_10 +
                 VAR_2[VAR_6 + VAR_7 * VAR_5] * 8 -
                 VAR_2[VAR_6 + (VAR_7 + 1) * VAR_5];
            VAR_11 = (FUNC_0(VAR_11, VAR_1/10923, VAR_0/10923 - 32768) * 10923 + 32768) >> 16;
            VAR_10 = VAR_2[VAR_6 + VAR_7 * VAR_5];
            VAR_2[VAR_6 + VAR_7 * VAR_5] = VAR_11;
        }
    }
}
