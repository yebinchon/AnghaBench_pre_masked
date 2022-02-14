
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int enum_idx; scalar_t__ setting; } ;
typedef TYPE_1__ menu_file_list_cbs_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,int ) ;



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
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,unsigned int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

int FUNC_6(menu_file_list_cbs_t *VAR_24,
      const char *VAR_25, const char *VAR_26, unsigned VAR_27, size_t VAR_28)
{
   if (!VAR_24)
      return -1;

   if (FUNC_5(VAR_26, "joypad_index") && FUNC_5(VAR_26, "input_player"))
   {
      FUNC_0(VAR_24, VAR_9);
      return 0;
   }






   if (VAR_24->enum_idx != VAR_8)
   {
      switch (VAR_24->enum_idx)
      {
         case 137:
            FUNC_0(VAR_24,
                  VAR_12);
            return 0;
         case 136:
            FUNC_0(VAR_24,
                  VAR_13);
            return 0;
         case 138:
            FUNC_0(VAR_24,
                  VAR_11);
            return 0;
         case 134:
            FUNC_0(VAR_24,
               VAR_15);
            return 0;
         case 135:
            FUNC_0(VAR_24,
               VAR_14);
            return 0;
         case 133:
         case 131:
            FUNC_0(VAR_24,
                  VAR_17);
            return 0;
         case 140:
            FUNC_0(VAR_24,
                  VAR_10);
            return 0;
         case 139:
            FUNC_0(VAR_24,
                  VAR_10);
            return 0;
         case 132:




            return 0;
         default:
            break;
      }
   }

   if (VAR_24->setting)
   {
      switch (FUNC_4(VAR_24->setting))
      {
         case 130:
            FUNC_0(VAR_24,
                  VAR_19);
            return 0;
         case 128:
            FUNC_0(VAR_24,
                  VAR_21);
            return 0;
         case 129:
            FUNC_0(VAR_24,
                  VAR_20);
            return 0;
         default:
            break;
      }
   }

   if ((VAR_27 >= VAR_1) &&
       (VAR_27 < VAR_0))
   {
      FUNC_0(VAR_24,
         VAR_16);
      return 0;
   }
   if (FUNC_2(VAR_24) == 0)
      return 0;

   if (FUNC_3(VAR_24, VAR_27) == 0)
      return 0;

   return -1;
}
