
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int) ;
 int* VAR_0 ;
 unsigned int* VAR_1 ;

int FUNC_1(uint16_t VAR_2)
{
    unsigned int VAR_3= VAR_0[VAR_2>>10] + 0x10000;

    FUNC_0(VAR_2 <= 0x7fff);

    VAR_3= (VAR_3<<3) + ((VAR_3*VAR_1[(VAR_2>>5)&31])>>17);
    return VAR_3 + ((VAR_3*(VAR_2&31)*89)>>22);
}
