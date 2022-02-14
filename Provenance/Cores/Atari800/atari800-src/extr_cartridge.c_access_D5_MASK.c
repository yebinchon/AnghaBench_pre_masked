
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UWORD ;
struct TYPE_6__ {int state; int type; } ;
typedef TYPE_1__ CARTRIDGE_image_t ;
 TYPE_1__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_1(CARTRIDGE_image_t *VAR_5, UWORD VAR_6, int *VAR_7)
{
 int VAR_8 = VAR_5->state;
 int VAR_9;

 switch (VAR_5->type) {
 case 139:






  if (VAR_6 & 0x08)
   VAR_9 = -1;
  else
   switch (VAR_6 & 0x07) {
   case 0x00:

    VAR_9 = 0;
    break;
   case 0x01:


    VAR_9 = 0xff;
    break;
   case 0x03:
   case 0x07:

    VAR_9 = 1;
    break;
   case 0x04:

    VAR_9 = 2;
    break;
   case 0x05:


    VAR_9 = 0xff;
    break;
   default:

    VAR_9 = 0xff;
    break;
   }
  break;
 case 138:







  if (VAR_6 & 0x08)
   VAR_9 = -1;
  else
   switch (VAR_6 & 0x07) {
   case 0x00:

    VAR_9 = 0;
    break;
   case 0x01:


    VAR_9 = 0xff;
    break;
   case 0x03:
   case 0x07:

    VAR_9 = 2;
    break;
   case 0x04:

    VAR_9 = 1;
    break;
   case 0x05:


    VAR_9 = 0xff;
    break;
   default:

    VAR_9 = 0xff;
    break;
   }
  break;
 case 143:
  VAR_9 = VAR_6 & 0x03;
  break;
 case 128:
  VAR_9 = VAR_6 & 0x0f;
  break;
 case 129:
  VAR_9 = VAR_6 & 0x0b;
  break;
 case 141:

  if ((VAR_6 & 0xf0) != 0x70)
   return VAR_2;
  VAR_9 = ((VAR_6 ^ 7) & 0x0f);
  break;
 case 142:

  if ((VAR_6 & 0xf0) != 0xd0)
   return VAR_2;
  VAR_9 = ((VAR_6 ^ 7) & 0x0f);
  break;
 case 133:
 case 147:

  if ((VAR_6 & 0xf0) != 0xe0)
   return VAR_2;
  if (VAR_6 & 0x08)
   VAR_9 = VAR_6 & 0x0c;
  else

   VAR_9 = ((VAR_6 ^ 0x07) & 0x0f);
  if (VAR_5 == &VAR_0) {

   if ((VAR_8 & 0x0c) == 0x08) {
    if ((VAR_9 & 0x0c) != 0x08) {
     VAR_4 = &VAR_0;
     FUNC_0();
    }
   }
   else if ((VAR_9 & 0x0c) == 0x08) {
    VAR_4 = &VAR_1;
    FUNC_0();
   }
  }
  break;
 case 134:
 case 148:

  if ((VAR_6 & 0xe0) != 0xe0)
   return VAR_2;
  if (VAR_6 & 0x08)
   VAR_9 = VAR_6 & 0x0c;
  else

   VAR_9 = ((VAR_6 ^ 0x17) & 0x1f);
  if (VAR_5 == &VAR_0) {

   if ((VAR_8 & 0x0c) == 0x08) {
    if ((VAR_9 & 0x0c) != 0x08) {
     VAR_4 = &VAR_0;
     FUNC_0();
    }
   }
   else if ((VAR_9 & 0x0c) == 0x08) {
    VAR_4 = &VAR_1;
    FUNC_0();
   }
  }
  break;
 case 136:
  switch (VAR_6 & 0x09) {
  case 0x00:
   VAR_9 = 1;
   break;
  case 0x01:
   VAR_9 = 3;
   break;
  case 0x08:
   VAR_9 = -1;
   break;
  default:
   VAR_9 = 2;
   break;
  }
  break;
 case 144:
 case 135:
 case 146:

  VAR_9 = 1;
  break;
 case 149:

  if ((VAR_6 & 0xe0) != 0)
   return VAR_2;

 case 132:
  VAR_9 = VAR_6 & 0x1f;
  break;
 case 131:
  VAR_9 = VAR_6 & 0x17;
  break;
 case 150:
 case 140:
  VAR_9 = VAR_6;
  break;
 case 137:
  switch (VAR_6 & 0x09) {
  case 0x00:
  case 0x01:
   VAR_9 = 1;
   break;
  case 0x08:
   VAR_9 = -1;
   break;
  default:
   VAR_9 = 0;
   break;
  }
  break;
 case 130:
  VAR_9 = (VAR_8 + 1) % 5;
  break;
 case 145:
  if (VAR_8 < 4)
   VAR_9 = VAR_8 + 1;
  break;
 default:

  return VAR_2;
 }
 *VAR_7 = VAR_9;
 return VAR_3;
}
