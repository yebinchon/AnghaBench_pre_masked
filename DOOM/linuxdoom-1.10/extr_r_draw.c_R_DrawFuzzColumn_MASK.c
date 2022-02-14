
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fixed_t ;
typedef int byte ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int,int,size_t) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t* VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int** VAR_14 ;

void FUNC_1 (void)
{
    int VAR_15;
    byte* VAR_16;
    fixed_t VAR_17;
    fixed_t VAR_18;


    if (!VAR_10)
 VAR_10 = 1;


    if (VAR_9 == VAR_13-1)
 VAR_9 = VAR_13 - 2;

    VAR_15 = VAR_9 - VAR_10;


    if (VAR_15 < 0)
 return;
    VAR_16 = VAR_14[VAR_10] + VAR_5[VAR_8];


    VAR_18 = VAR_6;
    VAR_17 = VAR_7 + (VAR_10-VAR_3)*VAR_18;




    do
    {




 *VAR_16 = VAR_4[6*256+VAR_16[VAR_11[VAR_12]]];


 if (++VAR_12 == VAR_0)
     VAR_12 = 0;

 VAR_16 += VAR_2;

 VAR_17 += VAR_18;
    } while (VAR_15--);
}
