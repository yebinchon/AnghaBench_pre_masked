
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* get_bpd ) (struct iio_ring_buffer*) ;} ;
struct iio_ring_buffer {TYPE_1__ access; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct iio_ring_buffer* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct iio_ring_buffer*) ;
 int FUNC_3 (struct iio_ring_buffer*) ;

ssize_t FUNC_4(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 int VAR_3 = 0;
 struct iio_ring_buffer *VAR_4 = FUNC_0(VAR_0);

 if (VAR_4->access.get_bpd)
  VAR_3 = FUNC_1(VAR_2, "%d\n",
         VAR_4->access.get_bpd(VAR_4));

 return VAR_3;
}
