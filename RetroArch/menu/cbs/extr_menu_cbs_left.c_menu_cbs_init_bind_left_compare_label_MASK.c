
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int enum_idx; TYPE_2__* setting; } ;
typedef TYPE_1__ menu_file_list_cbs_t ;
typedef int label_setting ;
struct TYPE_6__ {char* parent_group; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 unsigned int VAR_0 ;
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
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int,char*,unsigned int) ;
 scalar_t__ FUNC_5 (char const*,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(menu_file_list_cbs_t *VAR_29,
      const char *VAR_30, uint32_t VAR_31, const char *VAR_32)
{

   if (VAR_29->setting)
   {
      const char *VAR_33 = VAR_29->setting->parent_group;

      if (FUNC_5(VAR_33, FUNC_2(VAR_6))
               && (FUNC_3(VAR_29->setting) == VAR_13))
      {
         FUNC_0(VAR_29, VAR_15);
         return 0;
      }
   }

   if (FUNC_6(VAR_30, "input_player") && FUNC_6(VAR_30, "_joypad_index"))
   {
      unsigned VAR_34;
      for (VAR_34 = 0; VAR_34 < VAR_0; VAR_34++)
      {
         uint32_t VAR_35;
         char VAR_36[128];

         VAR_36[0] = '\0';

         FUNC_4(VAR_36, sizeof(VAR_36), "input_player%d_joypad_index", VAR_34 + 1);
         VAR_35 = FUNC_1(VAR_36);

         if (VAR_31 != VAR_35)
            continue;

         FUNC_0(VAR_29, VAR_24);
         return 0;
      }
   }

   if (FUNC_5(VAR_32, FUNC_2(VAR_9)))
   {
      FUNC_0(VAR_29, VAR_15);
      return 0;
   }

   if (FUNC_6(VAR_30, "rdb_entry") || FUNC_6(VAR_30, "content_info"))
   {
      FUNC_0(VAR_29, VAR_16);
   }
   else
   {
      if (VAR_29->enum_idx != VAR_12)
      {
         switch (VAR_29->enum_idx)
         {
            case 135:
            case 134:
            case 147:
               FUNC_0(VAR_29, VAR_15);
               break;
            case 128:



               break;
            case 130:



               break;
            case 131:



               break;
            case 137:



               break;
            case 129:



               break;
            case 148:
               FUNC_0(VAR_29, VAR_14);
               break;
            case 138:
               FUNC_0(VAR_29, VAR_23);
               break;
            case 143:
            case 146:
               FUNC_0(VAR_29, VAR_16);
               break;
            case 145:
            case 144:
               if (
                     FUNC_5(VAR_32, FUNC_2(VAR_3)) ||
                     FUNC_5(VAR_32, FUNC_2(VAR_2)) ||
                     FUNC_5(VAR_32, FUNC_2(VAR_6)) ||
                     FUNC_5(VAR_32, FUNC_2(VAR_9)) ||
                     FUNC_5(VAR_32, FUNC_2(VAR_7)) ||
                     FUNC_5(VAR_32, FUNC_2(VAR_5)) ||
                     FUNC_5(VAR_32, FUNC_2(VAR_11)) ||
                     FUNC_5(VAR_32, FUNC_2(VAR_4))
                  )
               {
                  FUNC_0(VAR_29, VAR_15);
               }
               else
               {
                  FUNC_0(VAR_29, VAR_16);
               }
               break;
            case 136:
            case 133:
               if (
                     FUNC_5(VAR_32, FUNC_2(VAR_3)) ||
                     FUNC_5(VAR_32, FUNC_2(VAR_2)) ||
                     FUNC_5(VAR_32, FUNC_2(VAR_9)) ||
                     FUNC_5(VAR_32, FUNC_2(VAR_1)) ||
                     FUNC_5(VAR_32, FUNC_2(VAR_8)) ||
                     FUNC_5(VAR_32, FUNC_2(VAR_7)) ||
                     FUNC_5(VAR_32, FUNC_2(VAR_5)) ||
                     FUNC_5(VAR_32, FUNC_2(VAR_11)) ||
                     FUNC_5(VAR_32, FUNC_2(VAR_4)) ||
                     FUNC_5(VAR_32, FUNC_2(VAR_10))
                  )
               {
                  FUNC_0(VAR_29, VAR_15);
                  break;
               }
            case 132:
               FUNC_0(VAR_29, VAR_22);
               break;
            case 142:
               FUNC_0(VAR_29, VAR_25);
               break;
            case 141:
               FUNC_0(VAR_29, VAR_26);
               break;
            case 139:
               FUNC_0(VAR_29, VAR_28);
               break;
            case 140:
               FUNC_0(VAR_29, VAR_27);
               break;
            default:
               return -1;
         }
      }
      else
      {
         return -1;
      }
   }

   return 0;
}
