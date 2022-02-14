
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* tevRasOrder; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(u8 VAR_1,u8 VAR_2,u8 VAR_3)
{
 switch(VAR_1) {
  case 131:
   VAR_0->tevRasOrder[0] = (VAR_0->tevRasOrder[0]&~0x0f)|(VAR_2&0x0f);
   VAR_0->tevRasOrder[0] = (VAR_0->tevRasOrder[0]&~0xF0)|(FUNC_1(VAR_3,4,4));
   FUNC_0(VAR_0->tevRasOrder[0]);
   break;
  case 130:
   VAR_0->tevRasOrder[0] = (VAR_0->tevRasOrder[0]&~0xF00)|(FUNC_1(VAR_2,8,4));
   VAR_0->tevRasOrder[0] = (VAR_0->tevRasOrder[0]&~0xF000)|(FUNC_1(VAR_3,12,4));
   FUNC_0(VAR_0->tevRasOrder[0]);
   break;
  case 129:
   VAR_0->tevRasOrder[1] = (VAR_0->tevRasOrder[1]&~0x0f)|(VAR_2&0x0f);
   VAR_0->tevRasOrder[1] = (VAR_0->tevRasOrder[1]&~0xF0)|(FUNC_1(VAR_3,4,4));
   FUNC_0(VAR_0->tevRasOrder[1]);
   break;
  case 128:
   VAR_0->tevRasOrder[1] = (VAR_0->tevRasOrder[1]&~0xF00)|(FUNC_1(VAR_2,8,4));
   VAR_0->tevRasOrder[1] = (VAR_0->tevRasOrder[1]&~0xF000)|(FUNC_1(VAR_3,12,4));
   FUNC_0(VAR_0->tevRasOrder[1]);
   break;
 }
}
