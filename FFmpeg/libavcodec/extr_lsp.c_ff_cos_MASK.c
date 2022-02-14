
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint16_t ;
typedef size_t int16_t ;


 int FUNC_0 (int) ;
 size_t* VAR_0 ;

__attribute__((used)) static int16_t FUNC_1(uint16_t VAR_1)
{
    uint8_t VAR_2= VAR_1;
    uint8_t VAR_3 = VAR_1 >> 8;

    FUNC_0(VAR_1 <= 0x3fff);

    return VAR_0[VAR_3] + (VAR_2 * (VAR_0[VAR_3+1] - VAR_0[VAR_3]) >> 8);
}
