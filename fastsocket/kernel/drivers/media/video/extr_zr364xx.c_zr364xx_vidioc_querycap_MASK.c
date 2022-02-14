
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zr364xx_camera {TYPE_1__* udev; } ;
struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int dev; int product; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 struct zr364xx_camera* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
       struct v4l2_capability *VAR_7)
{
 struct zr364xx_camera *VAR_8 = FUNC_2(VAR_5);

 FUNC_1(VAR_7->driver, VAR_0, sizeof(VAR_7->driver));
 FUNC_1(VAR_7->card, VAR_8->udev->product, sizeof(VAR_7->card));
 FUNC_1(VAR_7->bus_info, FUNC_0(&VAR_8->udev->dev),
  sizeof(VAR_7->bus_info));
 VAR_7->version = VAR_4;
 VAR_7->capabilities = VAR_3 |
       VAR_1 |
       VAR_2;

 return 0;
}
