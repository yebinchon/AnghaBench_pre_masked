
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* driver; } ;
struct video_device {TYPE_2__ dev; int name; } ;
struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct tea5764_device {struct video_device* videodev; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,int ,int) ;
 struct tea5764_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
     struct v4l2_capability *VAR_5)
{
 struct tea5764_device *VAR_6 = FUNC_3(VAR_3);
 struct video_device *VAR_7 = VAR_6->videodev;

 FUNC_2(VAR_5->driver, VAR_7->dev.driver->name, sizeof(VAR_5->driver));
 FUNC_2(VAR_5->card, VAR_7->name, sizeof(VAR_5->card));
 FUNC_1(VAR_5->bus_info, sizeof(VAR_5->bus_info),
   "I2C:%s", FUNC_0(&VAR_7->dev));
 VAR_5->version = VAR_0;
 VAR_5->capabilities = VAR_2 | VAR_1;
 return 0;
}
