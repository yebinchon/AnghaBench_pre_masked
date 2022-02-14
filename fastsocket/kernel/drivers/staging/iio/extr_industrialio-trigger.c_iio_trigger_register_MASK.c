
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dev; int list; scalar_t__ id; } ;


 int FUNC_0 (int *,char*,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct iio_trigger*) ;
 int FUNC_4 (struct iio_trigger*) ;
 int FUNC_5 (struct iio_trigger*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct iio_trigger *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  goto error_ret;

 FUNC_0(&VAR_2->dev, "trigger%ld",
       (unsigned long) VAR_2->id);

 VAR_3 = FUNC_1(&VAR_2->dev);
 if (VAR_3)
  goto error_unregister_id;

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  goto error_device_del;


 FUNC_7(&VAR_1);
 FUNC_6(&VAR_2->list, &VAR_0);
 FUNC_8(&VAR_1);

 return 0;

error_device_del:
 FUNC_2(&VAR_2->dev);
error_unregister_id:
 FUNC_5(VAR_2);
error_ret:
 return VAR_3;
}
