
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ aux_firmware_revision_set; } ;
struct bmc_device {int guid_attr; TYPE_2__* dev; scalar_t__ guid_set; int aux_firmware_rev_attr; TYPE_1__ id; int product_id_attr; int manufacturer_id_attr; int add_dev_support_attr; int version_attr; int firmware_rev_attr; int revision_attr; int provides_dev_sdrs_attr; int device_id_attr; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct bmc_device *VAR_0)
{
 if (!VAR_0->dev)
  return;

 FUNC_0(&VAR_0->dev->dev,
      &VAR_0->device_id_attr);
 FUNC_0(&VAR_0->dev->dev,
      &VAR_0->provides_dev_sdrs_attr);
 FUNC_0(&VAR_0->dev->dev,
      &VAR_0->revision_attr);
 FUNC_0(&VAR_0->dev->dev,
      &VAR_0->firmware_rev_attr);
 FUNC_0(&VAR_0->dev->dev,
      &VAR_0->version_attr);
 FUNC_0(&VAR_0->dev->dev,
      &VAR_0->add_dev_support_attr);
 FUNC_0(&VAR_0->dev->dev,
      &VAR_0->manufacturer_id_attr);
 FUNC_0(&VAR_0->dev->dev,
      &VAR_0->product_id_attr);

 if (VAR_0->id.aux_firmware_revision_set)
  FUNC_0(&VAR_0->dev->dev,
       &VAR_0->aux_firmware_rev_attr);
 if (VAR_0->guid_set)
  FUNC_0(&VAR_0->dev->dev,
       &VAR_0->guid_attr);
}
