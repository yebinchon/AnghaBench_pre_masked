
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* directory_playlist; } ;
struct TYPE_8__ {TYPE_1__ paths; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_9__ {int type; char* exts; char* label; int need_push_no_playlist_entries; int need_refresh; int need_push; char* path; int list; } ;
typedef TYPE_3__ menu_displaylist_info_t ;
typedef int menu_displaylist_ctx_entry_t ;


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
 int VAR_26 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int ,char*,char*,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 void* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

__attribute__((used)) static bool FUNC_11(
      const char *VAR_27,
      menu_displaylist_ctx_entry_t *VAR_28,
      menu_displaylist_info_t *VAR_29)
{
   if (FUNC_10(VAR_27, FUNC_6(VAR_15)))
   {
      if (FUNC_3(VAR_3, VAR_29))
         return 1;
   }
   else if (FUNC_10(VAR_27, FUNC_6(VAR_14)))
   {
      if (FUNC_3(VAR_2, VAR_29))
         return 1;
   }
   else if (FUNC_10(VAR_27, FUNC_6(VAR_21)))
   {
      if (FUNC_3(VAR_9, VAR_29))
         return 1;
   }
   else if (FUNC_10(VAR_27, FUNC_6(VAR_13)))
   {
      if (FUNC_3(VAR_0, VAR_29))
         return 1;
   }
   else if (FUNC_10(VAR_27, FUNC_6(VAR_18)))
   {
      FUNC_1();
      VAR_29->type = 42;

      if (!FUNC_9(VAR_29->exts))
         FUNC_2(VAR_29->exts);
      if (!FUNC_9(VAR_29->label))
         FUNC_2(VAR_29->label);

      VAR_29->exts = FUNC_8("lpl");
      VAR_29->label = FUNC_8(
            FUNC_6(VAR_20));

      FUNC_5(VAR_11, VAR_29->list);
      FUNC_3(VAR_6, VAR_29);
      return 1;
   }
   else if (FUNC_10(VAR_27, FUNC_6(VAR_24)))
   {
      FUNC_1();
      VAR_29->type = 42;

      if (!FUNC_9(VAR_29->exts))
         FUNC_2(VAR_29->exts);
      if (!FUNC_9(VAR_29->label))
         FUNC_2(VAR_29->label);

      VAR_29->exts = FUNC_8("lpl");
      VAR_29->label = FUNC_8(
            FUNC_6(VAR_20));

      FUNC_5(VAR_11, VAR_29->list);
      FUNC_3(VAR_10, VAR_29);
      return 1;
   }
   else if (FUNC_10(VAR_27, FUNC_6(VAR_17)))
   {
      FUNC_1();
      VAR_29->type = 42;

      if (!FUNC_9(VAR_29->exts))
         FUNC_2(VAR_29->exts);
      if (!FUNC_9(VAR_29->label))
         FUNC_2(VAR_29->label);

      VAR_29->exts = FUNC_8("lpl");
      VAR_29->label = FUNC_8(
            FUNC_6(VAR_20));

      FUNC_5(VAR_11, VAR_29->list);
      FUNC_3(VAR_5, VAR_29);
      return 1;
   }
   else if (FUNC_10(VAR_27, FUNC_6(VAR_20)))
   {
      settings_t *VAR_30 = FUNC_0();

      FUNC_1();
      VAR_29->type = 42;

      if (!FUNC_9(VAR_29->exts))
         FUNC_2(VAR_29->exts);
      if (!FUNC_9(VAR_29->label))
         FUNC_2(VAR_29->label);

      VAR_29->exts = FUNC_8("lpl");
      VAR_29->label = FUNC_8(
            FUNC_6(VAR_20));

      if (FUNC_9(VAR_30->paths.directory_playlist))
      {
         FUNC_5(VAR_11, VAR_29->list);
         VAR_29->need_refresh = 1;
         VAR_29->need_push_no_playlist_entries = 1;
         VAR_29->need_push = 1;

         return 1;
      }
      else
      {
         if (!FUNC_9(VAR_29->path))
            FUNC_2(VAR_29->path);

         VAR_29->path = FUNC_8(VAR_30->paths.directory_playlist);

         if (FUNC_3(
                  VAR_1, VAR_29))
            return 1;
      }
   }
   else if (FUNC_10(VAR_27, FUNC_6(VAR_12)))
   {
      if (FUNC_3(VAR_8, VAR_29))
         return 1;
   }
   else if (FUNC_10(VAR_27, FUNC_6(VAR_19)))
   {
      if (FUNC_3(VAR_7, VAR_29))
         return 1;
   }
   else if (FUNC_10(VAR_27, FUNC_6(VAR_16)))
   {
      if (FUNC_3(VAR_4, VAR_29))
         return 1;
   }

   return 0;
}
