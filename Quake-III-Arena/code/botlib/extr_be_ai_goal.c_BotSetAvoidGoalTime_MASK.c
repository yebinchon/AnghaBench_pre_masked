
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int number; size_t iteminfo; struct TYPE_6__* next; } ;
typedef TYPE_2__ levelitem_t ;
typedef int bot_goalstate_t ;
struct TYPE_7__ {TYPE_1__* iteminfo; } ;
struct TYPE_5__ {float respawntime; } ;


 float VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (int *,int,float) ;
 int * FUNC_1 (int) ;
 TYPE_4__* VAR_2 ;
 TYPE_2__* VAR_3 ;

void FUNC_2(int VAR_4, int VAR_5, float VAR_6)
{
 bot_goalstate_t *VAR_7;
 levelitem_t *VAR_8;

 VAR_7 = FUNC_1(VAR_4);
 if (!VAR_7)
  return;
 if (VAR_6 < 0)
 {
  if (!VAR_2)
   return;

  for (VAR_8 = VAR_3; VAR_8; VAR_8 = VAR_8->next)
  {
   if (VAR_8->number == VAR_5)
   {
    VAR_6 = VAR_2->iteminfo[VAR_8->iteminfo].respawntime;
    if (!VAR_6)
     VAR_6 = VAR_0;
    if (VAR_6 < VAR_1)
     VAR_6 = VAR_1;
    FUNC_0(VAR_7, VAR_5, VAR_6);
    return;
   }
  }
  return;
 }
 else
 {
  FUNC_0(VAR_7, VAR_5, VAR_6);
 }
}
