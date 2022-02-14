
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int enum_idx; } ;
typedef TYPE_1__ menu_file_list_cbs_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_1(menu_file_list_cbs_t *VAR_9,
      const char *VAR_10, const char *VAR_11, unsigned VAR_12, size_t VAR_13)
{
   if (!VAR_9)
      return -1;

   FUNC_0(VAR_9, VAR_4);

   if (VAR_9->enum_idx != VAR_0)
   {
      switch (VAR_9->enum_idx)
      {
         case 134:
            FUNC_0(VAR_9, VAR_6);
            break;
         case 133:
            FUNC_0(VAR_9, VAR_6);
            break;
         case 135:
            FUNC_0(VAR_9, VAR_2);
            break;
         case 129:
            FUNC_0(VAR_9, VAR_5);
            break;
         case 128:
            FUNC_0(VAR_9, VAR_8);
            break;
         case 131:
            FUNC_0(VAR_9, VAR_1);
            break;
         case 130:
            FUNC_0(VAR_9, VAR_3);
            break;
         case 132:
            FUNC_0(VAR_9, VAR_7);
            break;
         default:
            break;
      }
   }

   return -1;
}
