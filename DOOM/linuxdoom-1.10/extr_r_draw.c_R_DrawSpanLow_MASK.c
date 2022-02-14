
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fixed_t ;
typedef int byte ;


 int FUNC_0 (char*,int,int,size_t) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 void** VAR_3 ;
 size_t* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int ** VAR_12 ;

void FUNC_1 (void)
{
    fixed_t VAR_13;
    fixed_t VAR_14;
    byte* VAR_15;
    int VAR_16;
    int VAR_17;
    VAR_13 = VAR_7;
    VAR_14 = VAR_10;


    VAR_5 <<= 1;
    VAR_6 <<= 1;

    VAR_15 = VAR_12[VAR_9] + VAR_2[VAR_5];


    VAR_16 = VAR_6 - VAR_5;
    do
    {
 VAR_17 = ((VAR_14>>(16-6))&(63*64)) + ((VAR_13>>16)&63);


 *VAR_15++ = VAR_3[VAR_4[VAR_17]];
 *VAR_15++ = VAR_3[VAR_4[VAR_17]];

 VAR_13 += VAR_8;
 VAR_14 += VAR_11;

    } while (VAR_16--);
}
