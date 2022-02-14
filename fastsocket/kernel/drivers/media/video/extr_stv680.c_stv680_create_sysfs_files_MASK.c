
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct video_device *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_1(&VAR_8->dev, &VAR_4);
 if (VAR_9) goto err;
 VAR_9 = FUNC_1(&VAR_8->dev, &VAR_3);
 if (VAR_9) goto err_model;
 VAR_9 = FUNC_1(&VAR_8->dev, &VAR_7);
 if (VAR_9) goto err_inuse;
 VAR_9 = FUNC_1(&VAR_8->dev, &VAR_6);
 if (VAR_9) goto err_stream;
 VAR_9 = FUNC_1(&VAR_8->dev, &VAR_2);
 if (VAR_9) goto err_pal;
 VAR_9 = FUNC_1(&VAR_8->dev, &VAR_1);
 if (VAR_9) goto err_framtot;
 VAR_9 = FUNC_1(&VAR_8->dev, &VAR_5);
 if (VAR_9) goto err_framread;
 VAR_9 = FUNC_1(&VAR_8->dev, &VAR_0);
 if (VAR_9) goto err_dropped;

 return 0;

err_dropped:
 FUNC_2(&VAR_8->dev, &VAR_5);
err_framread:
 FUNC_2(&VAR_8->dev, &VAR_1);
err_framtot:
 FUNC_2(&VAR_8->dev, &VAR_2);
err_pal:
 FUNC_2(&VAR_8->dev, &VAR_6);
err_stream:
 FUNC_2(&VAR_8->dev, &VAR_7);
err_inuse:
 FUNC_2(&VAR_8->dev, &VAR_3);
err_model:
 FUNC_2(&VAR_8->dev, &VAR_4);
err:
 FUNC_0(0, "STV(e): Could not create sysfs files");
 return VAR_9;
}
