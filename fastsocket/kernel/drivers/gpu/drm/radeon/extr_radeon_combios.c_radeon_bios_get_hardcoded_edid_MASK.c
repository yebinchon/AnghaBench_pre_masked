
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bios_hardcoded_edid_size; scalar_t__ bios_hardcoded_edid; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct edid {int dummy; } ;


 int VAR_0 ;
 struct edid* FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,unsigned char*,int ) ;

struct edid *
FUNC_2(struct radeon_device *VAR_1)
{
 struct edid *VAR_2;

 if (VAR_1->mode_info.bios_hardcoded_edid) {
  VAR_2 = FUNC_0(VAR_1->mode_info.bios_hardcoded_edid_size, VAR_0);
  if (VAR_2) {
   FUNC_1((unsigned char *)VAR_2,
          (unsigned char *)VAR_1->mode_info.bios_hardcoded_edid,
          VAR_1->mode_info.bios_hardcoded_edid_size);
   return VAR_2;
  }
 }
 return ((void*)0);
}
