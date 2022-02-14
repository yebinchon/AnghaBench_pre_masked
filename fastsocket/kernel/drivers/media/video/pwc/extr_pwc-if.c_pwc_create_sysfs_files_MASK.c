
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dev; } ;
struct pwc_device {int features; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 struct pwc_device* FUNC_3 (struct video_device*) ;

__attribute__((used)) static int FUNC_4(struct video_device *VAR_3)
{
 struct pwc_device *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_3->dev, &VAR_1);
 if (VAR_5)
  goto err;
 if (VAR_4->features & VAR_0) {
  VAR_5 = FUNC_1(&VAR_3->dev, &VAR_2);
  if (VAR_5)
   goto err_button;
 }

 return 0;

err_button:
 FUNC_2(&VAR_3->dev, &VAR_1);
err:
 FUNC_0("Could not create sysfs files.\n");
 return VAR_5;
}
