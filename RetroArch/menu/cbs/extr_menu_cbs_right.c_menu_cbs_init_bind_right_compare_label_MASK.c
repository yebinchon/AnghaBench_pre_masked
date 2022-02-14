
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
 int VAR_25 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int,char*,unsigned int) ;
 scalar_t__ FUNC_5 (char const*,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(menu_file_list_cbs_t *VAR_30,
      const char *VAR_31, uint32_t VAR_32, const char *VAR_33)
{

   if (VAR_30->setting)
   {
      const char *VAR_34 = VAR_30->setting->parent_group;

      if (FUNC_5(VAR_34, FUNC_2(VAR_6))
               && (FUNC_3(VAR_30->setting) == VAR_13))
      {
         FUNC_0(VAR_30, VAR_17);
         return 0;
      }
   }

   if (FUNC_6(VAR_31, "input_player") && FUNC_6(VAR_31, "_joypad_index"))
   {
      unsigned VAR_35;
      for (VAR_35 = 0; VAR_35 < VAR_0; VAR_35++)
      {
         uint32_t VAR_36;
         char VAR_37[128];

         VAR_37[0] = '\0';

         FUNC_4(VAR_37, sizeof(VAR_37), "input_player%d_joypad_index", VAR_35 + 1);
         VAR_36 = FUNC_1(VAR_37);

         if (VAR_32 != VAR_36)
            continue;

         FUNC_0(VAR_30, VAR_25);
         return 0;
      }
   }

   if (FUNC_5(VAR_33, FUNC_2(VAR_9)))
   {
      FUNC_0(VAR_30, VAR_16);
      return 0;
   }

   if (FUNC_6(VAR_31, "rdb_entry") || FUNC_6(VAR_31, "content_info"))
   {
      FUNC_0(VAR_30, VAR_17);
   }
   else
   {
      if (VAR_30->enum_idx != VAR_12)
      {
         switch (VAR_30->enum_idx)
         {
            case 135:
            case 134:
            case 147:
               FUNC_0(VAR_30, VAR_16);
               break;
            case 149:
               FUNC_0(VAR_30, VAR_14);
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
               FUNC_0(VAR_30, VAR_15);
               break;
            case 138:
               FUNC_0(VAR_30, VAR_24);
               break;
            case 143:
            case 146:
               FUNC_0(VAR_30, VAR_17);
               break;
            case 145:
            case 144:
               if (
                     FUNC_5(VAR_33, FUNC_2(VAR_3)) ||
                     FUNC_5(VAR_33, FUNC_2(VAR_2)) ||
                     FUNC_5(VAR_33, FUNC_2(VAR_6)) ||
                     FUNC_5(VAR_33, FUNC_2(VAR_9)) ||
                     FUNC_5(VAR_33, FUNC_2(VAR_7)) ||
                     FUNC_5(VAR_33, FUNC_2(VAR_5)) ||
                     FUNC_5(VAR_33, FUNC_2(VAR_11)) ||
                     FUNC_5(VAR_33, FUNC_2(VAR_4))
                  )
               {
                  FUNC_0(VAR_30, VAR_16);
               }
               else
               {
                  FUNC_0(VAR_30, VAR_17);
               }
               break;
            case 136:
            case 133:
               if ( FUNC_5(VAR_33, FUNC_2(VAR_3)) ||
                     FUNC_5(VAR_33, FUNC_2(VAR_2)) ||
                     FUNC_5(VAR_33, FUNC_2(VAR_9)) ||
                     FUNC_5(VAR_33, FUNC_2(VAR_1)) ||
                     FUNC_5(VAR_33, FUNC_2(VAR_8)) ||
                     FUNC_5(VAR_33, FUNC_2(VAR_7)) ||
                     FUNC_5(VAR_33, FUNC_2(VAR_5)) ||
                     FUNC_5(VAR_33, FUNC_2(VAR_11)) ||
                     FUNC_5(VAR_33, FUNC_2(VAR_4)) ||
                     FUNC_5(VAR_33, FUNC_2(VAR_10))
                  )
               {
                  FUNC_0(VAR_30, VAR_16);
                  break;
               }
            case 132:
               FUNC_0(VAR_30, VAR_23);
               break;
            case 142:
               FUNC_0(VAR_30, VAR_26);
               break;
            case 141:
               FUNC_0(VAR_30, VAR_27);
               break;
            case 139:
               FUNC_0(VAR_30, VAR_29);
               break;
            case 140:
               FUNC_0(VAR_30, VAR_28);
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
