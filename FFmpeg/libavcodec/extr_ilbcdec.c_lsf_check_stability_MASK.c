
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static void FUNC_1(int16_t *VAR_0, int VAR_1, int VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < 2; VAR_3++) {
        for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
            for (int VAR_5 = 0; VAR_5 < VAR_1 - 1; VAR_5++) {
                int VAR_6 = VAR_4 * VAR_1 + VAR_5;

                if ((VAR_0[VAR_6 + 1] - VAR_0[VAR_6]) < 319) {
                    if (VAR_0[VAR_6 + 1] < VAR_0[VAR_6]) {
                        VAR_0[VAR_6 + 1] = VAR_0[VAR_6] + 160;
                        VAR_0[VAR_6] = VAR_0[VAR_6 + 1] - 160;
                    } else {
                        VAR_0[VAR_6] -= 160;
                        VAR_0[VAR_6 + 1] += 160;
                    }
                }

                VAR_0[VAR_6] = FUNC_0(VAR_0[VAR_6], 82, 25723);
            }
        }
    }
}
