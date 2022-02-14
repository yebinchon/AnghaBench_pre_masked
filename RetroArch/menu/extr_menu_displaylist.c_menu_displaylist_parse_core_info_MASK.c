
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int tmp ;
struct TYPE_21__ {scalar_t__ menu_show_core_updater; } ;
struct TYPE_17__ {int directory_system; } ;
struct TYPE_22__ {TYPE_6__ bools; TYPE_2__ paths; } ;
typedef TYPE_7__ settings_t ;
struct TYPE_23__ {int list; } ;
typedef TYPE_8__ menu_displaylist_info_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;
struct TYPE_24__ {char const* core_name; char const* display_name; char const* systemname; char const* system_manufacturer; unsigned int firmware_count; TYPE_5__* note_list; scalar_t__ notes; TYPE_3__* firmware; int path; scalar_t__ required_hw_api_list; scalar_t__ required_hw_api; scalar_t__ supported_extensions_list; scalar_t__ licenses_list; scalar_t__ permissions_list; scalar_t__ authors_list; scalar_t__ categories_list; int config_data; } ;
typedef TYPE_9__ core_info_t ;
struct TYPE_16__ {int system; } ;
struct TYPE_15__ {TYPE_1__ directory; int path; } ;
typedef TYPE_10__ core_info_ctx_firmware_t ;
struct TYPE_20__ {unsigned int size; TYPE_4__* elems; } ;
struct TYPE_19__ {int data; } ;
struct TYPE_18__ {char* desc; scalar_t__ optional; scalar_t__ missing; } ;


 unsigned int FUNC_0 (struct menu_features_info*) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 TYPE_7__* FUNC_1 () ;
 int FUNC_2 (TYPE_9__**) ;
 int FUNC_3 (TYPE_10__*,int*) ;
 int FUNC_4 (char*,char*,char*,char const*,int) ;
 int FUNC_5 (char*,char*,char*,int) ;
 int FUNC_6 (int ,char*,char*,int,int ,int ,int ) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (char*,int,char*,char*,char*,char*) ;
 int FUNC_10 (char*,int,scalar_t__,char*) ;
 int FUNC_11 (char*,int ,int) ;

__attribute__((used)) static int FUNC_12(menu_displaylist_info_t *VAR_26)
{
   unsigned VAR_27;
   char VAR_28[VAR_23];
   core_info_t *VAR_29 = ((void*)0);
   settings_t *VAR_30 = FUNC_1();

   VAR_28[0] = '\0';

   FUNC_2(&VAR_29);

   if (!VAR_29 || !VAR_29->config_data)
   {
      FUNC_6(VAR_26->list,
            FUNC_7(VAR_16),
            FUNC_7(VAR_2),
            VAR_2,
            0, 0, 0);
      FUNC_6(VAR_26->list,
            FUNC_7(VAR_3),
            FUNC_7(VAR_0),
            VAR_0,
            VAR_22, 0, 0);

      return 0;
   }

   {
      unsigned VAR_31;
      typedef struct menu_features_info
      {
         const char *name;
         enum msg_hash_enums msg;
      } menu_features_info_t;

      menu_features_info_t VAR_32[] = {
         {((void*)0), VAR_7},
         {((void*)0), VAR_6},
         {((void*)0), VAR_14},
         {((void*)0), VAR_13},
      };
      VAR_32[0].name = VAR_29->core_name;
      VAR_32[1].name = VAR_29->display_name;
      VAR_32[2].name = VAR_29->systemname;
      VAR_32[3].name = VAR_29->system_manufacturer;

      for (VAR_31 = 0; VAR_31 < FUNC_0(VAR_32); VAR_31++)
      {
         if (!VAR_32[VAR_31].name)
            continue;

         FUNC_4(VAR_28,
               FUNC_7(VAR_32[VAR_31].msg),
               ": ",
               VAR_32[VAR_31].name,
               sizeof(VAR_28));
         FUNC_6(VAR_26->list, VAR_28, "",
               VAR_1,
               VAR_21, 0, 0);
      }
   }

   if (VAR_29->categories_list)
   {
      FUNC_5(VAR_28,
            FUNC_7(VAR_5),
            ": ",
            sizeof(VAR_28));
      FUNC_10(VAR_28, sizeof(VAR_28),
            VAR_29->categories_list, ", ");
      FUNC_6(VAR_26->list, VAR_28, "",
            VAR_1, VAR_21, 0, 0);
   }

   if (VAR_29->authors_list)
   {
      FUNC_5(VAR_28,
            FUNC_7(VAR_4),
            ": ",
            sizeof(VAR_28));
      FUNC_10(VAR_28, sizeof(VAR_28),
            VAR_29->authors_list, ", ");
      FUNC_6(VAR_26->list, VAR_28, "",
            VAR_1, VAR_21, 0, 0);
   }

   if (VAR_29->permissions_list)
   {
      FUNC_5(VAR_28,
            FUNC_7(VAR_10),
            ": ",
            sizeof(VAR_28));
      FUNC_10(VAR_28, sizeof(VAR_28),
            VAR_29->permissions_list, ", ");
      FUNC_6(VAR_26->list, VAR_28, "",
            VAR_1, VAR_21, 0, 0);
   }

   if (VAR_29->licenses_list)
   {
      FUNC_5(VAR_28,
            FUNC_7(VAR_9),
            ": ",
            sizeof(VAR_28));
      FUNC_10(VAR_28, sizeof(VAR_28),
            VAR_29->licenses_list, ", ");
      FUNC_6(VAR_26->list, VAR_28, "",
            VAR_1, VAR_21, 0, 0);
   }

   if (VAR_29->supported_extensions_list)
   {
      FUNC_5(VAR_28,
            FUNC_7(VAR_12),
            ": ",
            sizeof(VAR_28));
      FUNC_10(VAR_28, sizeof(VAR_28),
            VAR_29->supported_extensions_list, ", ");
      FUNC_6(VAR_26->list, VAR_28, "",
            VAR_1, VAR_21, 0, 0);
   }

   if (VAR_29->required_hw_api)
   {
      FUNC_5(VAR_28,
            FUNC_7(VAR_11),
            ": ",
            sizeof(VAR_28));
      FUNC_10(VAR_28, sizeof(VAR_28),
            VAR_29->required_hw_api_list, ", ");
      FUNC_6(VAR_26->list, VAR_28, "",
            VAR_1, VAR_21, 0, 0);
   }

   if (VAR_29->firmware_count > 0)
   {
      core_info_ctx_firmware_t VAR_33;
      bool VAR_34 = 0;
      bool VAR_35 = 0;

      VAR_33.path = VAR_29->path;
      VAR_33.directory.system = VAR_30->paths.directory_system;

      FUNC_8(VAR_25, ((void*)0));

      VAR_34 = FUNC_3(&VAR_33, &VAR_35);

      if (VAR_35)
         FUNC_8(VAR_24, ((void*)0));

      if (VAR_34)
      {
         FUNC_5(VAR_28,
               FUNC_7(VAR_8),
               ": ",
               sizeof(VAR_28));
         FUNC_6(VAR_26->list, VAR_28, "",
               VAR_1, VAR_21, 0, 0);




         for (VAR_27 = 0; VAR_27 < VAR_29->firmware_count; VAR_27++)
         {
            if (!VAR_29->firmware[VAR_27].desc)
               continue;

            FUNC_9(VAR_28, sizeof(VAR_28), "(!) %s, %s: %s",
                  VAR_29->firmware[VAR_27].missing ?
                  FUNC_7(VAR_15) :
                  FUNC_7(VAR_18),
                  VAR_29->firmware[VAR_27].optional ?
                  FUNC_7(VAR_17) :
                  FUNC_7(VAR_20),
                  VAR_29->firmware[VAR_27].desc ?
                  VAR_29->firmware[VAR_27].desc :
                  FUNC_7(VAR_19)
                  );

            FUNC_6(VAR_26->list, VAR_28, "",
                  VAR_1,
                  VAR_21, 0, 0);
         }
      }
   }

   if (VAR_29->notes)
   {
      for (VAR_27 = 0; VAR_27 < VAR_29->note_list->size; VAR_27++)
      {
         FUNC_11(VAR_28,
               VAR_29->note_list->elems[VAR_27].data, sizeof(VAR_28));
         FUNC_6(VAR_26->list, VAR_28, "",
               VAR_1, VAR_21, 0, 0);
      }
   }



  if (VAR_30->bools.menu_show_core_updater)
     FUNC_6(VAR_26->list,
           FUNC_7(VAR_3),
           FUNC_7(VAR_0),
           VAR_0,
           VAR_22, 0, 0);


   return 0;
}
