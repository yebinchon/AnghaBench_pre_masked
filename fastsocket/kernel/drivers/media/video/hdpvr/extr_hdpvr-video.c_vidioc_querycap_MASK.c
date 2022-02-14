
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct hdpvr_device {int udev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;
 struct hdpvr_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
      struct v4l2_capability *VAR_6)
{
 struct hdpvr_device *VAR_7 = FUNC_2(VAR_4);

 FUNC_0(VAR_6->driver, "hdpvr");
 FUNC_0(VAR_6->card, "Hauppauge HD PVR");
 FUNC_1(VAR_7->udev, VAR_6->bus_info, sizeof(VAR_6->bus_info));
 VAR_6->version = VAR_0;
 VAR_6->capabilities = VAR_3 |
    VAR_1 |
    VAR_2;
 return 0;
}
