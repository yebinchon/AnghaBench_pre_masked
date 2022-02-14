
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct retro_system_info {int block_extract; int need_fullpath; int valid_extensions; } ;
struct TYPE_25__ {int directory_system; int directory_cache; } ;
struct TYPE_21__ {int set_supports_no_game_enable; int check_firmware_before_loading; } ;
struct TYPE_26__ {TYPE_5__ paths; TYPE_1__ bools; } ;
typedef TYPE_6__ settings_t ;
struct TYPE_23__ {scalar_t__ size; int * data; } ;
struct TYPE_27__ {TYPE_3__ subsystem; } ;
typedef TYPE_7__ rarch_system_info_t ;
struct TYPE_24__ {int ups; int bps; int ips; } ;
struct TYPE_28__ {TYPE_4__ name; } ;
typedef TYPE_8__ global_t ;
struct TYPE_29__ {int status; } ;
typedef TYPE_9__ discord_userdata_t ;
struct TYPE_22__ {scalar_t__ size; int * data; } ;
struct TYPE_19__ {char* directory_system; char* directory_cache; char* name_ips; char* name_bps; char* name_ups; char* valid_extensions; int block_extract; int need_fullpath; int set_supports_no_game_enable; TYPE_2__ subsystem; void* bios_is_missing; void* patch_is_blocked; void* is_ups_pref; void* is_bps_pref; void* is_ips_pref; int check_firmware_before_loading; } ;
typedef TYPE_10__ content_information_ctx_t ;
struct TYPE_20__ {scalar_t__ environ_get; } ;
typedef TYPE_11__ content_ctx_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,TYPE_9__*) ;
 TYPE_6__* FUNC_2 () ;
 int FUNC_3 (TYPE_11__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (char*) ;
 TYPE_8__* FUNC_6 () ;
 scalar_t__ VAR_11 ;
 void* FUNC_7 (int ,int *) ;
 struct retro_system_info* FUNC_8 () ;
 TYPE_7__* FUNC_9 () ;
 int FUNC_10 (char*,int,int,int,int *,int ,int ) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static bool FUNC_14(content_ctx_info_t *VAR_12,
      bool VAR_13, bool VAR_14)
{
   content_information_ctx_t VAR_15;

   bool VAR_16 = 0;
   char *VAR_17 = ((void*)0);
   global_t *VAR_18 = FUNC_6();
   settings_t *VAR_19 = FUNC_2();
   rarch_system_info_t *VAR_20 = FUNC_9();

   VAR_15.check_firmware_before_loading = VAR_19->bools.check_firmware_before_loading;
   VAR_15.is_ips_pref = FUNC_7(VAR_6, ((void*)0));
   VAR_15.is_bps_pref = FUNC_7(VAR_5, ((void*)0));
   VAR_15.is_ups_pref = FUNC_7(VAR_9, ((void*)0));
   VAR_15.patch_is_blocked = FUNC_7(VAR_8, ((void*)0));
   VAR_15.bios_is_missing = FUNC_7(VAR_7, ((void*)0));
   VAR_15.directory_system = ((void*)0);
   VAR_15.directory_cache = ((void*)0);
   VAR_15.name_ips = ((void*)0);
   VAR_15.name_bps = ((void*)0);
   VAR_15.name_ups = ((void*)0);
   VAR_15.valid_extensions = ((void*)0);
   VAR_15.block_extract = 0;
   VAR_15.need_fullpath = 0;
   VAR_15.set_supports_no_game_enable = 0;

   VAR_15.subsystem.data = ((void*)0);
   VAR_15.subsystem.size = 0;

   if (VAR_20)
   {
      struct retro_system_info *VAR_21 = FUNC_8();

      VAR_15.set_supports_no_game_enable = VAR_19->bools.set_supports_no_game_enable;

      if (!FUNC_12(VAR_19->paths.directory_system))
         VAR_15.directory_system = FUNC_11(VAR_19->paths.directory_system);
      if (!FUNC_12(VAR_19->paths.directory_cache))
         VAR_15.directory_cache = FUNC_11(VAR_19->paths.directory_cache);
      if (!FUNC_12(VAR_21->valid_extensions))
         VAR_15.valid_extensions = FUNC_11(VAR_21->valid_extensions);

      VAR_15.block_extract = VAR_21->block_extract;
      VAR_15.need_fullpath = VAR_21->need_fullpath;

      VAR_15.subsystem.data = VAR_20->subsystem.data;
      VAR_15.subsystem.size = VAR_20->subsystem.size;
   }

   if (VAR_18)
   {
      if (!FUNC_12(VAR_18->name.ips))
         VAR_15.name_ips = FUNC_11(VAR_18->name.ips);
      if (!FUNC_12(VAR_18->name.bps))
         VAR_15.name_bps = FUNC_11(VAR_18->name.bps);
      if (!FUNC_12(VAR_18->name.ups))
         VAR_15.name_ups = FUNC_11(VAR_18->name.ups);
   }

   if (!FUNC_12(VAR_19->paths.directory_system))
      VAR_15.directory_system = FUNC_11(VAR_19->paths.directory_system);

   if (!VAR_12->environ_get)
      VAR_12->environ_get = VAR_11;

   if (FUNC_4(&VAR_15))
      goto end;
   VAR_16 = FUNC_3(VAR_12);

   if (VAR_16)
      FUNC_13(1, VAR_14);

end:
   if (VAR_15.name_ips)
      FUNC_5(VAR_15.name_ips);
   if (VAR_15.name_bps)
      FUNC_5(VAR_15.name_bps);
   if (VAR_15.name_ups)
      FUNC_5(VAR_15.name_ups);
   if (VAR_15.directory_system)
      FUNC_5(VAR_15.directory_system);
   if (VAR_15.directory_cache)
      FUNC_5(VAR_15.directory_cache);
   if (VAR_15.valid_extensions)
      FUNC_5(VAR_15.valid_extensions);

   if (!VAR_16)
   {
      if (VAR_17)
      {
         FUNC_10(VAR_17, 2, 90, 1, ((void*)0), VAR_4, VAR_3);
         FUNC_0("%s\n", VAR_17);
         FUNC_5(VAR_17);
      }

      return 0;
   }

   return 1;
}
