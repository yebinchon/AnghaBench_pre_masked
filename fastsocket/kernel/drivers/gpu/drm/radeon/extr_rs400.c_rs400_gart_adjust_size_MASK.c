
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gtt_size; } ;
struct radeon_device {TYPE_1__ mc; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(struct radeon_device *VAR_0)
{

 switch (VAR_0->mc.gtt_size/(1024*1024)) {
 case 32:
 case 64:
 case 128:
 case 256:
 case 512:
 case 1024:
 case 2048:
  break;
 default:
  FUNC_0("Unable to use IGP GART size %uM\n",
     (unsigned)(VAR_0->mc.gtt_size >> 20));
  FUNC_0("Valid GART size for IGP are 32M,64M,128M,256M,512M,1G,2G\n");
  FUNC_0("Forcing to 32M GART size\n");
  VAR_0->mc.gtt_size = 32 * 1024 * 1024;
  return;
 }
}
