
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tmp ;
struct archive_extract_userdata {int dummy; } ;
struct TYPE_7__ {int * title; void* user_data; int callback; int handler; TYPE_3__* state; void* frontend_userdata; } ;
typedef TYPE_2__ retro_task_t ;
typedef int retro_task_callback_t ;
struct TYPE_6__ {int type; } ;
struct TYPE_8__ {int * target_file; int * subdir; struct archive_extract_userdata* userdata; TYPE_1__ archive; int * valid_ext; int * target_dir; int * source_file; } ;
typedef TYPE_3__ decompress_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_3__*) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,int,char*,char*,char*) ;
 int * FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (char const*,char*) ;
 scalar_t__ FUNC_12 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (TYPE_2__*) ;

bool FUNC_14(
      const char *VAR_6,
      const char *VAR_7,
      const char *VAR_8,
      const char *VAR_9,
      const char *VAR_10,
      retro_task_callback_t VAR_11,
      void *VAR_12,
      void *VAR_13)
{
   char VAR_14[VAR_2];
   const char *VAR_15 = ((void*)0);
   decompress_state_t *VAR_16 = ((void*)0);
   retro_task_t *VAR_17 = ((void*)0);

   VAR_14[0] = '\0';

   if (FUNC_10(VAR_7) || FUNC_10(VAR_6))
   {
      FUNC_1(
            "[decompress] Empty or null source file or"
            " target directory arguments.\n");
      return 0;
   }

   VAR_15 = FUNC_6(VAR_6);


   if (
         !FUNC_7(VAR_6) ||
         (
             !FUNC_11(VAR_15, "zip")
          && !FUNC_11(VAR_15, "apk")



         )
      )
   {
      FUNC_1(
            "[decompress] File '%s' does not exist"
            " or is not a compressed file.\n",
            VAR_6);
      return 0;
   }

   if (!VAR_10 || !VAR_10[0])
      VAR_10 = ((void*)0);

   if (FUNC_12(VAR_6))
   {
      FUNC_0(
            "[decompress] File '%s' already being decompressed.\n",
            VAR_6);
      return 0;
   }

   FUNC_0("[decompress] File '%s.\n", VAR_6);

   VAR_16 = (decompress_state_t*)FUNC_2(1, sizeof(*VAR_16));

   if (!VAR_16)
      return 0;

   VAR_17 = (retro_task_t*)FUNC_2(1, sizeof(*VAR_17));

   if (!VAR_17)
   {
      FUNC_3(VAR_16);
      return 0;
   }

   VAR_16->source_file = FUNC_9(VAR_6);
   VAR_16->target_dir = FUNC_9(VAR_7);

   VAR_16->valid_ext = VAR_10 ? FUNC_9(VAR_10) : ((void*)0);
   VAR_16->archive.type = VAR_0;
   VAR_16->userdata = (struct archive_extract_userdata*)
      FUNC_2(1, sizeof(*VAR_16->userdata));

   VAR_17->frontend_userdata= VAR_13;

   VAR_17->state = VAR_16;
   VAR_17->handler = VAR_3;

   if (!FUNC_10(VAR_9))
   {
      VAR_16->subdir = FUNC_9(VAR_9);
      VAR_17->handler = VAR_4;
   }
   else if (!FUNC_10(VAR_8))
   {
      VAR_16->target_file = FUNC_9(VAR_8);
      VAR_17->handler = VAR_5;
   }

   VAR_17->callback = VAR_11;
   VAR_17->user_data = VAR_12;

   FUNC_8(VAR_14, sizeof(VAR_14), "%s '%s'",
         FUNC_4(VAR_1),
         FUNC_5(VAR_6));

   VAR_17->title = FUNC_9(VAR_14);

   FUNC_13(VAR_17);

   return 1;
}
