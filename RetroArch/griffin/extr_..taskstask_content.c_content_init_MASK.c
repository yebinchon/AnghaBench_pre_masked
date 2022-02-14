
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct retro_system_info {int block_extract; int need_fullpath; int valid_extensions; } ;
struct TYPE_16__ {int directory_cache; int directory_system; } ;
struct TYPE_15__ {int set_supports_no_game_enable; int check_firmware_before_loading; } ;
struct TYPE_19__ {TYPE_3__ paths; TYPE_2__ bools; } ;
typedef TYPE_6__ settings_t ;
struct TYPE_18__ {scalar_t__ size; int * data; } ;
struct TYPE_20__ {TYPE_5__ subsystem; } ;
typedef TYPE_7__ rarch_system_info_t ;
struct TYPE_14__ {int ups; int bps; int ips; } ;
struct TYPE_21__ {TYPE_1__ name; } ;
typedef TYPE_8__ global_t ;
struct TYPE_17__ {scalar_t__ size; int * data; } ;
struct TYPE_22__ {char* directory_system; char* directory_cache; char* name_ips; char* name_bps; char* name_ups; char* valid_extensions; int block_extract; int need_fullpath; int set_supports_no_game_enable; TYPE_4__ subsystem; void* temporary_content; void* is_ups_pref; void* is_bps_pref; void* is_ips_pref; void* patch_is_blocked; int check_firmware_before_loading; } ;
typedef TYPE_9__ content_information_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_6 ;
 TYPE_6__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_9__*,struct string_list*,char**) ;
 int FUNC_5 (char*) ;
 TYPE_8__* FUNC_6 () ;
 void* FUNC_7 (int ,int *) ;
 struct retro_system_info* FUNC_8 () ;
 TYPE_7__* FUNC_9 () ;
 int FUNC_10 (char*,int,int,int,int *,int ,int ) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct string_list*) ;
 void* FUNC_14 () ;
 void* VAR_7 ;

bool FUNC_15(void)
{
   content_information_ctx_t VAR_8;

   bool VAR_9 = 1;
   char *VAR_10 = ((void*)0);
   struct string_list *VAR_11 = ((void*)0);
   global_t *VAR_12 = FUNC_6();
   settings_t *VAR_13 = FUNC_2();
   rarch_system_info_t *VAR_14 = FUNC_9();

   VAR_7 = FUNC_14();

   VAR_8.check_firmware_before_loading = VAR_13->bools.check_firmware_before_loading;
   VAR_8.patch_is_blocked = FUNC_7(VAR_4, ((void*)0));
   VAR_8.is_ips_pref = FUNC_7(VAR_3, ((void*)0));
   VAR_8.is_bps_pref = FUNC_7(VAR_2, ((void*)0));
   VAR_8.is_ups_pref = FUNC_7(VAR_5, ((void*)0));
   VAR_8.temporary_content = VAR_7;
   VAR_8.directory_system = ((void*)0);
   VAR_8.directory_cache = ((void*)0);
   VAR_8.name_ips = ((void*)0);
   VAR_8.name_bps = ((void*)0);
   VAR_8.name_ups = ((void*)0);
   VAR_8.valid_extensions = ((void*)0);
   VAR_8.block_extract = 0;
   VAR_8.need_fullpath = 0;
   VAR_8.set_supports_no_game_enable = 0;

   VAR_8.subsystem.data = ((void*)0);
   VAR_8.subsystem.size = 0;

   if (VAR_12)
   {
      if (!FUNC_12(VAR_12->name.ips))
         VAR_8.name_ips = FUNC_11(VAR_12->name.ips);
      if (!FUNC_12(VAR_12->name.bps))
         VAR_8.name_bps = FUNC_11(VAR_12->name.bps);
      if (!FUNC_12(VAR_12->name.ups))
         VAR_8.name_ups = FUNC_11(VAR_12->name.ups);
   }

   if (VAR_14)
   {
      struct retro_system_info *VAR_15 = FUNC_8();

      VAR_8.set_supports_no_game_enable = VAR_13->bools.set_supports_no_game_enable;

      if (!FUNC_12(VAR_13->paths.directory_system))
         VAR_8.directory_system = FUNC_11(VAR_13->paths.directory_system);
      if (!FUNC_12(VAR_13->paths.directory_cache))
         VAR_8.directory_cache = FUNC_11(VAR_13->paths.directory_cache);
      if (!FUNC_12(VAR_15->valid_extensions))
         VAR_8.valid_extensions = FUNC_11(VAR_15->valid_extensions);

      VAR_8.block_extract = VAR_15->block_extract;
      VAR_8.need_fullpath = VAR_15->need_fullpath;

      VAR_8.subsystem.data = VAR_14->subsystem.data;
      VAR_8.subsystem.size = VAR_14->subsystem.size;
   }

   VAR_6 = 1;
   VAR_11 = FUNC_14();

   if ( !VAR_7
         || !FUNC_4(&VAR_8, VAR_11, &VAR_10))
   {
      FUNC_3();

      VAR_9 = 0;
   }

   FUNC_13(VAR_11);

   if (VAR_8.name_ips)
      FUNC_5(VAR_8.name_ips);
   if (VAR_8.name_bps)
      FUNC_5(VAR_8.name_bps);
   if (VAR_8.name_ups)
      FUNC_5(VAR_8.name_ups);
   if (VAR_8.directory_system)
      FUNC_5(VAR_8.directory_system);
   if (VAR_8.directory_cache)
      FUNC_5(VAR_8.directory_cache);
   if (VAR_8.valid_extensions)
      FUNC_5(VAR_8.valid_extensions);

   if (VAR_10)
   {
      if (VAR_9)
      {
         FUNC_1("%s\n", VAR_10);
      }
      else
      {
         FUNC_0("%s\n", VAR_10);
      }
      FUNC_10(VAR_10, 2, VAR_9 ? 1 : 180, 1, ((void*)0), VAR_1, VAR_0);
      FUNC_5(VAR_10);
   }

   return VAR_9;
}
