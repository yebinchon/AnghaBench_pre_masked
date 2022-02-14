
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int frame_time_counter_reset_after_load_state; int frame_time_counter_reset_after_save_state; } ;
struct TYPE_10__ {int state_slot; } ;
struct TYPE_13__ {TYPE_3__ bools; TYPE_1__ ints; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_14__ {scalar_t__ size; } ;
typedef TYPE_5__ retro_ctx_size_info_t ;
typedef int msg ;
struct TYPE_11__ {char* savestate; } ;
struct TYPE_15__ {TYPE_2__ name; } ;
typedef TYPE_6__ global_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 TYPE_4__* VAR_4 ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (char*,char const*,char*,char,size_t) ;
 int FUNC_7 (char*) ;
 TYPE_6__ VAR_5 ;
 scalar_t__ FUNC_8 (size_t) ;
 char const* FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_12 (char*,size_t,char*,char const*,int) ;
 int FUNC_13 (char*,char const*,int) ;
 int VAR_8 ;

__attribute__((used)) static bool FUNC_14(unsigned VAR_9)
{
   retro_ctx_size_info_t VAR_10;
   char VAR_11[128];
   size_t VAR_12 = 16384 * sizeof(char);
   char *VAR_13 = (char*)FUNC_8(VAR_12);
   const global_t *VAR_14 = &VAR_5;
   bool VAR_15 = 0;
   bool VAR_16 = 1;

   VAR_13[0] = VAR_11[0] = '\0';

   if (VAR_14)
   {
      settings_t *VAR_17 = VAR_4;
      int VAR_18 = VAR_17->ints.state_slot;
      const char *VAR_19 = VAR_14->name.savestate;

      if (VAR_18 > 0)
         FUNC_12(VAR_13, VAR_12, "%s%d",
               VAR_19, VAR_18);
      else if (VAR_18 < 0)
         FUNC_6(VAR_13,
               VAR_19, "auto", '.', VAR_12);
      else
         FUNC_13(VAR_13, VAR_19, VAR_12);
   }

   FUNC_5(&VAR_10);

   if (VAR_10.size)
   {
      switch (VAR_9)
      {
         case 130:
            FUNC_4(VAR_13, 1, 0);
            {
               settings_t *VAR_20 = VAR_4;
               if (VAR_20->bools.frame_time_counter_reset_after_save_state)
                  VAR_8 = 0;
            }
            VAR_15 = 1;
            VAR_16 = 0;
            break;
         case 131:
            if (FUNC_3(VAR_13, 0, 0))
            {




               VAR_15 = 1;



               {
                  settings_t *VAR_21 = VAR_4;
                  if (VAR_21->bools.frame_time_counter_reset_after_load_state)
                     VAR_8 = 0;
               }
            }
            VAR_16 = 0;
            break;
         case 129:
            FUNC_1(VAR_11, sizeof(VAR_11));
            VAR_15 = 1;
            break;
         case 128:
            FUNC_2(VAR_11, sizeof(VAR_11));
            VAR_15 = 1;
            break;
      }
   }
   else
      FUNC_13(VAR_11, FUNC_9(
               VAR_2), sizeof(VAR_11));

   if (VAR_16)
      FUNC_11(VAR_11, 2, 180, 1, ((void*)0), VAR_1, VAR_0);
   FUNC_0("%s\n", VAR_11);

   FUNC_7(VAR_13);
   return VAR_15;
}
