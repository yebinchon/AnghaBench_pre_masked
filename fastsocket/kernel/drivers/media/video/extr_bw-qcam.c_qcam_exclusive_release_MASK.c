
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct qcam_device {int in_use; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 struct video_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0)
{
 struct video_device *VAR_1 = FUNC_1(VAR_0);
 struct qcam_device *VAR_2 = (struct qcam_device *)VAR_1;

 FUNC_0(0, &VAR_2->in_use);
 return 0;
}
