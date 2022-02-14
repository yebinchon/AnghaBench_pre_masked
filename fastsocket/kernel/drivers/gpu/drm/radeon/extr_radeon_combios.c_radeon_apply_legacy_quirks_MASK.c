
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_i2c_bus_rec {scalar_t__ mask_clk_reg; } ;
struct radeon_hpd {int dummy; } ;
struct drm_device {TYPE_1__* pdev; } ;
typedef enum radeon_combios_connector { ____Placeholder_radeon_combios_connector } radeon_combios_connector ;
struct TYPE_2__ {int device; int subsystem_vendor; int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct drm_device *VAR_3,
           int VAR_4,
           enum radeon_combios_connector
           *VAR_5,
           struct radeon_i2c_bus_rec *VAR_6,
           struct radeon_hpd *VAR_7)
{



 if (VAR_3->pdev->device == 0x515e &&
     VAR_3->pdev->subsystem_vendor == 0x1014) {
  if (*VAR_5 == VAR_0 &&
      VAR_6->mask_clk_reg == VAR_2)
   return 0;
 }


 if (VAR_3->pdev->device == 0x5B60 &&
     VAR_3->pdev->subsystem_vendor == 0x17af &&
     VAR_3->pdev->subsystem_device == 0x201e && VAR_4 == 2) {
  if (*VAR_5 == VAR_1)
   return 0;
 }

 return 1;
}
