
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* mo; } ;
typedef TYPE_1__ player_t ;
typedef scalar_t__ fixed_t ;
struct TYPE_5__ {int angle; scalar_t__ y; scalar_t__ x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 TYPE_2__* VAR_7 ;

void FUNC_1 (player_t* VAR_8)
{
    int VAR_9;
    fixed_t VAR_10;
    fixed_t VAR_11;
    fixed_t VAR_12;
    fixed_t VAR_13;

    VAR_7 = VAR_8->mo;

    VAR_9 = VAR_8->mo->angle >> VAR_0;

    VAR_10 = VAR_8->mo->x;
    VAR_11 = VAR_8->mo->y;
    VAR_12 = VAR_10 + (VAR_4>>VAR_1)*VAR_5[VAR_9];
    VAR_13 = VAR_11 + (VAR_4>>VAR_1)*VAR_6[VAR_9];

    FUNC_0 ( VAR_10, VAR_11, VAR_12, VAR_13, VAR_3, VAR_2 );
}
