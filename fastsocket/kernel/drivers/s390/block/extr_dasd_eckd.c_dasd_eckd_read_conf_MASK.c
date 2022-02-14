
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_uid {char* vduit; char* vendor; char* serial; int ssid; int real_unit_addr; } ;
struct dasd_path {int opm; int npm; int ppm; } ;
struct dasd_eckd_private {void* conf_data; int conf_len; struct dasd_uid uid; } ;
struct dasd_device {TYPE_1__* cdev; struct dasd_path path_data; scalar_t__ private; } ;
typedef int print_path_uid ;
typedef int print_device_uid ;
typedef int __u8 ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct dasd_device*,struct dasd_eckd_private*) ;
 int FUNC_3 (struct dasd_device*) ;
 scalar_t__ FUNC_4 (struct dasd_eckd_private*) ;
 int FUNC_5 (void*,int) ;
 int FUNC_6 (struct dasd_device*,void**,int*,int) ;
 int FUNC_7 (int *,char*,int,char*,char*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (char*,int,char*,char*,char*,int,int,...) ;
 scalar_t__ FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct dasd_device *VAR_4)
{
 void *VAR_5;
 int VAR_6, VAR_7;
 int VAR_8, VAR_9;
 __u8 VAR_10, VAR_11;
 struct dasd_eckd_private *VAR_12, VAR_13;
 struct dasd_path *VAR_14;
 struct dasd_uid *VAR_15;
 char VAR_16[60], VAR_17[60];

 VAR_12 = (struct dasd_eckd_private *) VAR_4->private;
 VAR_14 = &VAR_4->path_data;
 VAR_11 = FUNC_1(VAR_4->cdev);
 VAR_7 = 0;
 VAR_9 = 0;

 for (VAR_10 = 0x80; VAR_10; VAR_10>>= 1) {
  if (!(VAR_10 & VAR_11))
   continue;
  VAR_8 = FUNC_6(VAR_4, &VAR_5,
          &VAR_6, VAR_10);
  if (VAR_8 && VAR_8 != -VAR_3) {
   FUNC_0(VAR_1, VAR_4->cdev,
     "Read configuration data returned "
     "error %d", VAR_8);
   return VAR_8;
  }
  if (VAR_5 == ((void*)0)) {
   FUNC_0(VAR_1, VAR_4->cdev, "%s",
     "No configuration data "
     "retrieved");

   VAR_14->opm |= VAR_10;
   continue;
  }

  if (!VAR_7) {
   FUNC_8(VAR_12->conf_data);
   VAR_12->conf_data = VAR_5;
   VAR_12->conf_len = VAR_6;
   if (FUNC_4(VAR_12)) {
    VAR_12->conf_data = ((void*)0);
    VAR_12->conf_len = 0;
    FUNC_8(VAR_5);
    continue;
   }




   FUNC_3(VAR_4);
   VAR_7++;
  } else {
   VAR_13.conf_data = VAR_5;
   VAR_13.conf_len = VAR_0;
   if (FUNC_4(
        &VAR_13)) {
    VAR_13.conf_data = ((void*)0);
    VAR_13.conf_len = 0;
    FUNC_8(VAR_5);
    continue;
   }

   if (FUNC_2(
        VAR_4, &VAR_13)) {
    VAR_15 = &VAR_13.uid;
    if (FUNC_10(VAR_15->vduit) > 0)
     FUNC_9(VAR_16,
       sizeof(VAR_16),
       "%s.%s.%04x.%02x.%s",
       VAR_15->vendor, VAR_15->serial,
       VAR_15->ssid, VAR_15->real_unit_addr,
       VAR_15->vduit);
    else
     FUNC_9(VAR_16,
       sizeof(VAR_16),
       "%s.%s.%04x.%02x",
       VAR_15->vendor, VAR_15->serial,
       VAR_15->ssid,
       VAR_15->real_unit_addr);
    VAR_15 = &VAR_12->uid;
    if (FUNC_10(VAR_15->vduit) > 0)
     FUNC_9(VAR_17,
       sizeof(VAR_17),
       "%s.%s.%04x.%02x.%s",
       VAR_15->vendor, VAR_15->serial,
       VAR_15->ssid, VAR_15->real_unit_addr,
       VAR_15->vduit);
    else
     FUNC_9(VAR_17,
       sizeof(VAR_17),
       "%s.%s.%04x.%02x",
       VAR_15->vendor, VAR_15->serial,
       VAR_15->ssid,
       VAR_15->real_unit_addr);
    FUNC_7(&VAR_4->cdev->dev,
     "Not all channel paths lead to "
     "the same device, path %02X leads to "
     "device %s instead of %s\n", VAR_10,
     VAR_16, VAR_17);
    VAR_9 = -VAR_2;
    continue;
   }

   VAR_13.conf_data = ((void*)0);
   VAR_13.conf_len = 0;
  }
  switch (FUNC_5(VAR_5, VAR_6)) {
  case 0x02:
   VAR_14->npm |= VAR_10;
   break;
  case 0x03:
   VAR_14->ppm |= VAR_10;
   break;
  }
  VAR_14->opm |= VAR_10;

  if (VAR_5 != VAR_12->conf_data)
   FUNC_8(VAR_5);
 }

 return VAR_9;
}
