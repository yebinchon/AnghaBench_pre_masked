
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ cheevos_hardcore_mode_enable; } ;
struct TYPE_10__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_11__ {int active; int last; int trigger; } ;
typedef TYPE_4__ rcheevos_cheevo_t ;
struct TYPE_9__ {int core_count; int unofficial_count; } ;
struct TYPE_12__ {TYPE_2__ patchdata; TYPE_4__* unofficial; TYPE_4__* core; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int *) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(bool VAR_5)
{
   settings_t *VAR_6 = FUNC_0();
   int VAR_7 = VAR_1;
   rcheevos_cheevo_t* VAR_8;
   int VAR_9, VAR_10;

   if (VAR_6 && VAR_6->bools.cheevos_hardcore_mode_enable && !VAR_2)
      VAR_7 = VAR_0;

   if (VAR_5)
   {
      VAR_8 = VAR_3.core;
      VAR_10 = VAR_3.patchdata.core_count;
   }
   else
   {
      VAR_8 = VAR_3.unofficial;
      VAR_10 = VAR_3.patchdata.unofficial_count;
   }

   for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++, VAR_8++)
   {

      if ((VAR_8->active & VAR_7) == 0)
         continue;

      if (VAR_8->active & VAR_7)
      {
         int VAR_11 = FUNC_2(VAR_8->trigger, VAR_4, ((void*)0), ((void*)0));

         if (VAR_8->last)
            FUNC_1(VAR_8->trigger);
         else if (VAR_11)
            FUNC_3(VAR_8, VAR_7);

         VAR_8->last = VAR_11;
      }
   }
}
