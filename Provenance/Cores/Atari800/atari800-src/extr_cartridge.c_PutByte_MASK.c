
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UWORD ;
typedef int UBYTE ;
struct TYPE_6__ {int state; int type; } ;
typedef TYPE_1__ CARTRIDGE_image_t ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,int*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_3(CARTRIDGE_image_t *VAR_3, UWORD VAR_4, UBYTE VAR_5)
{
 int VAR_6 = VAR_3->state;
 int VAR_7 = VAR_6;






 switch (VAR_3->type) {
 case 130:
  VAR_7 = VAR_5 & 0x03;
  break;
 case 134:
  VAR_7 = VAR_5 & 0x07;
  break;
 case 132:
 case 128:
  VAR_7 = VAR_5 & 0x0f;
  break;
 case 131:
  VAR_7 = VAR_5 & 0x1f;
  break;
 case 129:
  VAR_7 = VAR_5 & 0x3f;
  break;
 case 133:
  VAR_7 = VAR_5 & 0x7f;
  break;
 case 153:
  VAR_7 = VAR_5 & 0x80;
  break;
 case 150:
  VAR_7 = VAR_5 & 0x81;
  break;
 case 147:
 case 140:
  VAR_7 = VAR_5 & 0x83;
  break;
 case 154:
 case 138:
  VAR_7 = VAR_5 & 0x87;
  break;
 case 151:
 case 142:
 case 156:
  VAR_7 = VAR_5 & 0x8f;
  break;
 case 148:
 case 141:
  VAR_7 = VAR_5 & 0x9f;
  break;
 case 155:
 case 139:
  VAR_7 = VAR_5 & 0xbf;
  break;
 case 152:
 case 143:
  VAR_7 = VAR_5;
  break;
 case 157:

  VAR_7 = (VAR_6 + 0x100) & 0x7fff;
  break;
 case 144:
 case 145:
 case 146:
 case 149:

  if ((VAR_4 & 0xe0) == 0x00)
   VAR_7 = VAR_5;
  break;
 case 137:
 case 136:
 case 135:
  switch (VAR_4) {
  case 0xd5a0:
   VAR_7 = (VAR_6 & 0x3f00) | VAR_5;
   break;
  case 0xd5a1:
   VAR_7 = (VAR_6 & 0x00ff) | ((VAR_5 & 0x3f) << 8);
   break;
  case 0xd5a2:
   VAR_7 = (VAR_6 & 0x3fff) | ((~VAR_5 & 0x01) << 14);
   break;
  }
  break;
 default:

  if (!FUNC_2(VAR_3, VAR_4, &VAR_7))


   return;
 }


 if (VAR_7 != VAR_6) {
  VAR_3->state = VAR_7;
  if (VAR_3 == VAR_2)
   FUNC_1(VAR_6);
 }
}
