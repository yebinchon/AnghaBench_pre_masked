
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ssize_t ;
struct TYPE_13__ {char* path; int size; int written; scalar_t__ state_slot; scalar_t__ undo_save; scalar_t__ data; scalar_t__ file; } ;
typedef TYPE_1__ save_task_state_t ;
struct TYPE_14__ {scalar_t__ state; } ;
typedef TYPE_2__ retro_task_t ;
typedef int new_msg ;
typedef int err ;
struct TYPE_15__ {int path; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*,int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int *,int) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*,int,char*,scalar_t__,...) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_14 (TYPE_2__*,char*) ;
 int FUNC_15 (TYPE_2__*,float) ;
 int FUNC_16 (TYPE_2__*,char*) ;
 TYPE_3__ VAR_8 ;

__attribute__((used)) static void FUNC_17(retro_task_t *VAR_9)
{
   int VAR_10;
   ssize_t VAR_11;
   save_task_state_t *VAR_12 = (save_task_state_t*)VAR_9->state;

   if (!VAR_12->file)
   {
      VAR_12->file = FUNC_4(
            VAR_12->path, VAR_6,
            VAR_5);

      if (!VAR_12->file)
         return;
   }

   if (!VAR_12->data)
      VAR_12->data = FUNC_3(VAR_12->path, VAR_12->size);

   VAR_11 = FUNC_0(VAR_12->size - VAR_12->written, VAR_7);

   if (VAR_12->data)
      VAR_10 = (int)FUNC_5(VAR_12->file,
         (uint8_t*)VAR_12->data + VAR_12->written, VAR_11);
   else
      VAR_10 = 0;

   VAR_12->written += VAR_10;

   FUNC_15(VAR_9, (VAR_12->written / (float)VAR_12->size) * 100);

   if (FUNC_11(VAR_9) || VAR_10 != VAR_11)
   {
      char VAR_13[8192];

      VAR_13[0] = '\0';

      if (VAR_12->undo_save)
      {
         FUNC_1("%s \"%s\".\n",
            FUNC_6(VAR_1),
            VAR_8.path);

         FUNC_7(VAR_13, sizeof(VAR_13), "%s \"%s\".",
                  FUNC_6(VAR_1),
                  "RAM");
      }
      else
         FUNC_7(VAR_13, sizeof(VAR_13),
               "%s %s",
               FUNC_6(VAR_0), VAR_12->path);

      FUNC_14(VAR_9, FUNC_8(VAR_13));
      FUNC_13(VAR_9, VAR_12);
      return;
   }

   if (VAR_12->written == VAR_12->size)
   {
      char *VAR_14 = ((void*)0);

      FUNC_10(VAR_9);

      if (VAR_12->undo_save)
         VAR_14 = FUNC_8(FUNC_6(VAR_2));
      else if (VAR_12->state_slot < 0)
         VAR_14 = FUNC_8(FUNC_6(VAR_4));
      else
      {
         char VAR_15[128];
         VAR_15[0] = '\0';

         FUNC_7(VAR_15, sizeof(VAR_15), FUNC_6(VAR_3),
               VAR_12->state_slot);
         VAR_14 = FUNC_8(VAR_15);
      }

      if (!FUNC_12(VAR_9) && VAR_14)
      {
         FUNC_16(VAR_9, VAR_14);
         VAR_14 = ((void*)0);
      }

      FUNC_13(VAR_9, VAR_12);

      if (!FUNC_9(VAR_14))
         FUNC_2(VAR_14);

      return;
   }
}
