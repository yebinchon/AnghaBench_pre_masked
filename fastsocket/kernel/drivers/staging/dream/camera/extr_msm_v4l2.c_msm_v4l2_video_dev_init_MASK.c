
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int vfl_type; int minor; int * ioctl_ops; int release; int * fops; int name; } ;
struct TYPE_2__ {int drv; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct video_device *VAR_5)
{
 FUNC_1(VAR_5->name, VAR_0, sizeof(VAR_5->name));
 VAR_5->vfl_type = 1;
 VAR_5->fops = &VAR_3;
 VAR_5->release = VAR_4;
 VAR_5->minor = -1;
 VAR_5->ioctl_ops = &VAR_2;
 return FUNC_0(VAR_1->drv);
}
