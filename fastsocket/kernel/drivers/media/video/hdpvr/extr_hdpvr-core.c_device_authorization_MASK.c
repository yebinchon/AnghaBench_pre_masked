
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdpvr_device {char* usbc_buf; int usbc_mutex; int v4l2_dev; int udev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (char*,int,int,int,char*,int,int ) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int,int,int,int,char*,int,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int *,char*,...) ;
 int FUNC_10 (int *,char*,...) ;
 int FUNC_11 (int *,char*,...) ;

__attribute__((used)) static int FUNC_12(struct hdpvr_device *VAR_5)
{

 int VAR_6, VAR_7 = -VAR_0;
 char VAR_8 = 0x38, VAR_9 = 0x81;
 char *VAR_10;
 FUNC_4(&VAR_5->usbc_mutex);
 VAR_6 = FUNC_6(VAR_5->udev,
         FUNC_7(VAR_5->udev, 0),
         VAR_9, 0x80 | VAR_8,
         0x0400, 0x0003,
         VAR_5->usbc_buf, 46,
         10000);
 if (VAR_6 != 46) {
  FUNC_10(&VAR_5->v4l2_dev,
    "unexpected answer of status request, len %d\n", VAR_6);
  goto unlock;
 }
 FUNC_11(&VAR_5->v4l2_dev, "firmware version 0x%x dated %s\n",
     VAR_5->usbc_buf[1], &VAR_5->usbc_buf[2]);

 switch (VAR_5->usbc_buf[1]) {
 case 131:
  VAR_5->flags &= ~VAR_2;
  break;
 case 128:
 case 130:
 case 129:
  VAR_5->flags |= VAR_2;
  break;
 default:
  FUNC_11(&VAR_5->v4l2_dev, "untested firmware, the driver might"
     " not work.\n");
  if (VAR_5->usbc_buf[1] >= 128)
   VAR_5->flags |= VAR_2;
  else
   VAR_5->flags &= ~VAR_2;
 }

 VAR_10 = VAR_5->usbc_buf+38;





 FUNC_0(VAR_10);






 FUNC_3(100);
 VAR_6 = FUNC_6(VAR_5->udev,
         FUNC_8(VAR_5->udev, 0),
         0xd1, 0x00 | VAR_8,
         0x0000, 0x0000,
         VAR_10, 8,
         10000);
 FUNC_9(VAR_3, VAR_4, &VAR_5->v4l2_dev,
   "magic request returned %d\n", VAR_6);

 VAR_7 = VAR_6 != 8;
unlock:
 FUNC_5(&VAR_5->usbc_mutex);
 return VAR_7;
}
