
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int32_t *VAR_0, int32_t *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;

    VAR_1[0] = 0x2000;
    for (VAR_2 = 0; VAR_2 < 14; VAR_2++) {
        VAR_3 = VAR_2 + 1;
        VAR_1[VAR_3] = VAR_0[VAR_2] >> 2;
        if (VAR_3 / 2 >= 1) {
            for (VAR_4 = 1; VAR_4 <= VAR_3 / 2; VAR_4++) {
                int VAR_5, VAR_6, VAR_7;

                VAR_5 = VAR_1[VAR_4];
                VAR_6 = VAR_1[VAR_3 - VAR_4];

                VAR_7 = FUNC_0(VAR_5, VAR_0[VAR_2], VAR_6);
                VAR_1[VAR_4] = FUNC_1(VAR_7);

                VAR_7 = FUNC_0(VAR_6, VAR_0[VAR_2], VAR_5);
                VAR_1[VAR_3 - VAR_4] = FUNC_1(VAR_7);
            }
        }
    }
}
