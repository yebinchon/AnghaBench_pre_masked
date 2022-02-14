
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int path; } ;
typedef TYPE_2__ core_info_t ;
struct TYPE_8__ {char* system; } ;
struct TYPE_10__ {TYPE_1__ directory; int path; } ;
typedef TYPE_3__ core_info_ctx_firmware_t ;
struct TYPE_11__ {char* directory_system; scalar_t__ check_firmware_before_loading; scalar_t__ bios_is_missing; } ;
typedef TYPE_4__ content_information_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,...) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (TYPE_3__*,int*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int,int,int,int *,int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ,size_t) ;

__attribute__((used)) static bool FUNC_12(
      content_information_ctx_t *VAR_7)
{
   core_info_ctx_firmware_t VAR_8;
   bool VAR_9 = 0;
   core_info_t *VAR_10 = ((void*)0);
   size_t VAR_11 = VAR_3 * sizeof(char);
   char *VAR_12 = ((void*)0);

   FUNC_1(&VAR_10);

   if (!VAR_10)
      return 0;

   VAR_12 = (char*)FUNC_4(VAR_11);

   VAR_8.path = VAR_10->path;

   if (!FUNC_10(VAR_7->directory_system))
      VAR_8.directory.system = VAR_7->directory_system;
   else
   {
      FUNC_11(VAR_12, FUNC_7(VAR_6), VAR_11);
      FUNC_6(VAR_12);
      VAR_8.directory.system = VAR_12;
   }

   FUNC_0("Updating firmware status for: %s on %s\n",
         VAR_10->path,
         VAR_8.directory.system);

   FUNC_8(VAR_5, ((void*)0));

   FUNC_2(&VAR_8,
         &VAR_9);

   FUNC_3(VAR_12);

   if (VAR_9)
      FUNC_8(VAR_4, ((void*)0));

   if(
         VAR_7->bios_is_missing &&
         VAR_7->check_firmware_before_loading)
   {
      FUNC_9(
            FUNC_5(VAR_2),
            100, 500, 1, ((void*)0),
            VAR_1, VAR_0);
      FUNC_0("Load content blocked. Reason: %s\n",
            FUNC_5(VAR_2));

      return 1;
   }

   return 0;
}
