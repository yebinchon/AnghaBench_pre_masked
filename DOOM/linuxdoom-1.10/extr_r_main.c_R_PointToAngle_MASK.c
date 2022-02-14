
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fixed_t ;
typedef int angle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ,int ) ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

angle_t
FUNC_1
( fixed_t VAR_6,
  fixed_t VAR_7 )
{
    VAR_6 -= VAR_4;
    VAR_7 -= VAR_5;

    if ( (!VAR_6) && (!VAR_7) )
 return 0;

    if (VAR_6>= 0)
    {

 if (VAR_7>= 0)
 {


     if (VAR_6>VAR_7)
     {

  return VAR_3[ FUNC_0(VAR_7,VAR_6)];
     }
     else
     {

  return VAR_2-1-VAR_3[ FUNC_0(VAR_6,VAR_7)];
     }
 }
 else
 {

     VAR_7 = -VAR_7;

     if (VAR_6>VAR_7)
     {

  return -VAR_3[FUNC_0(VAR_7,VAR_6)];
     }
     else
     {

  return VAR_1+VAR_3[ FUNC_0(VAR_6,VAR_7)];
     }
 }
    }
    else
    {

 VAR_6 = -VAR_6;

 if (VAR_7>= 0)
 {

     if (VAR_6>VAR_7)
     {

  return VAR_0-1-VAR_3[ FUNC_0(VAR_7,VAR_6)];
     }
     else
     {

  return VAR_2+ VAR_3[ FUNC_0(VAR_6,VAR_7)];
     }
 }
 else
 {

     VAR_7 = -VAR_7;

     if (VAR_6>VAR_7)
     {

  return VAR_0+VAR_3[ FUNC_0(VAR_7,VAR_6)];
     }
     else
     {

  return VAR_1-1-VAR_3[ FUNC_0(VAR_6,VAR_7)];
     }
 }
    }
    return 0;
}
