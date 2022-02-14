
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* name; void* mode; } ;
struct TYPE_9__ {TYPE_3__ attr; int show; } ;
struct TYPE_6__ {scalar_t__ aux_firmware_revision_set; } ;
struct bmc_device {TYPE_4__ device_id_attr; TYPE_2__* dev; TYPE_4__ provides_dev_sdrs_attr; TYPE_4__ revision_attr; TYPE_4__ firmware_rev_attr; TYPE_4__ version_attr; TYPE_4__ add_dev_support_attr; TYPE_4__ manufacturer_id_attr; TYPE_4__ product_id_attr; TYPE_4__ aux_firmware_rev_attr; TYPE_1__ id; TYPE_4__ guid_attr; scalar_t__ guid_set; } ;
struct TYPE_7__ {int dev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(struct bmc_device *VAR_11)
{
 int VAR_12;

 VAR_11->device_id_attr.attr.name = "device_id";
 VAR_11->device_id_attr.attr.mode = VAR_0;
 VAR_11->device_id_attr.show = VAR_3;
 FUNC_2(&VAR_11->device_id_attr.attr);

 VAR_11->provides_dev_sdrs_attr.attr.name = "provides_device_sdrs";
 VAR_11->provides_dev_sdrs_attr.attr.mode = VAR_0;
 VAR_11->provides_dev_sdrs_attr.show = VAR_9;
 FUNC_2(&VAR_11->provides_dev_sdrs_attr.attr);

 VAR_11->revision_attr.attr.name = "revision";
 VAR_11->revision_attr.attr.mode = VAR_0;
 VAR_11->revision_attr.show = VAR_10;
 FUNC_2(&VAR_11->revision_attr.attr);

 VAR_11->firmware_rev_attr.attr.name = "firmware_revision";
 VAR_11->firmware_rev_attr.attr.mode = VAR_0;
 VAR_11->firmware_rev_attr.show = VAR_4;
 FUNC_2(&VAR_11->firmware_rev_attr.attr);

 VAR_11->version_attr.attr.name = "ipmi_version";
 VAR_11->version_attr.attr.mode = VAR_0;
 VAR_11->version_attr.show = VAR_6;
 FUNC_2(&VAR_11->version_attr.attr);

 VAR_11->add_dev_support_attr.attr.name = "additional_device_support";
 VAR_11->add_dev_support_attr.attr.mode = VAR_0;
 VAR_11->add_dev_support_attr.show = VAR_1;
 FUNC_2(&VAR_11->add_dev_support_attr.attr);

 VAR_11->manufacturer_id_attr.attr.name = "manufacturer_id";
 VAR_11->manufacturer_id_attr.attr.mode = VAR_0;
 VAR_11->manufacturer_id_attr.show = VAR_7;
 FUNC_2(&VAR_11->manufacturer_id_attr.attr);

 VAR_11->product_id_attr.attr.name = "product_id";
 VAR_11->product_id_attr.attr.mode = VAR_0;
 VAR_11->product_id_attr.show = VAR_8;
 FUNC_2(&VAR_11->product_id_attr.attr);

 VAR_11->guid_attr.attr.name = "guid";
 VAR_11->guid_attr.attr.mode = VAR_0;
 VAR_11->guid_attr.show = VAR_5;
 FUNC_2(&VAR_11->guid_attr.attr);

 VAR_11->aux_firmware_rev_attr.attr.name = "aux_firmware_revision";
 VAR_11->aux_firmware_rev_attr.attr.mode = VAR_0;
 VAR_11->aux_firmware_rev_attr.show = VAR_2;
 FUNC_2(&VAR_11->aux_firmware_rev_attr.attr);

 VAR_12 = FUNC_0(&VAR_11->dev->dev,
      &VAR_11->device_id_attr);
 if (VAR_12)
  goto out;
 VAR_12 = FUNC_0(&VAR_11->dev->dev,
      &VAR_11->provides_dev_sdrs_attr);
 if (VAR_12)
  goto out_devid;
 VAR_12 = FUNC_0(&VAR_11->dev->dev,
      &VAR_11->revision_attr);
 if (VAR_12)
  goto out_sdrs;
 VAR_12 = FUNC_0(&VAR_11->dev->dev,
      &VAR_11->firmware_rev_attr);
 if (VAR_12)
  goto out_rev;
 VAR_12 = FUNC_0(&VAR_11->dev->dev,
      &VAR_11->version_attr);
 if (VAR_12)
  goto out_firm;
 VAR_12 = FUNC_0(&VAR_11->dev->dev,
      &VAR_11->add_dev_support_attr);
 if (VAR_12)
  goto out_version;
 VAR_12 = FUNC_0(&VAR_11->dev->dev,
      &VAR_11->manufacturer_id_attr);
 if (VAR_12)
  goto out_add_dev;
 VAR_12 = FUNC_0(&VAR_11->dev->dev,
      &VAR_11->product_id_attr);
 if (VAR_12)
  goto out_manu;
 if (VAR_11->id.aux_firmware_revision_set) {
  VAR_12 = FUNC_0(&VAR_11->dev->dev,
       &VAR_11->aux_firmware_rev_attr);
  if (VAR_12)
   goto out_prod_id;
 }
 if (VAR_11->guid_set) {
  VAR_12 = FUNC_0(&VAR_11->dev->dev,
       &VAR_11->guid_attr);
  if (VAR_12)
   goto out_aux_firm;
 }

 return 0;

out_aux_firm:
 if (VAR_11->id.aux_firmware_revision_set)
  FUNC_1(&VAR_11->dev->dev,
       &VAR_11->aux_firmware_rev_attr);
out_prod_id:
 FUNC_1(&VAR_11->dev->dev,
      &VAR_11->product_id_attr);
out_manu:
 FUNC_1(&VAR_11->dev->dev,
      &VAR_11->manufacturer_id_attr);
out_add_dev:
 FUNC_1(&VAR_11->dev->dev,
      &VAR_11->add_dev_support_attr);
out_version:
 FUNC_1(&VAR_11->dev->dev,
      &VAR_11->version_attr);
out_firm:
 FUNC_1(&VAR_11->dev->dev,
      &VAR_11->firmware_rev_attr);
out_rev:
 FUNC_1(&VAR_11->dev->dev,
      &VAR_11->revision_attr);
out_sdrs:
 FUNC_1(&VAR_11->dev->dev,
      &VAR_11->provides_dev_sdrs_attr);
out_devid:
 FUNC_1(&VAR_11->dev->dev,
      &VAR_11->device_id_attr);
out:
 return VAR_12;
}
