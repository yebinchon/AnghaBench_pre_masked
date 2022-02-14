
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct em28xx {size_t model; int udev; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
     struct v4l2_capability *VAR_5)
{
 struct em28xx *VAR_6 = ((struct em28xx_fh *)VAR_4)->dev;

 FUNC_0(VAR_5->driver, "em28xx", sizeof(VAR_5->driver));
 FUNC_0(VAR_5->card, VAR_2[VAR_6->model].name, sizeof(VAR_5->card));
 FUNC_1(VAR_6->udev, VAR_5->bus_info, sizeof(VAR_5->bus_info));

 VAR_5->version = VAR_0;
 VAR_5->capabilities = VAR_1;
 return 0;
}
