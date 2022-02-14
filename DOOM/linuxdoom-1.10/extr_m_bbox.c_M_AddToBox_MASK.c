
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ fixed_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

void
FUNC_0
( fixed_t* VAR_4,
  fixed_t VAR_5,
  fixed_t VAR_6 )
{
    if (VAR_5<VAR_4[VAR_1])
 VAR_4[VAR_1] = VAR_5;
    else if (VAR_5>VAR_4[VAR_2])
 VAR_4[VAR_2] = VAR_5;
    if (VAR_6<VAR_4[VAR_0])
 VAR_4[VAR_0] = VAR_6;
    else if (VAR_6>VAR_4[VAR_3])
 VAR_4[VAR_3] = VAR_6;
}
