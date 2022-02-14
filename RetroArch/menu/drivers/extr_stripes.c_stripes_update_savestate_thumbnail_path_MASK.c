
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {char* savestate_thumbnail_file_path; } ;
typedef TYPE_4__ stripes_handle_t ;
struct TYPE_13__ {int state_slot; } ;
struct TYPE_12__ {scalar_t__ savestate_thumbnail_enable; } ;
struct TYPE_16__ {TYPE_2__ ints; TYPE_1__ bools; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_17__ {char* label; } ;
typedef TYPE_6__ menu_entry_t ;
struct TYPE_14__ {char* savestate; } ;
struct TYPE_18__ {TYPE_3__ name; } ;
typedef TYPE_7__ global_t ;


 TYPE_5__* FUNC_0 () ;
 int FUNC_1 (char*,char*,char*,char,size_t) ;
 int FUNC_2 (char*) ;
 TYPE_7__* FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_6__*,int ,unsigned int,int *,int) ;
 int FUNC_6 (TYPE_6__*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,size_t,char*,char*,int) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*,size_t) ;
 int FUNC_13 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_14(void *VAR_0, unsigned VAR_1)
{
   menu_entry_t VAR_2;
   settings_t *VAR_3 = FUNC_0();
   stripes_handle_t *VAR_4 = (stripes_handle_t*)VAR_0;

   if (!VAR_4)
      return;

   FUNC_6(&VAR_2);
   FUNC_5(&VAR_2, 0, VAR_1, ((void*)0), 1);

   if (!FUNC_10(VAR_4->savestate_thumbnail_file_path))
      FUNC_2(VAR_4->savestate_thumbnail_file_path);
   VAR_4->savestate_thumbnail_file_path = ((void*)0);

   if (!FUNC_10(VAR_2.label))
   {
      if ( (VAR_3->bools.savestate_thumbnail_enable)
            && ((FUNC_11(VAR_2.label, "state_slot"))
               || (FUNC_11(VAR_2.label, "loadstate"))
               || (FUNC_11(VAR_2.label, "savestate"))))
      {
         size_t VAR_5 = 8024 * sizeof(char);
         char *VAR_6 = (char*)FUNC_4(8204 * sizeof(char));
         global_t *VAR_7 = FUNC_3();

         VAR_6[0] = '\0';

         if (VAR_7)
         {
            int VAR_8 = VAR_3->ints.state_slot;

            if (VAR_8 > 0)
               FUNC_8(VAR_6, VAR_5, "%s%d",
                     VAR_7->name.savestate, VAR_8);
            else if (VAR_8 < 0)
               FUNC_1(VAR_6,
                     VAR_7->name.savestate, "auto", '.', VAR_5);
            else
               FUNC_13(VAR_6, VAR_7->name.savestate, VAR_5);
         }

         FUNC_12(VAR_6, ".png", VAR_5);

         if (FUNC_7(VAR_6))
         {
            if (!FUNC_10(VAR_4->savestate_thumbnail_file_path))
               FUNC_2(VAR_4->savestate_thumbnail_file_path);
            VAR_4->savestate_thumbnail_file_path = FUNC_9(VAR_6);
         }

         FUNC_2(VAR_6);
      }
   }
}
