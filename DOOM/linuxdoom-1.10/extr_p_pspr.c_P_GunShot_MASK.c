
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int angle; } ;
typedef TYPE_1__ mobj_t ;
typedef int boolean ;
typedef int angle_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int ,int ,int) ;
 int FUNC_1 () ;
 int VAR_1 ;

void
FUNC_2
( mobj_t* VAR_2,
  boolean VAR_3 )
{
    angle_t VAR_4;
    int VAR_5;

    VAR_5 = 5*(FUNC_1 ()%3+1);
    VAR_4 = VAR_2->angle;

    if (!VAR_3)
 VAR_4 += (FUNC_1()-FUNC_1())<<18;

    FUNC_0 (VAR_2, VAR_4, VAR_0, VAR_1, VAR_5);
}
