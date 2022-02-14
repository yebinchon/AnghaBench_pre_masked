
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ fixed_t ;
typedef size_t angle_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int * VAR_1 ;
 int * VAR_2 ;

void
FUNC_1
( fixed_t* VAR_3,
  fixed_t* VAR_4,
  angle_t VAR_5 )
{
    fixed_t VAR_6;

    VAR_6 =
 FUNC_0(*VAR_3,VAR_1[VAR_5>>VAR_0])
 - FUNC_0(*VAR_4,VAR_2[VAR_5>>VAR_0]);

    *VAR_4 =
 FUNC_0(*VAR_3,VAR_2[VAR_5>>VAR_0])
 + FUNC_0(*VAR_4,VAR_1[VAR_5>>VAR_0]);

    *VAR_3 = VAR_6;
}
