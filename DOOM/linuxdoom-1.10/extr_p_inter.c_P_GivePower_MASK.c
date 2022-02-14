
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* powers; TYPE_1__* mo; } ;
typedef TYPE_2__ player_t ;
typedef int boolean ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

boolean
FUNC_1
( player_t* VAR_10,
  int VAR_11 )
{
    if (VAR_11 == VAR_7)
    {
 VAR_10->powers[VAR_11] = VAR_2;
 return 1;
    }

    if (VAR_11 == VAR_6)
    {
 VAR_10->powers[VAR_11] = VAR_1;
 VAR_10->mo->flags |= VAR_4;
 return 1;
    }

    if (VAR_11 == VAR_5)
    {
 VAR_10->powers[VAR_11] = VAR_0;
 return 1;
    }

    if (VAR_11 == VAR_8)
    {
 VAR_10->powers[VAR_11] = VAR_3;
 return 1;
    }

    if (VAR_11 == VAR_9)
    {
 FUNC_0 (VAR_10, 100);
 VAR_10->powers[VAR_11] = 1;
 return 1;
    }

    if (VAR_10->powers[VAR_11])
 return 0;

    VAR_10->powers[VAR_11] = 1;
    return 1;
}
