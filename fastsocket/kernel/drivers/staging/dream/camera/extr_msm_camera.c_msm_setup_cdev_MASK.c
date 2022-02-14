
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int owner; } ;
struct msm_device {TYPE_1__ cdev; } ;
struct file_operations {int dummy; } ;
struct device {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,struct file_operations const*) ;
 struct device* FUNC_4 (int ,int *,int ,int *,char*,char const*,int) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(struct msm_device *VAR_3,
   int VAR_4,
   dev_t VAR_5,
   const char *VAR_6,
   const struct file_operations *VAR_7)
{
 int VAR_8 = -VAR_0;

 struct device *VAR_9 =
  FUNC_4(VAR_2, ((void*)0),
   VAR_5, ((void*)0),
   "%s%d", VAR_6, VAR_4);

 if (FUNC_0(VAR_9)) {
  VAR_8 = FUNC_1(VAR_9);
  FUNC_6("msm_camera: error creating device: %d\n", VAR_8);
  return VAR_8;
 }

 FUNC_3(&VAR_3->cdev, VAR_7);
 VAR_3->cdev.owner = VAR_1;

 VAR_8 = FUNC_2(&VAR_3->cdev, VAR_5, 1);
 if (VAR_8 < 0) {
  FUNC_6("msm_camera: error adding cdev: %d\n", VAR_8);
  FUNC_5(VAR_2, VAR_5);
  return VAR_8;
 }

 return VAR_8;
}
