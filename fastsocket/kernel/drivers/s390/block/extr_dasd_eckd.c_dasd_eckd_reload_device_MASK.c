
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base_unit_addr; char* vduit; char* vendor; char* serial; int ssid; } ;
struct dasd_eckd_private {TYPE_1__ uid; } ;
struct dasd_device {TYPE_2__* cdev; scalar_t__ private; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (char*,int,char*,char*,char*,int,int,...) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct dasd_device *VAR_0)
{
 struct dasd_eckd_private *VAR_1;
 int VAR_2, VAR_3;
 char VAR_4[60];

 VAR_1 = (struct dasd_eckd_private *) VAR_0->private;
 VAR_3 = VAR_1->uid.base_unit_addr;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  goto out_err;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  goto out_err;





 FUNC_0(VAR_0);

 if (VAR_3 != VAR_1->uid.base_unit_addr) {
  if (FUNC_5(VAR_1->uid.vduit) > 0)
   FUNC_4(VAR_4, 60, "%s.%s.%04x.%02x.%s",
     VAR_1->uid.vendor, VAR_1->uid.serial,
     VAR_1->uid.ssid, VAR_1->uid.base_unit_addr,
     VAR_1->uid.vduit);
  else
   FUNC_4(VAR_4, 60, "%s.%s.%04x.%02x",
     VAR_1->uid.vendor, VAR_1->uid.serial,
     VAR_1->uid.ssid,
     VAR_1->uid.base_unit_addr);

  FUNC_3(&VAR_0->cdev->dev,
    "An Alias device was reassigned to a new base device "
    "with UID: %s\n", VAR_4);
 }
 return 0;

out_err:
 return -1;
}
