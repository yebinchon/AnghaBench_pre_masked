
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_ring_buffer {int id; int dev; int owner; } ;


 int FUNC_0 (struct iio_ring_buffer*) ;
 int FUNC_1 (struct iio_ring_buffer*,int ,int ) ;
 int FUNC_2 (struct iio_ring_buffer*,int ,int ,int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;

int FUNC_8(struct iio_ring_buffer *VAR_1)
{
 int VAR_2;
 VAR_2 = FUNC_7(&VAR_0);
 if (VAR_2 < 0)
  goto error_ret;
 else
  VAR_1->id = VAR_2;

 FUNC_3(&VAR_1->dev, "ring_buffer%d", VAR_1->id);
 VAR_2 = FUNC_4(&VAR_1->dev);
 if (VAR_2)
  goto error_free_id;

 VAR_2 = FUNC_2(VAR_1,
           0,
           VAR_1->owner,
           &VAR_1->dev);
 if (VAR_2)
  goto error_remove_device;

 VAR_2 = FUNC_1(VAR_1,
            0,
            VAR_1->owner);

 if (VAR_2)
  goto error_free_ring_buffer_event_chrdev;

 return VAR_2;
error_free_ring_buffer_event_chrdev:
 FUNC_0(VAR_1);
error_remove_device:
 FUNC_5(&VAR_1->dev);
error_free_id:
 FUNC_6(&VAR_0, VAR_1->id);
error_ret:
 return VAR_2;
}
