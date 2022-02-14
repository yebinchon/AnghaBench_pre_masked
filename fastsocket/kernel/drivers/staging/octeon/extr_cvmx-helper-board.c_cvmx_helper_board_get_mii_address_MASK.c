
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int board_type; } ;
 int FUNC_0 (char*,int) ;
 TYPE_1__* FUNC_1 () ;

int FUNC_2(int VAR_0)
{
 switch (FUNC_1()->board_type) {
 case 129:

  return -1;
 case 137:
 case 135:
 case 128:
 case 131:

  if ((VAR_0 >= 16) && (VAR_0 < 20))
   return VAR_0 - 16;
  else
   return -1;
 case 133:
 case 143:
 case 134:
 case 147:
 case 148:
 case 146:




  if (VAR_0 == 0)
   return 4;
  else if (VAR_0 == 1)
   return 9;
  else
   return -1;
 case 132:

  if ((VAR_0 >= 0) && (VAR_0 < 4))
   return VAR_0;
  else if ((VAR_0 >= 16) && (VAR_0 < 20))
   return VAR_0 - 16 + 4;
  else
   return -1;
 case 144:

  return -1;
 case 142:
 case 141:
 case 136:




  if ((VAR_0 >= 0) && (VAR_0 < 4))
   return VAR_0 + 2;
  else
   return -1;
 case 140:
 case 139:
 case 138:




  if ((VAR_0 >= 0) && (VAR_0 < 4))
   return VAR_0 + 1;
  else
   return -1;
 case 145:
  if (VAR_0 == 2)
   return 4;
  else
   return -1;
 case 130:

  if ((VAR_0 >= 16) && (VAR_0 < 20))
   return VAR_0 - 16 + 1;
  else
   return -1;
 case 149:




  return -1;
 }


 FUNC_0
     ("cvmx_helper_board_get_mii_address: Unknown board type %d\n",
      FUNC_1()->board_type);
 return -1;
}
