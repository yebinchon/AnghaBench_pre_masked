
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int atom_context; } ;
struct radeon_device {int dev; int ddev; TYPE_1__ mode_info; scalar_t__ is_atom_bios; scalar_t__ bios; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (int ) ;

bool FUNC_5(struct radeon_device *VAR_0)
{
 if (FUNC_3(VAR_0))
  return 1;

 if (VAR_0->bios) {
  FUNC_0("GPU not posted. posting now...\n");
  if (VAR_0->is_atom_bios)
   FUNC_1(VAR_0->mode_info.atom_context);
  else
   FUNC_4(VAR_0->ddev);
  return 1;
 } else {
  FUNC_2(VAR_0->dev, "Card not posted and no BIOS - ignoring\n");
  return 0;
 }
}
