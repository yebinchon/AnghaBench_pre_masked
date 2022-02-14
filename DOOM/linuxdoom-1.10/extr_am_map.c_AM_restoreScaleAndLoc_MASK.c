
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mo; } ;
struct TYPE_3__ {scalar_t__ y; scalar_t__ x; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_2__* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;

void FUNC_1(void)
{

    VAR_5 = VAR_11;
    VAR_4 = VAR_10;
    if (!VAR_3)
    {
 VAR_6 = VAR_12;
 VAR_8 = VAR_13;
    } else {
 VAR_6 = VAR_14->mo->x - VAR_5/2;
 VAR_8 = VAR_14->mo->y - VAR_4/2;
    }
    VAR_7 = VAR_6 + VAR_5;
    VAR_9 = VAR_8 + VAR_4;


    VAR_16 = FUNC_0(VAR_2<<VAR_0, VAR_5);
    VAR_15 = FUNC_0(VAR_1, VAR_16);
}
