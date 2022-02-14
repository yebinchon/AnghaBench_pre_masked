
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct tween {scalar_t__ running_since; scalar_t__ duration; scalar_t__ deleted; int userdata; int (* cb ) (int ) ;scalar_t__ target_value; scalar_t__* subject; scalar_t__ initial_value; scalar_t__ (* easing ) (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;} ;
struct TYPE_10__ {int menu_timedate_enable; } ;
struct TYPE_11__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_12__ {int p; } ;
struct TYPE_13__ {int in_update; int pending_deletes; TYPE_3__ list; TYPE_3__ pending; } ;


 TYPE_9__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (TYPE_3__,int ,unsigned int) ;
 int FUNC_2 (TYPE_3__) ;
 unsigned int FUNC_3 (TYPE_3__) ;
 int FUNC_4 (TYPE_3__,unsigned int) ;
 struct tween* FUNC_5 (TYPE_3__,unsigned int) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ,unsigned int,unsigned int) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ) ;

bool FUNC_9(unsigned VAR_3, unsigned VAR_4)
{
   unsigned VAR_5;
   settings_t *VAR_6 = FUNC_0();

   FUNC_6(VAR_6->bools.menu_timedate_enable, VAR_3, VAR_4);

   VAR_0.in_update = 1;
   VAR_0.pending_deletes = 0;

   for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_0.list); VAR_5++)
   {
      struct tween *VAR_7 = FUNC_5(VAR_0.list, VAR_5);

      if (!VAR_7 || VAR_7->deleted)
         continue;

      VAR_7->running_since += VAR_2;

      *VAR_7->subject = VAR_7->easing(
            VAR_7->running_since,
            VAR_7->initial_value,
            VAR_7->target_value - VAR_7->initial_value,
            VAR_7->duration);

      if (VAR_7->running_since >= VAR_7->duration)
      {
         *VAR_7->subject = VAR_7->target_value;

         if (VAR_7->cb)
            VAR_7->cb(VAR_7->userdata);

         FUNC_4(VAR_0.list, VAR_5);
         VAR_5--;
      }
   }

   if (VAR_0.pending_deletes)
   {
      for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_0.list); VAR_5++)
      {
         struct tween *VAR_8 = FUNC_5(VAR_0.list, VAR_5);
         if (!VAR_8)
            continue;
         if (VAR_8->deleted)
         {
            FUNC_4(VAR_0.list, VAR_5);
            VAR_5--;
         }
      }
      VAR_0.pending_deletes = 0;
   }

   if (FUNC_3(VAR_0.pending) > 0)
   {
      FUNC_1(VAR_0.list, VAR_0.pending.p, FUNC_3(VAR_0.pending));
      FUNC_2(VAR_0.pending);
   }

   VAR_0.in_update = 0;
   VAR_1 = FUNC_3(VAR_0.list) > 0;

   return VAR_1;
}
