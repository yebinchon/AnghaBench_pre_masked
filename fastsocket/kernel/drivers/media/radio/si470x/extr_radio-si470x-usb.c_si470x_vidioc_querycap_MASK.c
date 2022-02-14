
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct si470x_device {int usbdev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct si470x_device* FUNC_2 (struct file*) ;

int FUNC_3(struct file *VAR_7, void *VAR_8,
  struct v4l2_capability *VAR_9)
{
 struct si470x_device *VAR_10 = FUNC_2(VAR_7);

 FUNC_0(VAR_9->driver, VAR_2, sizeof(VAR_9->driver));
 FUNC_0(VAR_9->card, VAR_0, sizeof(VAR_9->card));
 FUNC_1(VAR_10->usbdev, VAR_9->bus_info,
   sizeof(VAR_9->bus_info));
 VAR_9->version = VAR_1;
 VAR_9->capabilities = VAR_3 |
  VAR_6 | VAR_4 | VAR_5;

 return 0;
}
