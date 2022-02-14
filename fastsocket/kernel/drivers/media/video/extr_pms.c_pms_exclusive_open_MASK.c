
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct pms_device {int in_use; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 struct video_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1)
{
 struct video_device *VAR_2 = FUNC_1(VAR_1);
 struct pms_device *VAR_3 = (struct pms_device *)VAR_2;

 return FUNC_0(0, &VAR_3->in_use) ? -VAR_0 : 0;
}
