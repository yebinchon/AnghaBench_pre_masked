
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ adc_unit_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int ,int) ;

__attribute__((used)) static uint32_t FUNC_2(adc_unit_t VAR_8)
{

    uint32_t VAR_9;
    uint32_t VAR_10;

    if (VAR_8 == VAR_0) {
        VAR_9 = VAR_3;
        VAR_10 = FUNC_0(VAR_6, VAR_1);
    } else {
        VAR_9 = VAR_4;
        VAR_10 = FUNC_0(VAR_6, VAR_2);
    }
    VAR_9 += FUNC_1(VAR_10, VAR_5, 1) * VAR_7;
    return VAR_9;
}
