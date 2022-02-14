
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(const int16_t *VAR_0, uint8_t *VAR_1, int VAR_2,
                           const uint8_t *VAR_3, int VAR_4)
{
    int VAR_5;
    for (VAR_5=0; VAR_5<VAR_2; VAR_5++) {
        int VAR_6 = (VAR_0[VAR_5] + VAR_3[(VAR_5 + VAR_4) & 7]) >> 7;
        VAR_1[VAR_5]= FUNC_0(VAR_6);
    }
}
