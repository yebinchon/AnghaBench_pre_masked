
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ fixed_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__* VAR_3 ;
 int* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

fixed_t
FUNC_2
( fixed_t VAR_7,
  fixed_t VAR_8 )
{
    int VAR_9;
    fixed_t VAR_10;
    fixed_t VAR_11;
    fixed_t VAR_12;
    fixed_t VAR_13;

    VAR_10 = FUNC_1(VAR_7 - VAR_5);
    VAR_11 = FUNC_1(VAR_8 - VAR_6);

    if (VAR_11>VAR_10)
    {
 VAR_12 = VAR_10;
 VAR_10 = VAR_11;
 VAR_11 = VAR_12;
    }

    VAR_9 = (VAR_4[ FUNC_0(VAR_11,VAR_10)>>VAR_2 ]+VAR_0) >> VAR_1;


    VAR_13 = FUNC_0 (VAR_10, VAR_3[VAR_9] );

    return VAR_13;
}
