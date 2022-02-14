
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int directory_system; } ;
struct TYPE_15__ {int check_firmware_before_loading; } ;
struct TYPE_19__ {TYPE_4__ paths; TYPE_1__ bools; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_20__ {int load_no_content; } ;
typedef TYPE_6__ rarch_system_info_t ;
struct TYPE_17__ {int ups; int bps; int ips; } ;
struct TYPE_21__ {TYPE_3__ name; } ;
typedef TYPE_7__ global_t ;
struct TYPE_16__ {scalar_t__ size; int * data; } ;
struct TYPE_22__ {char* directory_system; char* name_ips; char* name_bps; char* name_ups; int block_extract; int need_fullpath; int set_supports_no_game_enable; TYPE_2__ subsystem; int * valid_extensions; int * directory_cache; void* bios_is_missing; void* patch_is_blocked; void* is_ups_pref; void* is_bps_pref; void* is_ips_pref; int check_firmware_before_loading; } ;
typedef TYPE_8__ content_information_ctx_t ;
struct TYPE_23__ {scalar_t__ environ_get; } ;
typedef TYPE_9__ content_ctx_info_t ;


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
 int VAR_10 ;
 TYPE_5__* FUNC_1 () ;
 int FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (char*) ;
 TYPE_7__* FUNC_4 () ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ,int *) ;
 TYPE_6__* FUNC_7 () ;
 int FUNC_8 (char*,int,int,int,int *,int ,int ) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,int) ;

bool FUNC_12(content_ctx_info_t *VAR_12)
{
   content_information_ctx_t VAR_13;
   bool VAR_14 = 1;
   char *VAR_15 = ((void*)0);
   global_t *VAR_16 = FUNC_4();
   settings_t *VAR_17 = FUNC_1();
   rarch_system_info_t *VAR_18 = FUNC_7();

   if (!VAR_12)
      return 0;

   VAR_13.check_firmware_before_loading = VAR_17->bools.check_firmware_before_loading;
   VAR_13.is_ips_pref = FUNC_6(VAR_4, ((void*)0));
   VAR_13.is_bps_pref = FUNC_6(VAR_3, ((void*)0));
   VAR_13.is_ups_pref = FUNC_6(VAR_7, ((void*)0));
   VAR_13.patch_is_blocked = FUNC_6(VAR_6, ((void*)0));
   VAR_13.bios_is_missing = FUNC_6(VAR_5, ((void*)0));
   VAR_13.directory_system = ((void*)0);
   VAR_13.directory_cache = ((void*)0);
   VAR_13.name_ips = ((void*)0);
   VAR_13.name_bps = ((void*)0);
   VAR_13.name_ups = ((void*)0);
   VAR_13.valid_extensions = ((void*)0);
   VAR_13.block_extract = 0;
   VAR_13.need_fullpath = 0;
   VAR_13.set_supports_no_game_enable = 0;

   VAR_13.subsystem.data = ((void*)0);
   VAR_13.subsystem.size = 0;

   if (VAR_16)
   {
      if (!FUNC_10(VAR_16->name.ips))
         VAR_13.name_ips = FUNC_9(VAR_16->name.ips);
      if (!FUNC_10(VAR_16->name.bps))
         VAR_13.name_bps = FUNC_9(VAR_16->name.bps);
      if (!FUNC_10(VAR_16->name.ups))
         VAR_13.name_ups = FUNC_9(VAR_16->name.ups);
   }

   if (!FUNC_10(VAR_17->paths.directory_system))
      VAR_13.directory_system = FUNC_9(VAR_17->paths.directory_system);

   if (!VAR_12->environ_get)
      VAR_12->environ_get = VAR_11;


   FUNC_5(VAR_10);



   VAR_18->load_no_content = 0;
   FUNC_6(VAR_8, ((void*)0));
   FUNC_6(VAR_2, ((void*)0));
   FUNC_6(VAR_9, ((void*)0));


   if (!FUNC_2(VAR_12))
   {
      if (VAR_15)
      {
         FUNC_8(VAR_15, 2, 90, 1, ((void*)0), VAR_1, VAR_0);
         FUNC_0("%s\n", VAR_15);
         FUNC_3(VAR_15);
      }

      VAR_14 = 0;
   }
   else
      FUNC_11(0, 0);

   if (VAR_13.name_ips)
      FUNC_3(VAR_13.name_ips);
   if (VAR_13.name_bps)
      FUNC_3(VAR_13.name_bps);
   if (VAR_13.name_ups)
      FUNC_3(VAR_13.name_ups);
   if (VAR_13.directory_system)
      FUNC_3(VAR_13.directory_system);

   return VAR_14;
}
