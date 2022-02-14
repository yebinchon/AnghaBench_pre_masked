
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int state; int image; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int VAR_10 ;
 int FUNC_7 (int,int,int) ;
 int VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int FUNC_8 (int) ;
 TYPE_1__* VAR_14 ;

__attribute__((used)) static void FUNC_9(void)
{
 if (VAR_4 == VAR_0) {
  FUNC_6(0x4ff6, 0x4ff9);
  FUNC_6(0x5ff6, 0x5ff9);
  switch (VAR_14->type) {
  case 194:
   FUNC_4(0x4000, 0xbfff, VAR_14->image);
   break;
  case 190:
   FUNC_4(0x4000, 0x5fff, VAR_14->image);
   FUNC_4(0x6000, 0x9fff, VAR_14->image);
   FUNC_4(0xa000, 0xbfff, VAR_14->image + 0x2000);
   break;
  case 192:
   FUNC_4(0x4000, 0x4fff, VAR_14->image + (VAR_14->state & 0x03) * 0x1000);
   FUNC_4(0x5000, 0x5fff, VAR_14->image + 0x4000 + ((VAR_14->state & 0x0c) >> 2) * 0x1000);
   FUNC_4(0x8000, 0x9fff, VAR_14->image + 0x8000);
   FUNC_4(0xa000, 0xbfff, VAR_14->image + 0x8000);

   FUNC_5(0x4ff6, 0x4ff9);
   FUNC_5(0x5ff6, 0x5ff9);






   break;
  case 189:
   FUNC_4(0x8000, 0xbfff, VAR_14->image);
   break;
  case 191:
   FUNC_4(0x8000, 0x9fff, VAR_14->image);
   FUNC_4(0xa000, 0xbfff, VAR_14->image);
   break;
  case 193:
   FUNC_4(0x8000, 0x8fff, VAR_14->image);
   FUNC_4(0x9000, 0x9fff, VAR_14->image);
   FUNC_4(0xa000, 0xafff, VAR_14->image);
   FUNC_4(0xb000, 0xbfff, VAR_14->image);
   break;
  default:

   FUNC_7(0x4000, 0, 0x8000);
   break;
  }
 }
 else {
  switch (VAR_14->type) {
  case 151:
   FUNC_0();
   FUNC_3();
   FUNC_7(0xa000, 0xff, 0x1800);
   FUNC_4(0xb800, 0xbfff, VAR_14->image);
   break;
  case 150:
   FUNC_0();
   FUNC_3();
   FUNC_7(0xa000, 0xff, 0x1000);
   FUNC_4(0xb000, 0xbfff, VAR_14->image);
   break;
  case 179:
   FUNC_0();
   FUNC_3();
   FUNC_4(0xa000, 0xafff, VAR_14->image);
   FUNC_4(0xb000, 0xbfff, VAR_14->image);
   break;
  case 149:
  case 160:
   FUNC_0();
   FUNC_3();
   FUNC_4(0xa000, 0xbfff, VAR_14->image);
   break;
  case 175:
   FUNC_1();
   FUNC_2();
   FUNC_4(0x8000, 0x9fff, VAR_14->image);
   break;
  case 152:
  case 181:
   FUNC_1();
   FUNC_3();
   FUNC_4(0x8000, 0xbfff, VAR_14->image);
   break;
  case 164:
  case 163:
   FUNC_0();
   if (VAR_14->state >= 0) {
    FUNC_3();
    FUNC_4(0xb000, 0xbfff, VAR_14->image + 0x3000);
   }
   break;
  case 161:
  case 162:
   FUNC_0();
   if (VAR_14->state >= 0) {
    FUNC_3();
    FUNC_4(0xb000, 0xbfff, VAR_14->image);
   }
   break;
  case 135:
  case 176:
  case 177:
  case 156:
  case 185:
  case 136:
  case 186:
  case 187:
  case 157:
  case 183:
  case 184:
  case 138:
  case 139:
  case 137:
  case 180:
  case 142:
  case 141:
  case 140:
   FUNC_0();
   break;
  case 178:
  case 130:
  case 145:
   if (!(VAR_14->state & 0x80)) {
    FUNC_3();
    FUNC_4(0xa000, 0xbfff, VAR_14->image + 0x6000);
   }
   break;
  case 134:
  case 143:
  case 128:
   if (!(VAR_14->state & 0x80)) {
    FUNC_3();
    FUNC_4(0xa000, 0xbfff, VAR_14->image + 0xe000);
   }
   break;
  case 132:
  case 147:
   if (!(VAR_14->state & 0x80)) {
    FUNC_3();
    FUNC_4(0xa000, 0xbfff, VAR_14->image + 0x1e000);
   }
   break;
  case 131:
  case 146:
   if (!(VAR_14->state & 0x80)) {
    FUNC_3();
    FUNC_4(0xa000, 0xbfff, VAR_14->image + 0x3e000);
   }
   break;
  case 129:
  case 144:
   if (!(VAR_14->state & 0x80)) {
    FUNC_3();
    FUNC_4(0xa000, 0xbfff, VAR_14->image + 0x7e000);
   }
   break;
  case 133:
  case 148:
   if (!(VAR_14->state & 0x80)) {
    FUNC_3();
    FUNC_4(0xa000, 0xbfff, VAR_14->image + 0xfe000);
   }
   break;
  case 182:
   FUNC_1();
   FUNC_3();
   FUNC_4(0x8000, 0x8fff, VAR_14->image + (VAR_14->state & 0x03) * 0x1000);
   FUNC_4(0x9000, 0x9fff, VAR_14->image + 0x4000 + ((VAR_14->state & 0x0c) >> 2) * 0x1000);
   FUNC_4(0xa000, 0xbfff, VAR_14->image + 0x8000);

   FUNC_5(0x8ff6, 0x8ff9);
   FUNC_5(0x9ff6, 0x9ff9);







   return;
  case 159:
   if (VAR_4 == VAR_1) {
    FUNC_1();
    FUNC_7(0x8000, 0xff, 0x1000);
    FUNC_4(0x9000, 0x9fff, VAR_14->image);
    if ((!VAR_3 || VAR_5) && VAR_11) {
     FUNC_3();
     FUNC_4(0xa000, 0xbfff, VAR_10);
    }
    else
     FUNC_2();
   } else {

    FUNC_0();
    FUNC_2();
   }

   return;
  case 158:
   if (VAR_4 == VAR_1) {
    FUNC_1();
    FUNC_4(0x8000, 0x9fff, VAR_14->image);
    if (!VAR_2
        && (!VAR_3 || VAR_5) && VAR_11) {
     FUNC_3();
     FUNC_4(0xa000, 0xbfff, VAR_10);
    }
    else
     FUNC_2();
   } else {

    FUNC_0();
    FUNC_2();
   }

   return;
  case 188:
   {
    int VAR_15;
    FUNC_0();
    FUNC_3();

    for (VAR_15 = 0xa000; VAR_15 < 0xc000; VAR_15 += 0x100)
     FUNC_4(VAR_15, VAR_15 + 0xff, VAR_14->image + (VAR_14->state & 0xffff));
   }
   break;
  case 171:
  case 168:
  case 165:
  case 172:
  case 169:
  case 166:
  case 173:
  case 170:
  case 167:
  case 155:
  case 154:
  case 153:
  case 174:
   break;
  default:
   FUNC_0();
   if (!VAR_2
   && (!VAR_3 || VAR_5) && VAR_11) {
    FUNC_3();
    FUNC_4(0xa000, 0xbfff, VAR_10);
   }
   else
    FUNC_2();

   return;
  }
  FUNC_8(VAR_14->state);
 }
}
