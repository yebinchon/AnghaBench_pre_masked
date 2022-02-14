
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_device {int crop; int v4l2_dev; } ;
struct v4l2_crop {int c; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int *,char*) ;
 struct vpfe_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
        struct v4l2_crop *VAR_3)
{
 struct vpfe_device *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(1, VAR_0, &VAR_4->v4l2_dev, "vpfe_g_crop\n");

 VAR_3->c = VAR_4->crop;
 return 0;
}
