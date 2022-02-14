
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int ssid; } ;
struct dasd_eckd_private {TYPE_1__ uid; } ;
struct dasd_device {int cdev; scalar_t__ private; } ;


 int FUNC_0 (int ,int ,char*,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct dasd_device*,int,unsigned long) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_2(struct dasd_device *VAR_5,
         unsigned long VAR_6)
{
 int VAR_7;
 struct dasd_eckd_private *VAR_8;
 int VAR_9;

 VAR_8 = (struct dasd_eckd_private *) VAR_5->private;
 if (VAR_8->uid.type == VAR_2 ||
     VAR_8->uid.type == VAR_3)
  return 0;
 if (VAR_4 || VAR_1)
  VAR_9 = 0;
 else
  VAR_9 = 1;
 VAR_7 = FUNC_1(VAR_5, VAR_9, VAR_6);



 FUNC_0(VAR_0, VAR_5->cdev, "PSF-SSC for SSID %04x "
   "returned rc=%d", VAR_8->uid.ssid, VAR_7);
 return VAR_7;
}
