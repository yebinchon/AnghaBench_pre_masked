
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 scalar_t__* VAR_1 ;
 int** VAR_2 ;

__attribute__((used)) static void FUNC_2(int *VAR_3)
{
    int VAR_4[17] = { 0 };
    int VAR_5, VAR_6, VAR_7;

    for (VAR_5 = 0; VAR_5 < 11; VAR_5++) {
        int VAR_8 = 0;
        int VAR_9 = VAR_0;
        int VAR_10 = 0;

        for (VAR_6 = FUNC_0(VAR_5 - 3, 0), VAR_7 = 0; VAR_6 <= VAR_5 + 3; VAR_6++, VAR_7++) {
            int VAR_11 = VAR_3[VAR_6] + VAR_2[VAR_5][VAR_7];
            if (VAR_11 > VAR_9) {
                VAR_8 = VAR_6;
                VAR_9 = VAR_11;
            }
            VAR_10 = FUNC_1(VAR_10, VAR_11);
        }

        if (VAR_3[VAR_5] < VAR_10) {
            for (VAR_6 = FUNC_0(VAR_8 - 3, 0),
                 VAR_7 = FUNC_0(3 - VAR_8, 0);
                 VAR_6 <= VAR_8 + 3; VAR_6++, VAR_7++)
                VAR_4[VAR_6] += VAR_1[VAR_7];
        }
    }

    for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
        int VAR_12 = FUNC_0(VAR_4[VAR_5], -512);
        VAR_3[VAR_5] = FUNC_0(VAR_3[VAR_5] + VAR_12, 0);
    }
}
