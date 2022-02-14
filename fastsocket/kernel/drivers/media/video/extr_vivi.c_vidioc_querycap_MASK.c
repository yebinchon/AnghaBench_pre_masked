
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vivi_fh {struct vivi_dev* dev; } ;
struct TYPE_2__ {int name; } ;
struct vivi_dev {TYPE_1__ v4l2_dev; } ;
struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
     struct v4l2_capability *VAR_6)
{
 struct vivi_fh *VAR_7 = VAR_5;
 struct vivi_dev *VAR_8 = VAR_7->dev;

 FUNC_0(VAR_6->driver, "vivi");
 FUNC_0(VAR_6->card, "vivi");
 FUNC_1(VAR_6->bus_info, VAR_8->v4l2_dev.name, sizeof(VAR_6->bus_info));
 VAR_6->version = VAR_3;
 VAR_6->capabilities = VAR_2 |
    VAR_1 |
    VAR_0;
 return 0;
}
