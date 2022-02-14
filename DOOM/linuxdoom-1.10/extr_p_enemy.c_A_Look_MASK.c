
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int flags; scalar_t__ type; TYPE_3__* info; struct TYPE_14__* target; TYPE_2__* subsector; scalar_t__ threshold; } ;
typedef TYPE_4__ mobj_t ;
struct TYPE_13__ {int seesound; int seestate; } ;
struct TYPE_12__ {TYPE_1__* sector; } ;
struct TYPE_11__ {TYPE_4__* soundtarget; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int) ;






void FUNC_5 (mobj_t* VAR_4)
{
    mobj_t* VAR_5;

    VAR_4->threshold = 0;
    VAR_5 = VAR_4->subsector->sector->soundtarget;

    if (VAR_5
 && (VAR_5->flags & VAR_1) )
    {
 VAR_4->target = VAR_5;

 if ( VAR_4->flags & VAR_0 )
 {
     if (FUNC_0 (VAR_4, VAR_4->target))
  goto seeyou;
 }
 else
     goto seeyou;
    }


    if (!FUNC_1 (VAR_4, 0) )
 return;


  seeyou:
    if (VAR_4->info->seesound)
    {
 int VAR_6;

 switch (VAR_4->info->seesound)
 {
   case 130:
   case 129:
   case 128:
     VAR_6 = 130 +FUNC_2()%3;
     break;

   case 132:
   case 131:
     VAR_6 = 132 +FUNC_2()%2;
     break;

   default:
     VAR_6 = VAR_4->info->seesound;
     break;
 }

 if (VAR_4->type==VAR_3
     || VAR_4->type == VAR_2)
 {

     FUNC_4 (((void*)0), VAR_6);
 }
 else
     FUNC_4 (VAR_4, VAR_6);
    }

    FUNC_3 (VAR_4, VAR_4->info->seestate);
}
