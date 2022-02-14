
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int adc_attenuation_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;

void FUNC_1(adc_attenuation_t VAR_3)
{
    VAR_2 = VAR_3 & 3;
    uint32_t VAR_4 = 0;
    int VAR_5 = 10;
    while(VAR_5--){
        VAR_4 |= VAR_2 << (VAR_5 * 2);
    }
    FUNC_0(VAR_0, VAR_4 & 0xFFFF);
    FUNC_0(VAR_1, VAR_4);
}
