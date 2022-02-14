
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct video_device *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_0(&VAR_9->dev, &VAR_3);
 if (VAR_10) goto err;
 VAR_10 = FUNC_0(&VAR_9->dev, &VAR_6);
 if (VAR_10) goto err_id;
 VAR_10 = FUNC_0(&VAR_9->dev, &VAR_0);
 if (VAR_10) goto err_model;
 VAR_10 = FUNC_0(&VAR_9->dev, &VAR_8);
 if (VAR_10) goto err_bridge;
 VAR_10 = FUNC_0(&VAR_9->dev, &VAR_1);
 if (VAR_10) goto err_sensor;
 VAR_10 = FUNC_0(&VAR_9->dev, &VAR_7);
 if (VAR_10) goto err_bright;
 VAR_10 = FUNC_0(&VAR_9->dev, &VAR_2);
 if (VAR_10) goto err_sat;
 VAR_10 = FUNC_0(&VAR_9->dev, &VAR_5);
 if (VAR_10) goto err_contrast;
 VAR_10 = FUNC_0(&VAR_9->dev, &VAR_4);
 if (VAR_10) goto err_hue;

 return 0;

err_hue:
 FUNC_1(&VAR_9->dev, &VAR_5);
err_contrast:
 FUNC_1(&VAR_9->dev, &VAR_2);
err_sat:
 FUNC_1(&VAR_9->dev, &VAR_7);
err_bright:
 FUNC_1(&VAR_9->dev, &VAR_1);
err_sensor:
 FUNC_1(&VAR_9->dev, &VAR_8);
err_bridge:
 FUNC_1(&VAR_9->dev, &VAR_0);
err_model:
 FUNC_1(&VAR_9->dev, &VAR_6);
err_id:
 FUNC_1(&VAR_9->dev, &VAR_3);
err:
 return VAR_10;
}
