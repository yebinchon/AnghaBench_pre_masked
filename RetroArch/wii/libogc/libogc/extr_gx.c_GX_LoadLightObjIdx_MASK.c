
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int U8; int U32; } ;
 int FUNC_0 (int,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(u32 VAR_1,u8 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = 0;

 switch(VAR_2) {
  case 135:
   VAR_4 = 0;
   break;
  case 134:
   VAR_4 = 1;
   break;
  case 133:
   VAR_4 = 2;
   break;
  case 132:
   VAR_4 = 3;
   break;
  case 131:
   VAR_4 = 4;
   break;
  case 130:
   VAR_4 = 5;
   break;
  case 129:
   VAR_4 = 6;
   break;
  case 128:
   VAR_4 = 7;
   break;
  default:
   VAR_4 = 0;
   break;

 }

 VAR_3 = 0xf600|(FUNC_0(VAR_4,4,8));
 VAR_3 = (VAR_3&~0xffff0000)|(FUNC_0(VAR_1,16,16));

 VAR_0->U8 = 0x38;
 VAR_0->U32 = VAR_3;
}
