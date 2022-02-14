
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_encoder_lvds {int bl_dev; } ;
struct radeon_encoder_atom_dig {int bl_dev; } ;
struct radeon_encoder {struct radeon_encoder_lvds* enc_priv; } ;
struct TYPE_3__ {scalar_t__ command_code; int enabled; } ;
struct radeon_atif {struct radeon_encoder* encoder_for_bl; TYPE_1__ notification_cfg; } ;
struct radeon_device {scalar_t__ is_atom_bios; TYPE_2__* pdev; struct radeon_atif atif; } ;
struct atif_sbios_requests {int pending; int backlight_level; } ;
struct acpi_bus_event {scalar_t__ type; int device_class; } ;
typedef int acpi_handle ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct atif_sbios_requests*) ;
 int FUNC_4 (struct radeon_device*,struct radeon_encoder*,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;

int FUNC_6(struct radeon_device *VAR_5,
  struct acpi_bus_event *VAR_6)
{
 struct radeon_atif *VAR_7 = &VAR_5->atif;
 struct atif_sbios_requests VAR_8;
 acpi_handle VAR_9;
 int VAR_10;

 FUNC_1("event, device_class = %s, type = %#x\n",
   VAR_6->device_class, VAR_6->type);

 if (FUNC_5(VAR_6->device_class, VAR_0) != 0)
  return VAR_4;

 if (!VAR_7->notification_cfg.enabled ||
   VAR_6->type != VAR_7->notification_cfg.command_code)

  return VAR_4;


 VAR_9 = FUNC_0(&VAR_5->pdev->dev);
 VAR_10 = FUNC_3(VAR_9, &VAR_8);

 if (VAR_10 <= 0)
  return VAR_4;

 FUNC_1("ATIF: %d pending SBIOS requests\n", VAR_10);

 if (VAR_8.pending & VAR_1) {
  struct radeon_encoder *VAR_11 = VAR_7->encoder_for_bl;

  if (VAR_11) {
   FUNC_1("Changing brightness to %d\n",
     VAR_8.backlight_level);

   FUNC_4(VAR_5, VAR_11, VAR_8.backlight_level);
  }
 }







 return VAR_3;
}
