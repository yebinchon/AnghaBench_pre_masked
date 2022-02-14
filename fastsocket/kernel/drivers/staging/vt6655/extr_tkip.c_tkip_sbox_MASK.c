
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;

unsigned int FUNC_0(unsigned int VAR_2)
{
    unsigned int VAR_3;
    unsigned int VAR_4;
    unsigned int VAR_5, VAR_6;

    VAR_3 = (VAR_2 % 256);
    VAR_4 = ((VAR_2 >> 8) % 256);

    VAR_5 = VAR_0[VAR_3] + (VAR_1[VAR_3] * 256);
    VAR_6 = VAR_1[VAR_4] + (VAR_0[VAR_4] * 256);

    return (VAR_5 ^ VAR_6);
}
