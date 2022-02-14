
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int snum; scalar_t__ endtime; scalar_t__ startfade; struct TYPE_4__* next; } ;
typedef TYPE_1__ cparticle_t ;
typedef int centity_t ;
struct TYPE_5__ {scalar_t__ time; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_2__ VAR_3 ;

void FUNC_1 (centity_t *VAR_4)
{
 cparticle_t *VAR_5, *VAR_6;
 int VAR_7;

 VAR_7 = 1.0f;

 if (!VAR_7)
  FUNC_0 ("CG_OilSlickRevove NULL id\n");

 for (VAR_5=VAR_2 ; VAR_5 ; VAR_5=VAR_6)
 {
  VAR_6 = VAR_5->next;

  if (VAR_5->type == VAR_0)
  {
   if (VAR_5->snum == VAR_7)
   {
    VAR_5->endtime = VAR_3.time + 100;
    VAR_5->startfade = VAR_5->endtime;
    VAR_5->type = VAR_1;

   }
  }

 }
}
