
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fixed_t ;
typedef size_t angle_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;

fixed_t FUNC_3 (angle_t VAR_10)
{
    fixed_t VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15;
    fixed_t VAR_16;
    int VAR_17;
    VAR_12 = VAR_0 + (VAR_10-VAR_9);
    VAR_13 = VAR_0 + (VAR_10-VAR_8);


    VAR_14 = VAR_5[VAR_12>>VAR_1];
    VAR_15 = VAR_5[VAR_13>>VAR_1];
    VAR_16 = FUNC_1(VAR_6,VAR_15)<<VAR_3;
    VAR_17 = FUNC_1(VAR_7,VAR_14);

    if (VAR_17 > VAR_16>>16)
    {
 VAR_11 = FUNC_0 (VAR_16, VAR_17);

 if (VAR_11 > 64*VAR_2)
     VAR_11 = 64*VAR_2;
 else if (VAR_11 < 256)
     VAR_11 = 256;
    }
    else
 VAR_11 = 64*VAR_2;

    return VAR_11;
}
