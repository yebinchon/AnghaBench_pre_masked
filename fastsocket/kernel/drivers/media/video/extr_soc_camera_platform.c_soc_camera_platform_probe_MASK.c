
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int name; } ;
struct soc_camera_platform_priv {TYPE_1__ subdev; } ;
struct soc_camera_platform_info {int dev; } ;
struct soc_camera_host {int v4l2_dev; } ;
struct TYPE_10__ {int parent; } ;
struct soc_camera_device {int * ops; TYPE_5__ dev; } ;
struct TYPE_11__ {struct soc_camera_platform_info* platform_data; } ;
struct platform_device {TYPE_6__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_6__*,char*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_3 (struct soc_camera_platform_priv*) ;
 struct soc_camera_platform_priv* FUNC_4 (int,int ) ;
 int FUNC_5 (struct platform_device*,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,int ) ;
 struct soc_camera_device* FUNC_7 (int ) ;
 struct soc_camera_host* FUNC_8 (int ) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,struct soc_camera_platform_info*) ;
 int FUNC_11 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_6)
{
 struct soc_camera_host *VAR_7;
 struct soc_camera_platform_priv *VAR_8;
 struct soc_camera_platform_info *VAR_9 = VAR_6->dev.platform_data;
 struct soc_camera_device *VAR_10;
 int VAR_11;

 if (!VAR_9)
  return -VAR_0;

 if (!VAR_9->dev) {
  FUNC_0(&VAR_6->dev,
   "Platform has not set soc_camera_device pointer!\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_7(VAR_9->dev);


 FUNC_5(VAR_6, &VAR_8->subdev);

 FUNC_2(&VAR_10->dev, &VAR_6->dev);

 VAR_10->ops = &VAR_5;

 VAR_7 = FUNC_8(VAR_10->dev.parent);

 FUNC_11(&VAR_8->subdev, &VAR_4);
 FUNC_10(&VAR_8->subdev, VAR_9);
 FUNC_6(VAR_8->subdev.name, FUNC_1(&VAR_6->dev), VAR_3);

 VAR_11 = FUNC_9(&VAR_7->v4l2_dev, &VAR_8->subdev);
 if (VAR_11)
  goto evdrs;

 return VAR_11;

evdrs:
 VAR_10->ops = ((void*)0);
 FUNC_5(VAR_6, ((void*)0));
 FUNC_3(VAR_8);
 return VAR_11;
}
