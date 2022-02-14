
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; TYPE_1__* info; } ;
typedef TYPE_2__ mobj_t ;
struct TYPE_5__ {int deathsound; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int) ;






void FUNC_2 (mobj_t* VAR_2)
{
    int VAR_3;

    switch (VAR_2->info->deathsound)
    {
      case 0:
 return;

      case 130:
      case 129:
      case 128:
 VAR_3 = 130 + FUNC_0 ()%3;
 break;

      case 132:
      case 131:
 VAR_3 = 132 + FUNC_0 ()%2;
 break;

      default:
 VAR_3 = VAR_2->info->deathsound;
 break;
    }


    if (VAR_2->type==VAR_1
 || VAR_2->type == VAR_0)
    {

 FUNC_1 (((void*)0), VAR_3);
    }
    else
 FUNC_1 (VAR_2, VAR_3);
}
