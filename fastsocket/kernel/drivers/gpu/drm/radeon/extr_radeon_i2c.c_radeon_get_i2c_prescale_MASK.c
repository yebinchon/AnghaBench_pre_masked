
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int current_sclk; } ;
struct radeon_device {int family; TYPE_1__ pm; } ;
 int FUNC_0 (char*) ;

__attribute__((used)) static u32 FUNC_1(struct radeon_device *VAR_0)
{
 u32 VAR_1 = VAR_0->pm.current_sclk;
 u32 VAR_2 = 0;
 u32 VAR_3;
 u8 VAR_4, VAR_5, VAR_6;
 int VAR_7;

 switch (VAR_0->family) {
 case 167:
 case 147:
 case 157:
 case 146:
 case 156:
 case 166:
 case 145:
 case 155:
 case 144:
 case 165:
 case 164:
 case 143:
  VAR_7 = 60;
  VAR_3 = (VAR_1 * 10) / (VAR_7 * 4);
  for (VAR_6 = 1; VAR_6 < 255; VAR_6++) {
   if ((VAR_3 / VAR_6) < VAR_6)
    break;
  }
  VAR_4 = VAR_6 - 1;
  VAR_5 = VAR_6 - 2;
  VAR_2 = VAR_5 | (VAR_4 << 8);
  break;
 case 142:
 case 154:
 case 153:
 case 163:
 case 162:
 case 141:
  VAR_2 = (((VAR_1 * 10)/(4 * 128 * 100) + 1) << 8) + 128;
  break;
 case 152:
 case 151:
 case 150:

  break;
 case 140:
 case 161:
 case 139:
 case 138:
 case 137:
 case 160:
  VAR_7 = 50;
  if (VAR_0->family == 161)
   VAR_2 = (127 << 8) + ((VAR_1 * 10) / (4 * 127 * VAR_7));
  else
   VAR_2 = (((VAR_1 * 10)/(4 * 128 * 100) + 1) << 8) + 128;
  break;
 case 159:
 case 136:
 case 134:
 case 132:

  break;
 case 135:
 case 133:
 case 149:
 case 148:
 case 128:
 case 130:
 case 131:
 case 129:

  break;
 case 171:
 case 158:
 case 168:
 case 170:
 case 169:

  break;
 default:
  FUNC_0("i2c: unhandled radeon chip\n");
  break;
 }
 return VAR_2;
}
