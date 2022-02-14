
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* list; } ;
struct TYPE_5__ {TYPE_1__ textures; } ;
typedef TYPE_2__ materialui_handle_t ;
typedef enum msg_file_type { ____Placeholder_msg_file_type } msg_file_type ;
typedef enum materialui_entry_value_type { ____Placeholder_materialui_entry_value_type } materialui_entry_value_type ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,int ) ;

enum materialui_entry_value_type FUNC_3(
      materialui_handle_t *VAR_13,
      const char *VAR_14, bool VAR_15,
      unsigned VAR_16, enum msg_file_type VAR_17)
{
   enum materialui_entry_value_type VAR_18 = VAR_7;


   if (!FUNC_1(VAR_14))
   {

      if (FUNC_2(VAR_14, FUNC_0(VAR_0)) ||
          FUNC_2(VAR_14, FUNC_0(VAR_2)))
      {
         if (VAR_13->textures.list[VAR_11])
            VAR_18 = VAR_8;
         else
            VAR_18 = VAR_10;
      }

      else if (FUNC_2(VAR_14, FUNC_0(VAR_1)) ||
               FUNC_2(VAR_14, FUNC_0(VAR_3)))
      {
         if (VAR_13->textures.list[VAR_12])
            VAR_18 = VAR_9;
         else
            VAR_18 = VAR_10;
      }

      else
      {
         switch (VAR_17)
         {
            case 133:
            case 139:
            case 132:
            case 138:
            case 135:
            case 128:
            case 137:
            case 129:
            case 136:
            case 130:
            case 134:
            case 131:
               break;
            default:
               VAR_18 = VAR_10;
               break;
         }
      }
   }



   if (VAR_15 &&
       ((VAR_16 >= VAR_4) &&
        (VAR_16 <= VAR_5)))
      VAR_18 = VAR_6;

   return VAR_18;
}
