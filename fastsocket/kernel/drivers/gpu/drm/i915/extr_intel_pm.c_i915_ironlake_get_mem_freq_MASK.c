
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_3__ {int r_t; int c_m; } ;
struct TYPE_4__ {int mem_freq; int fsb_freq; TYPE_1__ ips; } ;
typedef TYPE_2__ drm_i915_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_2)
{
 drm_i915_private_t *VAR_3 = VAR_2->dev_private;
 u16 VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_1);
 VAR_5 = FUNC_1(VAR_0);

 switch (VAR_4 & 0xff) {
 case 0xc:
  VAR_3->mem_freq = 800;
  break;
 case 0x10:
  VAR_3->mem_freq = 1066;
  break;
 case 0x14:
  VAR_3->mem_freq = 1333;
  break;
 case 0x18:
  VAR_3->mem_freq = 1600;
  break;
 default:
  FUNC_0("unknown memory frequency 0x%02x\n",
     VAR_4 & 0xff);
  VAR_3->mem_freq = 0;
  break;
 }

 VAR_3->ips.r_t = VAR_3->mem_freq;

 switch (VAR_5 & 0x3ff) {
 case 0x00c:
  VAR_3->fsb_freq = 3200;
  break;
 case 0x00e:
  VAR_3->fsb_freq = 3733;
  break;
 case 0x010:
  VAR_3->fsb_freq = 4266;
  break;
 case 0x012:
  VAR_3->fsb_freq = 4800;
  break;
 case 0x014:
  VAR_3->fsb_freq = 5333;
  break;
 case 0x016:
  VAR_3->fsb_freq = 5866;
  break;
 case 0x018:
  VAR_3->fsb_freq = 6400;
  break;
 default:
  FUNC_0("unknown fsb frequency 0x%04x\n",
     VAR_5 & 0x3ff);
  VAR_3->fsb_freq = 0;
  break;
 }

 if (VAR_3->fsb_freq == 3200) {
  VAR_3->ips.c_m = 0;
 } else if (VAR_3->fsb_freq > 3200 && VAR_3->fsb_freq <= 4800) {
  VAR_3->ips.c_m = 1;
 } else {
  VAR_3->ips.c_m = 2;
 }
}
