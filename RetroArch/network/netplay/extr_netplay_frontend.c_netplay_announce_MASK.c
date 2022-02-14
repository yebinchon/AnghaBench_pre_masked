
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct string_list {unsigned int size; TYPE_1__* elems; } ;
struct retro_system_info {char* library_name; char* library_version; } ;
struct TYPE_12__ {int netplay_use_mitm_server; } ;
struct TYPE_11__ {char* username; scalar_t__* netplay_spectate_password; scalar_t__* netplay_password; } ;
struct TYPE_10__ {char* netplay_mitm_server; } ;
struct TYPE_9__ {int netplay_port; } ;
struct TYPE_13__ {TYPE_5__ bools; TYPE_4__ paths; TYPE_3__ arrays; TYPE_2__ uints; } ;
typedef TYPE_6__ settings_t ;
typedef int frontend_architecture ;
typedef int buf ;
struct TYPE_8__ {char* data; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_1 () ;
 int FUNC_2 () ;
 char* FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char**,char*) ;
 int VAR_4 ;
 int FUNC_7 (char*,int) ;
 char* FUNC_8 (char*) ;
 char* FUNC_9 (int ) ;
 struct string_list* FUNC_10 () ;
 struct retro_system_info* FUNC_11 () ;
 int FUNC_12 (char*,int,char*,char*,char*,char*,char*,int,int,char*,int,int,int,char*,char*,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*,char*,int,int *,int ,int *) ;

__attribute__((used)) static void FUNC_16(void)
{
   char VAR_5[4600];
   char VAR_6[VAR_1];
   char VAR_7[2048] = "http://lobby.libretro.com/add/";
   char *VAR_8 = ((void*)0);
   char *VAR_9 = ((void*)0);
   char *VAR_10 = ((void*)0);
   char *VAR_11 = ((void*)0);
   char *VAR_12 = ((void*)0);
   char *VAR_13 = ((void*)0);
   settings_t *VAR_14 = FUNC_1();
   struct retro_system_info *VAR_15 = FUNC_11();
   uint32_t VAR_16 = FUNC_2();
   struct string_list *VAR_17 = FUNC_10();

   VAR_5[0] = '\0';

   if (VAR_17)
   {
      unsigned VAR_18;

      for (VAR_18 = 0; VAR_18 < VAR_17->size; VAR_18++)
      {
         FUNC_14(VAR_5, FUNC_8(VAR_17->elems[VAR_18].data), sizeof(VAR_5));
         if (VAR_18 < VAR_17->size - 1)
            FUNC_14(VAR_5, "|", sizeof(VAR_5));
      }
      FUNC_6(&VAR_10, VAR_5);
      FUNC_6(&VAR_11, FUNC_9(VAR_3));
      VAR_16 = 0;
   }
   else
   {
      FUNC_6(&VAR_10,
         !FUNC_13(FUNC_8(FUNC_9(VAR_2))) ?
         FUNC_8(FUNC_9(VAR_2)) : "N/A");
      FUNC_6(&VAR_11, "N/A");
   }

   FUNC_7(VAR_6, sizeof(VAR_6));






   FUNC_6(&VAR_8, VAR_14->paths.username);
   FUNC_6(&VAR_9, VAR_15->library_name);
   FUNC_6(&VAR_12, VAR_15->library_version);
   FUNC_6(&VAR_13, VAR_6);

   VAR_5[0] = '\0';

   FUNC_12(VAR_5, sizeof(VAR_5), "username=%s&core_name=%s&core_version=%s&"
      "game_name=%s&game_crc=%08X&port=%d&mitm_server=%s"
      "&has_password=%d&has_spectate_password=%d&force_mitm=%d"
      "&retroarch_version=%s&frontend=%s&subsystem_name=%s",
      VAR_8, VAR_9, VAR_12, VAR_10, VAR_16,
      VAR_14->uints.netplay_port,
      VAR_14->arrays.netplay_mitm_server,
      *VAR_14->paths.netplay_password ? 1 : 0,
      *VAR_14->paths.netplay_spectate_password ? 1 : 0,
      VAR_14->bools.netplay_use_mitm_server,
      VAR_0, VAR_6, VAR_11);



   FUNC_15(VAR_7, VAR_5, 1, ((void*)0), VAR_4, ((void*)0));

   if (VAR_8)
      FUNC_5(VAR_8);
   if (VAR_9)
      FUNC_5(VAR_9);
   if (VAR_10)
      FUNC_5(VAR_10);
   if (VAR_12)
      FUNC_5(VAR_12);
   if (VAR_13)
      FUNC_5(VAR_13);
}
