
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct radeon_device {int bios_header_start; int bios; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef enum radeon_combios_table_offset { ____Placeholder_radeon_combios_table_offset } radeon_combios_table_offset ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static uint16_t FUNC_2(struct drm_device *VAR_0,
      enum radeon_combios_table_offset VAR_1)
{
 struct radeon_device *VAR_2 = VAR_0->dev_private;
 int VAR_3;
 uint16_t VAR_4 = 0, VAR_5;

 if (!VAR_2->bios)
  return 0;

 switch (VAR_1) {

 case 172:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0xc);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 167:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x14);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 162:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x2a);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 147:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x2c);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 164:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x2e);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 139:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x30);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 129:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x32);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 160:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x34);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 152:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x36);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 142:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x38);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 128:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x3e);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 148:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x40);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 143:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x42);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 138:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x46);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 145:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x48);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 133:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x4a);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 153:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x4c);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 171:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x4e);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 165:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x50);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 159:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x52);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 134:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x54);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 156:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x58);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 146:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x5a);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 157:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x5c);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 144:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x5e);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 163:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x60);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 150:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x62);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 166:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x64);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 155:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x66);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 140:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x68);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 141:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x6a);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 158:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x6c);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 136:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x6e);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;
 case 151:
  VAR_5 = FUNC_0(VAR_2->bios_header_start + 0x70);
  if (VAR_5)
   VAR_4 = VAR_5;
  break;

 case 170:
  VAR_5 =
      FUNC_2(VAR_0, 144);
  if (VAR_5) {
   VAR_3 = FUNC_1(VAR_5);
   if (VAR_3 > 0) {
    VAR_5 = FUNC_0(VAR_5 + 0x3);
    if (VAR_5)
     VAR_4 = VAR_5;
   }
  }
  break;
 case 169:
  VAR_5 =
      FUNC_2(VAR_0, 144);
  if (VAR_5) {
   VAR_3 = FUNC_1(VAR_5);
   if (VAR_3 > 0) {
    VAR_5 = FUNC_0(VAR_5 + 0x5);
    if (VAR_5)
     VAR_4 = VAR_5;
   }
  }
  break;
 case 161:
  VAR_5 =
      FUNC_2(VAR_0, 144);
  if (VAR_5) {
   VAR_3 = FUNC_1(VAR_5);
   if (VAR_3 > 0) {
    VAR_5 = FUNC_0(VAR_5 + 0x7);
    if (VAR_5)
     VAR_4 = VAR_5;
   }
  }
  break;
 case 168:
  VAR_5 =
      FUNC_2(VAR_0, 144);
  if (VAR_5) {
   VAR_3 = FUNC_1(VAR_5);
   if (VAR_3 == 2) {
    VAR_5 = FUNC_0(VAR_5 + 0x9);
    if (VAR_5)
     VAR_4 = VAR_5;
   }
  }
  break;
 case 135:
  VAR_5 =
      FUNC_2(VAR_0, 145);
  if (VAR_5) {
   while (FUNC_1(VAR_5++));
   VAR_5 += 2;
   if (VAR_5)
    VAR_4 = VAR_5;
  }
  break;
 case 137:
  VAR_5 =
      FUNC_2(VAR_0, 143);
  if (VAR_5) {
   VAR_5 = FUNC_0(VAR_5 + 0x11);
   if (VAR_5)
    VAR_4 = VAR_5;
  }
  break;
 case 154:
  VAR_5 =
      FUNC_2(VAR_0, 143);
  if (VAR_5) {
   VAR_5 = FUNC_0(VAR_5 + 0x13);
   if (VAR_5)
    VAR_4 = VAR_5;
  }
  break;
 case 149:
  VAR_5 =
      FUNC_2(VAR_0, 143);
  if (VAR_5) {
   VAR_5 = FUNC_0(VAR_5 + 0x15);
   if (VAR_5)
    VAR_4 = VAR_5;
  }
  break;
 case 130:
  VAR_5 =
      FUNC_2(VAR_0, 143);
  if (VAR_5) {
   VAR_5 = FUNC_0(VAR_5 + 0x17);
   if (VAR_5)
    VAR_4 = VAR_5;
  }
  break;
 case 131:
  VAR_5 =
      FUNC_2(VAR_0, 130);
  if (VAR_5) {
   VAR_5 = FUNC_0(VAR_5 + 0x2);
   if (VAR_5)
    VAR_4 = VAR_5;
  }
  break;
 case 132:
  VAR_5 =
      FUNC_2(VAR_0, 130);
  if (VAR_5) {
   VAR_5 = FUNC_0(VAR_5 + 0x4);
   if (VAR_5)
    VAR_4 = VAR_5;
  }
  break;
 default:
  break;
 }

 return VAR_4;

}
