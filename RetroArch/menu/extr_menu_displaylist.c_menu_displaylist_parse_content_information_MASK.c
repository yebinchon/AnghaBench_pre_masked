
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int tmp ;
struct playlist_entry {char* label; char* path; char* core_path; char* db_name; char* core_name; } ;
struct TYPE_15__ {int path_content_database; } ;
struct TYPE_14__ {scalar_t__ playlist_sublabel_runtime_type; scalar_t__ playlist_sublabel_last_played_style; } ;
struct TYPE_13__ {int content_runtime_log_aggregate; scalar_t__ content_runtime_log; } ;
struct TYPE_17__ {TYPE_3__ paths; TYPE_2__ uints; TYPE_1__ bools; } ;
typedef TYPE_5__ settings_t ;
typedef int runtime_log_t ;
typedef int playlist_t ;
struct TYPE_18__ {unsigned int rpl_entry_selection_ptr; char* deferred_path; } ;
typedef TYPE_6__ menu_handle_t ;
struct TYPE_19__ {int list; } ;
typedef TYPE_7__ menu_displaylist_info_t ;
typedef enum playlist_sublabel_last_played_style_type { ____Placeholder_playlist_sublabel_last_played_style_type } playlist_sublabel_last_played_style_type ;
typedef int db_path ;
typedef int db_name_no_ext_buff ;
typedef int core_name ;
struct TYPE_20__ {char const* path; TYPE_4__* inf; } ;
typedef TYPE_8__ core_info_ctx_find_t ;
struct TYPE_16__ {char const* display_name; } ;


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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_5__* FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_8__*,char const*) ;
 int FUNC_2 (char*,int ,char const*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,char const*,char*,int ,int ,int ,int ) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *,unsigned int,struct playlist_entry const**) ;
 int FUNC_11 (int *,unsigned int,char const*,char const*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,char*,int,int) ;
 int FUNC_14 (int *,char*,int) ;
 scalar_t__ FUNC_15 (int *) ;
 int * FUNC_16 (char const*,char const*,int) ;
 int FUNC_17 (char const*) ;
 scalar_t__ FUNC_18 (char*,char const*) ;
 int FUNC_19 (char*,char const*,int) ;
 int FUNC_20 (char*,char const*,int) ;

__attribute__((used)) static unsigned FUNC_21(
      menu_handle_t *VAR_18,
      menu_displaylist_info_t *VAR_19)
{
   settings_t *VAR_20 = FUNC_0();
   playlist_t *VAR_21 = FUNC_9();
   unsigned VAR_22 = VAR_18->rpl_entry_selection_ptr;
   const struct playlist_entry *VAR_23 = ((void*)0);
   const char *VAR_24 = FUNC_6(VAR_16);
   const char *VAR_25 = FUNC_6(VAR_17);
   const char *VAR_26 = ((void*)0);
   const char *VAR_27 = ((void*)0);
   const char *VAR_28 = ((void*)0);
   const char *VAR_29 = ((void*)0);
   bool VAR_30 = 0;
   bool VAR_31 = 0;
   unsigned VAR_32 = 0;
   int VAR_33 = 0;
   char VAR_34[VAR_12];
   char VAR_35[8192];

   VAR_34[0] = '\0';

   if (!VAR_20)
      return VAR_32;

   VAR_30 = !FUNC_12(VAR_15, ((void*)0))
         && FUNC_18(VAR_18->deferred_path, VAR_24);






   if (VAR_30)
   {
      if (!FUNC_17(VAR_24) && !FUNC_17(VAR_25))
         VAR_31 = FUNC_11(
               VAR_21, VAR_22, VAR_24, VAR_25);
   }
   else if (VAR_21)
      VAR_31 = 1;

   if (VAR_31)
   {

      FUNC_10(VAR_21, VAR_22, &VAR_23);

      if (VAR_23)
      {
         VAR_26 = VAR_23->label;
         VAR_27 = VAR_23->path;
         VAR_28 = VAR_23->core_path;
         VAR_29 = VAR_23->db_name;

         FUNC_20(VAR_34, VAR_23->core_name, sizeof(VAR_34));
      }
   }
   else
   {
      core_info_ctx_find_t VAR_36;


      VAR_27 = VAR_24;
      VAR_28 = VAR_25;

      VAR_36.inf = ((void*)0);
      VAR_36.path = VAR_28;

      if (FUNC_1(&VAR_36, VAR_28))
         if (!FUNC_17(VAR_36.inf->display_name))
            FUNC_20(VAR_34, VAR_36.inf->display_name, sizeof(VAR_34));
   }


   if (!FUNC_17(VAR_26))
   {
      VAR_35[0] = '\0';

      VAR_33 = FUNC_20(VAR_35, FUNC_5(VAR_10), sizeof(VAR_35));
      FUNC_19(VAR_35, ": ", sizeof(VAR_35));
      VAR_33 = FUNC_19(VAR_35, VAR_26, sizeof(VAR_35));



      if ((VAR_33 < 0) || (VAR_33 >= VAR_12))
         VAR_33 = 0;

      if (FUNC_4(VAR_19->list, VAR_35,
            FUNC_5(VAR_3),
            VAR_3,
            0, 0, 0))
         VAR_32++;
   }


   if (!FUNC_17(VAR_27))
   {
      VAR_35[0] = '\0';

      VAR_33 = FUNC_20(VAR_35, FUNC_5(VAR_11), sizeof(VAR_35));
      VAR_33 = FUNC_19(VAR_35, ": ", sizeof(VAR_35));
      VAR_33 = FUNC_19(VAR_35, VAR_27, sizeof(VAR_35));



      if ((VAR_33 < 0) || (VAR_33 >= VAR_12))
         VAR_33 = 0;

      if (FUNC_4(VAR_19->list, VAR_35,
            FUNC_5(VAR_5),
            VAR_5,
            0, 0, 0))
         VAR_32++;
   }


   if (!FUNC_17(VAR_34) &&
       !FUNC_18(VAR_34, "DETECT"))
   {
      VAR_35[0] = '\0';

      VAR_33 = FUNC_20(VAR_35, FUNC_5(VAR_8), sizeof(VAR_35));
      VAR_33 = FUNC_19(VAR_35, ": ", sizeof(VAR_35));
      VAR_33 = FUNC_19(VAR_35, VAR_34, sizeof(VAR_35));



      if ((VAR_33 < 0) || (VAR_33 >= VAR_12))
         VAR_33 = 0;

      if (FUNC_4(VAR_19->list, VAR_35,
            FUNC_5(VAR_1),
            VAR_1,
            0, 0, 0))
         VAR_32++;
   }


   if (!FUNC_17(VAR_29))
   {
      char *VAR_37 = ((void*)0);
      char VAR_38[VAR_12];

      VAR_38[0] = '\0';




      FUNC_20(VAR_38, VAR_29, sizeof(VAR_38));
      VAR_37 = FUNC_8(VAR_38);

      if (!FUNC_17(VAR_37))
      {
         VAR_35[0] = '\0';

         VAR_33 = FUNC_20(VAR_35, FUNC_5(VAR_9), sizeof(VAR_35));
         VAR_33 = FUNC_19(VAR_35, ": ", sizeof(VAR_35));
         VAR_33 = FUNC_19(VAR_35, VAR_37, sizeof(VAR_35));



         if ((VAR_33 < 0) || (VAR_33 >= VAR_12))
            VAR_33 = 0;

         if (FUNC_4(VAR_19->list, VAR_35,
               FUNC_5(VAR_2),
               VAR_2,
               0, 0, 0))
            VAR_32++;
      }
   }


   if (((VAR_20->uints.playlist_sublabel_runtime_type == VAR_14) &&
         VAR_20->bools.content_runtime_log) ||
       ((VAR_20->uints.playlist_sublabel_runtime_type == VAR_13) &&
         !VAR_20->bools.content_runtime_log_aggregate))
   {
      runtime_log_t *VAR_39 = FUNC_16(
            VAR_27, VAR_28,
            (VAR_20->uints.playlist_sublabel_runtime_type == VAR_14));

      if (VAR_39)
      {
         if (FUNC_15(VAR_39))
         {

            VAR_35[0] = '\0';
            FUNC_14(VAR_39, VAR_35, sizeof(VAR_35));

            if (!FUNC_17(VAR_35))
               if (FUNC_4(VAR_19->list, VAR_35,
                     FUNC_5(VAR_6),
                     VAR_6,
                     0, 0, 0))
                  VAR_32++;


            VAR_35[0] = '\0';
            FUNC_13(VAR_39, VAR_35, sizeof(VAR_35),
                  (enum playlist_sublabel_last_played_style_type)VAR_20->uints.playlist_sublabel_last_played_style);

            if (!FUNC_17(VAR_35))
               if (FUNC_4(VAR_19->list, VAR_35,
                     FUNC_5(VAR_4),
                     VAR_4,
                     0, 0, 0))
                  VAR_32++;
         }

         FUNC_3(VAR_39);
      }
   }
   return VAR_32;
}
