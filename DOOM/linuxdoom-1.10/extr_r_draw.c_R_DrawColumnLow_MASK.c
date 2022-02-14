
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t fixed_t ;
typedef int byte ;


 size_t VAR_0 ;
 int FUNC_0 (char*,size_t,scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 int* VAR_4 ;
 int * VAR_5 ;
 size_t VAR_6 ;
 size_t* VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 int ** VAR_12 ;

void FUNC_1 (void)
{
    int VAR_13;
    byte* VAR_14;
    byte* VAR_15;
    fixed_t VAR_16;
    fixed_t VAR_17;

    VAR_13 = VAR_10 - VAR_11;


    if (VAR_13 < 0)
 return;
    VAR_9 <<= 1;

    VAR_14 = VAR_12[VAR_11] + VAR_4[VAR_9];
    VAR_15 = VAR_12[VAR_11] + VAR_4[VAR_9+1];

    VAR_17 = VAR_6;
    VAR_16 = VAR_8 + (VAR_11-VAR_3)*VAR_17;

    do
    {

 *VAR_15 = *VAR_14 = VAR_5[VAR_7[(VAR_16>>VAR_0)&127]];
 VAR_14 += VAR_2;
 VAR_15 += VAR_2;
 VAR_16 += VAR_17;

    } while (VAR_13--);
}
