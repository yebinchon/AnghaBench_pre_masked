
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int directory_system; } ;
struct TYPE_14__ {int check_firmware_before_loading; } ;
struct TYPE_18__ {TYPE_4__ paths; TYPE_1__ bools; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_16__ {int ups; int bps; int ips; } ;
struct TYPE_19__ {TYPE_3__ name; } ;
typedef TYPE_6__ global_t ;
struct TYPE_15__ {scalar_t__ size; int * data; } ;
struct TYPE_20__ {char* directory_system; char* name_ips; char* name_bps; char* name_ups; int block_extract; int need_fullpath; int set_supports_no_game_enable; TYPE_2__ subsystem; int * valid_extensions; int * directory_cache; void* bios_is_missing; void* patch_is_blocked; void* is_ups_pref; void* is_bps_pref; void* is_ips_pref; int check_firmware_before_loading; } ;
typedef TYPE_7__ content_information_ctx_t ;
struct TYPE_21__ {scalar_t__ environ_get; } ;
typedef TYPE_8__ content_ctx_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_5__* FUNC_1 () ;
 int FUNC_2 (TYPE_8__*) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (char*) ;
 TYPE_6__* FUNC_5 () ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int ,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (char*,int,int,int,int *,int ,int ) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,int) ;

bool FUNC_15(content_ctx_info_t *VAR_11)
{
   content_information_ctx_t VAR_12;

   bool VAR_13 = 1;
   char *VAR_14 = ((void*)0);
   global_t *VAR_15 = FUNC_5();
   settings_t *VAR_16 = FUNC_1();

   if (!VAR_11)
      return 0;

   VAR_12.check_firmware_before_loading = VAR_16->bools.check_firmware_before_loading;
   VAR_12.is_ips_pref = FUNC_8(VAR_4, ((void*)0));
   VAR_12.is_bps_pref = FUNC_8(VAR_3, ((void*)0));
   VAR_12.is_ups_pref = FUNC_8(VAR_7, ((void*)0));
   VAR_12.patch_is_blocked = FUNC_8(VAR_6, ((void*)0));
   VAR_12.bios_is_missing = FUNC_8(VAR_5, ((void*)0));
   VAR_12.directory_system = ((void*)0);
   VAR_12.directory_cache = ((void*)0);
   VAR_12.name_ips = ((void*)0);
   VAR_12.name_bps = ((void*)0);
   VAR_12.name_ups = ((void*)0);
   VAR_12.valid_extensions = ((void*)0);
   VAR_12.block_extract = 0;
   VAR_12.need_fullpath = 0;
   VAR_12.set_supports_no_game_enable = 0;

   VAR_12.subsystem.data = ((void*)0);
   VAR_12.subsystem.size = 0;

   if (VAR_15)
   {
      if (!FUNC_13(VAR_15->name.ips))
         VAR_12.name_ips = FUNC_12(VAR_15->name.ips);
      if (!FUNC_13(VAR_15->name.bps))
         VAR_12.name_bps = FUNC_12(VAR_15->name.bps);
      if (!FUNC_13(VAR_15->name.ups))
         VAR_12.name_ups = FUNC_12(VAR_15->name.ups);
   }

   if (!FUNC_13(VAR_16->paths.directory_system))
      VAR_12.directory_system = FUNC_12(VAR_16->paths.directory_system);

   if (!VAR_11->environ_get)
      VAR_11->environ_get = VAR_10;


   FUNC_7(VAR_9);



   FUNC_10(VAR_0, 1);


   if (FUNC_3(&VAR_12))
      goto end;


   if (!FUNC_2(VAR_11))
   {
      if (VAR_14)
      {
         FUNC_11(VAR_14, 2, 90, 1, ((void*)0), VAR_2, VAR_1);
         FUNC_0("%s\n", VAR_14);
         FUNC_4(VAR_14);
      }

      FUNC_9();

      VAR_13 = 0;
      goto end;
   }
   else
      FUNC_14(1, 0);






end:
   if (VAR_12.name_ips)
      FUNC_4(VAR_12.name_ips);
   if (VAR_12.name_bps)
      FUNC_4(VAR_12.name_bps);
   if (VAR_12.name_ups)
      FUNC_4(VAR_12.name_ups);
   if (VAR_12.directory_system)
      FUNC_4(VAR_12.directory_system);

   return VAR_13;
}
