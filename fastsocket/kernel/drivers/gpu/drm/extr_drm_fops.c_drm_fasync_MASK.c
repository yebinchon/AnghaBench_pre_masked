
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct drm_file* private_data; } ;
struct drm_file {TYPE_1__* minor; } ;
struct drm_device {int buf_async; } ;
struct TYPE_2__ {int device; struct drm_device* dev; } ;


 int FUNC_0 (char*,int,long) ;
 int FUNC_1 (int,struct file*,int,int *) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(int VAR_0, struct file *VAR_1, int VAR_2)
{
 struct drm_file *VAR_3 = VAR_1->private_data;
 struct drm_device *VAR_4 = VAR_3->minor->dev;

 FUNC_0("fd = %d, device = 0x%lx\n", VAR_0,
    (long)FUNC_2(VAR_3->minor->device));
 return FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_4->buf_async);
}
