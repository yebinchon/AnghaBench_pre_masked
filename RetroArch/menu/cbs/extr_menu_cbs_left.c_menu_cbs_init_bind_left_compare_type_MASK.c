
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int menu_file_list_cbs_t ;


 int FUNC_0 (int *,int ) ;
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

 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;


 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;


 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_1 (int ) ;
 int VAR_32 ;
 int FUNC_2 (char const*,int ) ;

__attribute__((used)) static int FUNC_3(menu_file_list_cbs_t *VAR_33,
      unsigned VAR_34, const char *VAR_35)
{
   if (VAR_34 >= VAR_12
         && VAR_34 <= VAR_13)
   {
      FUNC_0(VAR_33, VAR_24);
   }
   else if (VAR_34 >= VAR_16
         && VAR_34 <= VAR_17)
   {
      FUNC_0(VAR_33, VAR_25);
   }
   else if (VAR_34 >= VAR_18
      && VAR_34 <= VAR_19)
   {
      FUNC_0(VAR_33, VAR_26);
   }
   else if ((VAR_34 >= VAR_15) &&
            (VAR_34 < VAR_14))
   {
      FUNC_0(VAR_33, VAR_30);
   }
   else
   {
      switch (VAR_34)
      {
         case 131:
            FUNC_0(VAR_33, VAR_31);
            break;
         case 145:
         case 157:
         case 163:
         case 149:
         case 159:
         case 142:
         case 141:
         case 139:
         case 158:
         case 137:
         case 136:
         case 151:
         case 146:



         case 134:
         case 164:
         case 161:
         case 135:
         case 143:
         case 132:
         case 156:
         case 162:
         case 140:
         case 148:
         case 147:
         case 150:
         case 144:
         case 155:
         case 154:
         case 153:
         case 138:
         case 152:
         case 128:
         case 130:
            if ( FUNC_2(VAR_35, FUNC_1(VAR_2)) ||
                  FUNC_2(VAR_35, FUNC_1(VAR_1)) ||
                  FUNC_2(VAR_35, FUNC_1(VAR_7)) ||
                  FUNC_2(VAR_35, FUNC_1(VAR_0)) ||
                  FUNC_2(VAR_35, FUNC_1(VAR_6)) ||
                  FUNC_2(VAR_35, FUNC_1(VAR_5)) ||
                  FUNC_2(VAR_35, FUNC_1(VAR_4)) ||
                  FUNC_2(VAR_35, FUNC_1(VAR_9)) ||
                  FUNC_2(VAR_35, FUNC_1(VAR_3)) ||
                  FUNC_2(VAR_35, FUNC_1(VAR_8))
                  )
            {
               FUNC_0(VAR_33, VAR_27);
               break;
            }
            FUNC_0(VAR_33, VAR_28);
            break;
         case 129:
         case 160:
            FUNC_0(VAR_33, VAR_27);
            break;
         default:
            return -1;
      }
   }

   return 0;
}
