
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct string_list {unsigned int size; TYPE_1__* elems; } ;
struct netplay_room {int has_password; int has_spectate_password; int fixed; int host_method; int country; int retroarch_version; int gamecrc; int gamename; int coreversion; int frontend; int corename; int mitm_port; int port; int mitm_address; int address; int nickname; int id; } ;
typedef int retro_task_t ;
struct TYPE_4__ {scalar_t__ len; char* data; } ;
typedef TYPE_2__ http_transfer_data_t ;
typedef void discord_userdata_t ;
struct TYPE_3__ {char* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int ,void*) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (char*) ;
 int VAR_9 ;
 int FUNC_4 (char*,char*,unsigned int) ;
 int FUNC_5 (struct netplay_room*,int ,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 struct netplay_room* FUNC_7 () ;
 int FUNC_8 (char const*,char*,int *) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 int FUNC_13 (struct string_list*) ;
 struct string_list* FUNC_14 (char const*,char*) ;
 int FUNC_15 (int ,char const*,int) ;
 scalar_t__ FUNC_16 (char*) ;

__attribute__((used)) static void FUNC_17(retro_task_t *VAR_10,
      void *VAR_11, void *VAR_12, const char *VAR_13)
{
   FUNC_0("[netplay] announcing netplay game... \n");

   if (VAR_11)
   {
      unsigned VAR_14, VAR_15, VAR_16;
      http_transfer_data_t *VAR_17 = (http_transfer_data_t*)VAR_11;
      struct netplay_room *VAR_18 = FUNC_7();
      struct string_list *VAR_19 = ((void*)0);
      char *VAR_20 = ((void*)0);
      char *VAR_21 = ((void*)0);
      char *VAR_22 = ((void*)0);
      char *VAR_23 = ((void*)0);

      if (VAR_17->len == 0)
      {
         FUNC_3(VAR_11);
         return;
      }

      VAR_22 = (char*)FUNC_1(1, VAR_17->len + 1);

      FUNC_4(VAR_22, VAR_17->data, VAR_17->len);

      VAR_19 = FUNC_14(VAR_22, "\n");

      if (VAR_19->size == 0)
      {
         FUNC_13(VAR_19);
         FUNC_3(VAR_22);
         FUNC_3(VAR_11);
         return;
      }

      FUNC_5(VAR_18, 0, sizeof(*VAR_18));

      for (VAR_14 = 0; VAR_14 < VAR_19->size; VAR_14++)
      {
         const char *VAR_24 = VAR_19->elems[VAR_14].data;

         if (!FUNC_10(VAR_24))
         {
            struct string_list *VAR_25 = FUNC_14(VAR_24, "=");
            const char *VAR_26 = ((void*)0);
            const char *VAR_27 = ((void*)0);

            if (!VAR_25)
               continue;

            if (VAR_25->size != 2)
            {
               FUNC_13(VAR_25);
               continue;
            }

            VAR_26 = VAR_25->elems[0].data;
            VAR_27 = VAR_25->elems[1].data;

            if (FUNC_11(VAR_26, "id"))
               FUNC_8(VAR_27, "%i", &VAR_18->id);
            if (FUNC_11(VAR_26, "username"))
               FUNC_15(VAR_18->nickname, VAR_27, sizeof(VAR_18->nickname));
            if (FUNC_11(VAR_26, "ip"))
               FUNC_15(VAR_18->address, VAR_27, sizeof(VAR_18->address));
            if (FUNC_11(VAR_26, "mitm_ip"))
            {
               VAR_20 = FUNC_9(VAR_27);
               FUNC_15(VAR_18->mitm_address, VAR_27, sizeof(VAR_18->mitm_address));
            }
            if (FUNC_11(VAR_26, "port"))
               FUNC_8(VAR_27, "%i", &VAR_18->port);
            if (FUNC_11(VAR_26, "mitm_port"))
            {
               VAR_21 = FUNC_9(VAR_27);
               FUNC_8(VAR_21, "%i", &VAR_18->mitm_port);
            }
            if (FUNC_11(VAR_26, "core_name"))
               FUNC_15(VAR_18->corename, VAR_27, sizeof(VAR_18->corename));
            if (FUNC_11(VAR_26, "frontend"))
               FUNC_15(VAR_18->frontend, VAR_27, sizeof(VAR_18->frontend));
            if (FUNC_11(VAR_26, "core_version"))
               FUNC_15(VAR_18->coreversion, VAR_27, sizeof(VAR_18->coreversion));
            if (FUNC_11(VAR_26, "game_name"))
               FUNC_15(VAR_18->gamename, VAR_27, sizeof(VAR_18->gamename));
            if (FUNC_11(VAR_26, "game_crc"))
               FUNC_8(VAR_27, "%08d", &VAR_18->gamecrc);
            if (FUNC_11(VAR_26, "host_method"))
               FUNC_8(VAR_27, "%i", &VAR_18->host_method);
            if (FUNC_11(VAR_26, "has_password"))
            {
               if (FUNC_12(VAR_27, "true") || FUNC_11(VAR_27, "1"))
                  VAR_18->has_password = 1;
               else
                  VAR_18->has_password = 0;
            }
            if (FUNC_11(VAR_26, "has_spectate_password"))
            {
               if (FUNC_12(VAR_27, "true") || FUNC_11(VAR_27, "1"))
                  VAR_18->has_spectate_password = 1;
               else
                  VAR_18->has_spectate_password = 0;
            }
            if (FUNC_11(VAR_26, "fixed"))
            {
               if (FUNC_12(VAR_27, "true") || FUNC_11(VAR_27, "1"))
                  VAR_18->fixed = 1;
               else
                  VAR_18->fixed = 0;
            }
            if (FUNC_11(VAR_26, "retroarch_version"))
               FUNC_15(VAR_18->retroarch_version, VAR_27, sizeof(VAR_18->retroarch_version));
            if (FUNC_11(VAR_26, "country"))
               FUNC_15(VAR_18->country, VAR_27, sizeof(VAR_18->country));

            FUNC_13(VAR_25);
         }
      }

      if (VAR_20 && VAR_21)
      {
         FUNC_0("[netplay] joining relay server: %s:%s\n", VAR_20, VAR_21);

         VAR_15 = (unsigned)FUNC_16(VAR_20);
         VAR_16 = (unsigned)FUNC_16(VAR_21);


         if (FUNC_6(VAR_7, ((void*)0)))
         {
            FUNC_2(VAR_1, ((void*)0));
            VAR_9 = 1;
            VAR_18->host_method = VAR_5;
         }

         FUNC_6(VAR_6, ((void*)0));

         VAR_23 = (char*)FUNC_1(1, VAR_15 + VAR_16 + 2);

         FUNC_4(VAR_23, VAR_20, VAR_15);
         FUNC_4(VAR_23 + VAR_15, "|", 1);
         FUNC_4(VAR_23 + VAR_15 + 1, VAR_21, VAR_16);


         FUNC_2(VAR_3, (void*)VAR_23);
         FUNC_2(VAR_2, (void*)VAR_23);

         FUNC_3(VAR_23);
      }
      FUNC_13(VAR_19);
      FUNC_3(VAR_22);
      FUNC_3(VAR_11);
      if (VAR_20)
         FUNC_3(VAR_20);
      if (VAR_21)
         FUNC_3(VAR_21);
   }

   return;
}
