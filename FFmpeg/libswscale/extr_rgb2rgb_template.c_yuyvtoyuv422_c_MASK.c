
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int const*,int *,int) ;
 int FUNC_2 (int const*,int *,int *,int const) ;

__attribute__((used)) static void FUNC_3(uint8_t *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2,
                           const uint8_t *VAR_3, int VAR_4, int VAR_5,
                           int VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9;
    const int VAR_10 = FUNC_0(VAR_4, 1);

    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
        FUNC_1(VAR_3, VAR_0, VAR_4);
        FUNC_2(VAR_3, VAR_1, VAR_2, VAR_10);

        VAR_3 += VAR_8;
        VAR_0 += VAR_6;
        VAR_1 += VAR_7;
        VAR_2 += VAR_7;
    }
}
