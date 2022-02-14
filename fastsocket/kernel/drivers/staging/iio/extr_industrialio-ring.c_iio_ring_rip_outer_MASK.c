
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* rip_lots ) (struct iio_ring_buffer*,size_t,int **,int*) ;} ;
struct iio_ring_buffer {TYPE_1__ access; } ;
struct file {struct iio_ring_buffer* private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iio_ring_buffer*,size_t,int **,int*) ;

ssize_t FUNC_3(struct file *VAR_2,
      char *VAR_3,
      size_t VAR_4,
      loff_t *VAR_5)
{
 struct iio_ring_buffer *VAR_6 = VAR_2->private_data;
 int VAR_7, VAR_8, VAR_9;
 u8 *VAR_10;

 if (!VAR_6->access.rip_lots)
  return -VAR_1;
 VAR_9 = VAR_6->access.rip_lots(VAR_6, VAR_4, &VAR_10, &VAR_8);

 if (VAR_9 < 0) {
  VAR_7 = VAR_9;
  goto error_ret;
 }
 if (FUNC_0(VAR_3, VAR_10 + VAR_8, VAR_9)) {
  VAR_7 = -VAR_0;
  goto error_free_data_cpy;
 }



 FUNC_1(VAR_10);

 return VAR_9;

error_free_data_cpy:
 FUNC_1(VAR_10);
error_ret:
 return VAR_7;
}
