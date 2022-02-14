
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct radeon_device {int flags; int num_crtc; int family; TYPE_3__* asic; int * bios; } ;
struct TYPE_23__ {int * set_memory_clock; int * get_memory_clock; int * set_engine_clock; int * get_engine_clock; } ;
struct TYPE_22__ {int * set_backlight_level; } ;
struct TYPE_24__ {TYPE_2__ pm; TYPE_1__ display; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 TYPE_3__ VAR_8 ;
 TYPE_3__ VAR_9 ;
 TYPE_3__ VAR_10 ;
 TYPE_3__ VAR_11 ;
 TYPE_3__ VAR_12 ;
 TYPE_3__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct radeon_device*) ;
 TYPE_3__ VAR_18 ;
 TYPE_3__ VAR_19 ;
 TYPE_3__ VAR_20 ;
 TYPE_3__ VAR_21 ;
 TYPE_3__ VAR_22 ;
 TYPE_3__ VAR_23 ;
 TYPE_3__ VAR_24 ;
 TYPE_3__ VAR_25 ;
 TYPE_3__ VAR_26 ;

int FUNC_1(struct radeon_device *VAR_27)
{
 FUNC_0(VAR_27);


 if (VAR_27->flags & VAR_3)
  VAR_27->num_crtc = 1;
 else
  VAR_27->num_crtc = 2;

 switch (VAR_27->family) {
 case 172:
 case 152:
 case 162:
 case 151:
 case 161:
  VAR_27->asic = &VAR_7;
  break;
 case 171:
 case 150:
 case 160:
 case 149:
  VAR_27->asic = &VAR_8;
  break;
 case 170:
 case 169:
 case 148:
 case 147:
  if (VAR_27->flags & VAR_2)
   VAR_27->asic = &VAR_10;
  else
   VAR_27->asic = &VAR_9;
  break;
 case 168:
 case 167:
 case 146:
  VAR_27->asic = &VAR_11;

  if (VAR_27->bios == ((void*)0)) {
   VAR_27->asic->pm.get_engine_clock = &VAR_14;
   VAR_27->asic->pm.set_engine_clock = &VAR_17;
   VAR_27->asic->pm.get_memory_clock = &VAR_15;
   VAR_27->asic->pm.set_memory_clock = ((void*)0);
   VAR_27->asic->display.set_backlight_level = &VAR_16;
  }
  break;
 case 159:
 case 158:
  VAR_27->asic = &VAR_18;
  break;
 case 157:
  VAR_27->asic = &VAR_19;
  break;
 case 156:
 case 155:
  VAR_27->asic = &VAR_20;
  break;
 case 145:
  VAR_27->asic = &VAR_22;
  break;
 case 166:
 case 144:
 case 143:
 case 142:
 case 165:
  VAR_27->asic = &VAR_12;
  break;
 case 164:
 case 141:
 case 139:
 case 140:
 case 138:
 case 137:
  VAR_27->asic = &VAR_13;
  break;
 case 154:
 case 153:
  VAR_27->asic = &VAR_21;
  break;
 case 133:
 case 135:
 case 136:
 case 134:
  VAR_27->asic = &VAR_23;
  break;
 case 179:
 case 163:
 case 176:
 case 178:
 case 177:

  if (VAR_27->family == 179)
   VAR_27->num_crtc = 4;
  else
   VAR_27->num_crtc = 6;
  VAR_27->asic = &VAR_6;
  break;
 case 174:
 case 132:
 case 131:
  VAR_27->asic = &VAR_25;
  break;
 case 182:
 case 129:
 case 181:

  if (VAR_27->family == 181)
   VAR_27->num_crtc = 4;
  else
   VAR_27->num_crtc = 6;
  VAR_27->asic = &VAR_4;
  break;
 case 180:
  VAR_27->asic = &VAR_5;

  VAR_27->num_crtc = 6;
  break;
 case 183:
  VAR_27->asic = &VAR_26;

  VAR_27->num_crtc = 4;
  break;
 case 130:
 case 173:
 case 128:
 case 175:
  VAR_27->asic = &VAR_24;

  if (VAR_27->family == 175)
   VAR_27->num_crtc = 2;
  else
   VAR_27->num_crtc = 6;
  break;
 default:

  return -VAR_0;
 }

 if (VAR_27->flags & VAR_1) {
  VAR_27->asic->pm.get_memory_clock = ((void*)0);
  VAR_27->asic->pm.set_memory_clock = ((void*)0);
 }

 return 0;
}
