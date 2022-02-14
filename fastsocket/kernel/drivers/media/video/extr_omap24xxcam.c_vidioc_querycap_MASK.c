
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int version; int card; int driver; } ;
struct omap24xxcam_fh {struct omap24xxcam_device* cam; } ;
struct omap24xxcam_device {TYPE_1__* vfd; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
      struct v4l2_capability *VAR_6)
{
 struct omap24xxcam_fh *VAR_7 = VAR_5;
 struct omap24xxcam_device *VAR_8 = VAR_7->cam;

 FUNC_0(VAR_6->driver, VAR_0, sizeof(VAR_6->driver));
 FUNC_0(VAR_6->card, VAR_8->vfd->name, sizeof(VAR_6->card));
 VAR_6->version = VAR_1;
 VAR_6->capabilities = VAR_3 | VAR_2;

 return 0;
}
