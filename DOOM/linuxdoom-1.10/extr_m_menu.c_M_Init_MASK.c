
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int numitems; } ;
struct TYPE_10__ {TYPE_1__* prevMenu; } ;
struct TYPE_9__ {int x; int y; int routine; } ;
struct TYPE_8__ {int routine; } ;
struct TYPE_7__ {int y; int numitems; int lastOn; } ;


 TYPE_6__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int * VAR_4 ;
 TYPE_4__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 TYPE_2__* VAR_7 ;

 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int * VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;


 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;

 int VAR_20 ;
 scalar_t__ VAR_21 ;

void FUNC_0 (void)
{
    VAR_8 = &VAR_3;
    VAR_11 = 0;
    VAR_10 = VAR_8->lastOn;
    VAR_21 = 0;
    VAR_20 = 10;
    VAR_18 = VAR_19 - 3;
    VAR_14 = 0;
    VAR_13 = ((void*)0);
    VAR_12 = VAR_11;
    VAR_15 = -1;





    switch ( VAR_9 )
    {
      case 131:



 VAR_4[VAR_17] = VAR_4[VAR_16];
 VAR_3.numitems--;
 VAR_3.y += 8;
 VAR_5.prevMenu = &VAR_3;
 VAR_6 = VAR_1;
 VAR_6 = 330;
 VAR_6 = 165;
 VAR_7[0].routine = VAR_2;
 break;
      case 128:


      case 130:

 VAR_0.numitems--;
 break;
      case 129:

      default:
 break;
    }

}
