
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int depth; scalar_t__ alpha; } ;
typedef TYPE_1__ stripes_handle_t ;
struct TYPE_7__ {int duration; float target_value; int tag; int * cb; int easing_enum; scalar_t__* subject; } ;
typedef TYPE_2__ menu_animation_ctx_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(void *VAR_6, bool VAR_7)
{
   menu_animation_ctx_entry_t VAR_8;
   bool VAR_9 = 0;
   stripes_handle_t *VAR_10 = (stripes_handle_t*)VAR_6;

   if (!VAR_10)
      return;

   VAR_10->depth = (int)FUNC_3(VAR_10, VAR_2);

   if (!VAR_7)
   {
      VAR_10->alpha = 0;
      return;
   }

   VAR_8.duration = VAR_5 * 2;
   VAR_8.target_value = 1.0f;
   VAR_8.subject = &VAR_10->alpha;
   VAR_8.easing_enum = VAR_0;

   VAR_8.tag = -1;
   VAR_8.cb = ((void*)0);

   FUNC_0(&VAR_8);

   VAR_9 = !FUNC_2(VAR_1, ((void*)0));

   if (VAR_9)
      FUNC_1(VAR_3, ((void*)0));
   else
      FUNC_1(VAR_4, ((void*)0));

   FUNC_4(VAR_10);
}
