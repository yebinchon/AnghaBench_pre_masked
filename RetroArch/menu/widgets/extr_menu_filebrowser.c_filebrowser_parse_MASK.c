
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct string_list {size_t size; TYPE_4__* elems; } ;
struct retro_subsystem_info {size_t num_roms; TYPE_2__* roms; } ;
struct TYPE_16__ {int menu_navigation_browser_filter_supported_extensions_enable; scalar_t__ multimedia_builtin_imageviewer_enable; scalar_t__ multimedia_builtin_mediaplayer_enable; int show_hidden_files; } ;
struct TYPE_17__ {TYPE_5__ bools; } ;
typedef TYPE_6__ settings_t ;
struct TYPE_12__ {struct retro_subsystem_info* data; } ;
struct TYPE_18__ {TYPE_1__ subsystem; } ;
typedef TYPE_7__ rarch_system_info_t ;
struct TYPE_19__ {char* path; scalar_t__ type_default; int list; int * exts; int label; } ;
typedef TYPE_8__ menu_displaylist_info_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;
typedef enum msg_file_type { ____Placeholder_msg_file_type } msg_file_type ;
typedef enum menu_displaylist_ctl_state { ____Placeholder_menu_displaylist_ctl_state } menu_displaylist_ctl_state ;
struct TYPE_14__ {int i; } ;
struct TYPE_15__ {char* data; TYPE_3__ attr; } ;
struct TYPE_13__ {int * valid_extensions; } ;



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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
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
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;




 int VAR_34 ;


 TYPE_6__* FUNC_0 () ;
 int FUNC_1 () ;
 size_t FUNC_2 () ;
 struct string_list* FUNC_3 (char const*,int *,int,int ,int,int) ;
 int FUNC_4 (struct string_list*,int) ;
 struct string_list* FUNC_5 (char const*,int *) ;
 int VAR_35 ;
 int FUNC_6 (int ,char const*,char const*,int,int,int ,int ) ;
 int FUNC_7 (int ,char const*,char const*,int,int ,int ,int ) ;
 char const* FUNC_8 (int) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char const*) ;
 TYPE_7__* FUNC_12 () ;
 int FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (int ,char const*) ;
 int FUNC_15 (struct string_list*) ;
 scalar_t__ VAR_36 ;
 struct retro_subsystem_info* VAR_37 ;

void FUNC_16(menu_displaylist_info_t *VAR_38, unsigned VAR_39)
{
   size_t VAR_40, VAR_41;
   struct string_list *VAR_42 = ((void*)0);
   unsigned VAR_43 = 0;
   unsigned VAR_44 = 0;
   unsigned VAR_45 = 0;
   settings_t *VAR_46 = FUNC_0();
   enum menu_displaylist_ctl_state VAR_47 = (enum menu_displaylist_ctl_state)
                                          VAR_39;
   const char *VAR_48 = VAR_38 ? VAR_38->path : ((void*)0);
   bool VAR_49 = !FUNC_13(VAR_48)
      ? FUNC_10(VAR_48) : 0;
   bool VAR_50 =
      VAR_46->bools.menu_navigation_browser_filter_supported_extensions_enable;

   rarch_system_info_t *VAR_51 = FUNC_12();
   const struct retro_subsystem_info *VAR_52;


   if (VAR_51->subsystem.data)
      VAR_52 = VAR_51->subsystem.data + FUNC_1();

   else
      VAR_52 = VAR_37 + FUNC_1();

   if (VAR_38 && (VAR_38->type_default == VAR_13 ||
                VAR_38->type_default == VAR_12))
      VAR_50 = 1;

   if (VAR_38 && FUNC_14(VAR_38->label,
            FUNC_8(VAR_23)))
      VAR_50 = 0;

   if (VAR_38 && VAR_49)
   {
      if (VAR_35 != VAR_2)
         VAR_42 = FUNC_5(VAR_48, VAR_38->exts);
      else if (VAR_52 && VAR_36 > 0)
         VAR_42 = FUNC_5(VAR_48, VAR_52->roms[FUNC_2()].valid_extensions);
   }
   else if (!FUNC_13(VAR_48))
   {
      if (VAR_35 == VAR_2)
      {
         if (VAR_52 && VAR_36 > 0 && FUNC_2() < VAR_52->num_roms)
            VAR_42 = FUNC_3(VAR_48,
                  (VAR_50 && VAR_38) ? VAR_52->roms[FUNC_2()].valid_extensions : ((void*)0),
                  1, VAR_46->bools.show_hidden_files, 1, 0);
      }
      else
         VAR_42 = FUNC_3(VAR_48,
               (VAR_50 && VAR_38) ? VAR_38->exts : ((void*)0),
               1, VAR_46->bools.show_hidden_files, 1, 0);
   }

   switch (VAR_35)
   {
      case 141:
         break;
      case 140:
         if (VAR_38)
            FUNC_7(VAR_38->list,
                  FUNC_8(VAR_31),
                  FUNC_8(VAR_25),
                  VAR_25,
                  VAR_14, 0 ,0);
         break;
      default:
         break;
   }

   if (!VAR_42)
   {
      const char *VAR_53 = VAR_49
         ? FUNC_8(VAR_30)
         : FUNC_8(VAR_26);

      if (VAR_38)
         FUNC_6(VAR_38->list, VAR_53, "",
               VAR_26, 0, 0, 0);
      goto end;
   }

   FUNC_4(VAR_42, 1);

   VAR_41 = VAR_42->size;

   if (VAR_41 == 0)
   {
      FUNC_15(VAR_42);
      VAR_42 = ((void*)0);
   }
   else
   {
      for (VAR_40 = 0; VAR_40 < VAR_41; VAR_40++)
      {
         char VAR_54[64];
         bool VAR_55 = 0;
         enum msg_hash_enums VAR_56 = VAR_33;
         enum msg_file_type VAR_57 = VAR_8;
         const char *VAR_58 = VAR_42->elems[VAR_40].data;

         VAR_54[0] = '\0';

         switch (VAR_42->elems[VAR_40].attr.i)
         {
            case 129:
               VAR_57 = 139;
               break;
            case 133:
               VAR_57 = VAR_5;
               break;
            case 132:
               VAR_57 = VAR_7;
               break;
            case 128:
            default:
               if (VAR_35 == VAR_3)
                  VAR_57 = VAR_6;
               else
                  VAR_57 = (enum msg_file_type)VAR_38->type_default;
               switch (VAR_47)
               {



                  case 142:
                     if (FUNC_10(VAR_58))
                        VAR_57 = VAR_5;
                     break;
                  default:
                     break;
               }
               break;
         }

         VAR_55 = (VAR_57 == 139);

         if (!VAR_55)
         {
            if (VAR_35 == 140)
               continue;
            if (VAR_35 == 141)
               continue;
         }



         if (!FUNC_13(VAR_58) && !VAR_49)
            VAR_58 = FUNC_9(VAR_58);

         if (VAR_35 == VAR_1)
         {
            if (VAR_55)
               VAR_57 = 139;
            else
               VAR_57 = VAR_10;
         }

         if (!VAR_55 && FUNC_11(VAR_58) == VAR_34)
            VAR_57 = 135;
         else if (!VAR_55 &&
               (VAR_46->bools.multimedia_builtin_mediaplayer_enable ||
                VAR_46->bools.multimedia_builtin_imageviewer_enable))
         {
            switch (FUNC_11(VAR_58))
            {
               case 130:




                  break;
               case 131:







                  if (VAR_35 == VAR_4)
                     VAR_57 = 138;
                  break;
               default:
                  break;
            }
         }

         switch (VAR_57)
         {
            case 134:



               VAR_44++;
               break;
            case 136:
               VAR_56 = VAR_18;
               VAR_44++;
               break;
            case 135:
               VAR_56 = VAR_19;
               VAR_44++;
               break;
            case 138:
               VAR_56 = VAR_16;
               VAR_44++;
               break;
            case 137:
               VAR_56 = VAR_17;
               VAR_44++;
               break;
            case 139:
               VAR_56 = VAR_15;
               VAR_45++;
               break;
            default:
               break;
         }

         VAR_43++;
         FUNC_6(VAR_38->list, VAR_58, VAR_54,
               VAR_56,
               VAR_57, 0, 0);
      }
   }

   if (VAR_42 && VAR_42->size > 0)
      FUNC_15(VAR_42);

   if (VAR_43 == 0)
   {
      FUNC_6(VAR_38->list,
            FUNC_8(VAR_27),
            FUNC_8(VAR_21),
            VAR_21,
            VAR_32, 0, 0);
   }

end:
   if (VAR_38 && !VAR_49)
      FUNC_7(VAR_38->list,
            FUNC_8(VAR_28),
            VAR_48,
            VAR_22,
            VAR_9, 0, 0);
}
