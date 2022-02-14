
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int y; int x; } ;
typedef TYPE_1__ mobj_t ;
typedef int fixed_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;

void
FUNC_1
( mobj_t* VAR_9,
  mobj_t* VAR_10,
  int VAR_11 )
{
    int VAR_12;
    int VAR_13;

    int VAR_14;
    int VAR_15;
    int VAR_16;
    int VAR_17;

    fixed_t VAR_18;

    VAR_18 = (VAR_11+VAR_2)<<VAR_0;
    VAR_17 = (VAR_9->y + VAR_18 - VAR_5)>>VAR_1;
    VAR_16 = (VAR_9->y - VAR_18 - VAR_5)>>VAR_1;
    VAR_15 = (VAR_9->x + VAR_18 - VAR_4)>>VAR_1;
    VAR_14 = (VAR_9->x - VAR_18 - VAR_4)>>VAR_1;
    VAR_8 = VAR_9;
    VAR_7 = VAR_10;
    VAR_6 = VAR_11;

    for (VAR_13=VAR_16 ; VAR_13<=VAR_17 ; VAR_13++)
 for (VAR_12=VAR_14 ; VAR_12<=VAR_15 ; VAR_12++)
     FUNC_0 (VAR_12, VAR_13, VAR_3 );
}
