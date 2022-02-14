
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int x; } ;
struct TYPE_3__ {scalar_t__ x; scalar_t__ y; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

void FUNC_0(void)
{
    if (VAR_4.x || VAR_4.y)
    {
 VAR_2 = 0;
 VAR_1.x = VAR_0;
    }

    VAR_6 += VAR_4.x;
    VAR_8 += VAR_4.y;

    if (VAR_6 + VAR_5/2 > VAR_10)
 VAR_6 = VAR_10 - VAR_5/2;
    else if (VAR_6 + VAR_5/2 < VAR_12)
 VAR_6 = VAR_12 - VAR_5/2;

    if (VAR_8 + VAR_3/2 > VAR_11)
 VAR_8 = VAR_11 - VAR_3/2;
    else if (VAR_8 + VAR_3/2 < VAR_13)
 VAR_8 = VAR_13 - VAR_3/2;

    VAR_7 = VAR_6 + VAR_5;
    VAR_9 = VAR_8 + VAR_3;
}
