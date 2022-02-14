
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int state_slot; } ;
struct TYPE_10__ {TYPE_1__ ints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_11__ {int load_to_backup_buffer; int autoload; int title; int callback; int handler; struct TYPE_11__* state; int type; int has_valid_framebuffer; int state_slot; int path; } ;
typedef TYPE_3__ save_task_state_t ;
typedef TYPE_3__ retro_task_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_2__* FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char const*,int) ;
 TYPE_3__* FUNC_6 () ;
 int VAR_3 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 () ;

bool FUNC_9(const char *VAR_4,
      bool VAR_5, bool VAR_6)
{
   retro_task_t *VAR_7 = FUNC_6();
   save_task_state_t *VAR_8 = (save_task_state_t*)FUNC_0(1, sizeof(*VAR_8));
   settings_t *VAR_9 = FUNC_1();

   if (!VAR_7 || !VAR_8)
      goto error;

   FUNC_5(VAR_8->path, VAR_4, sizeof(VAR_8->path));
   VAR_8->load_to_backup_buffer = VAR_5;
   VAR_8->autoload = VAR_6;
   VAR_8->state_slot = VAR_9->ints.state_slot;
   VAR_8->has_valid_framebuffer =
      FUNC_8();

   VAR_7->type = VAR_1;
   VAR_7->state = VAR_8;
   VAR_7->handler = VAR_3;
   VAR_7->callback = VAR_2;
   VAR_7->title = FUNC_4(FUNC_3(VAR_0));

   FUNC_7(VAR_7);

   return 1;

error:
   if (VAR_8)
      FUNC_2(VAR_8);
   if (VAR_7)
      FUNC_2(VAR_7);

   return 0;
}
