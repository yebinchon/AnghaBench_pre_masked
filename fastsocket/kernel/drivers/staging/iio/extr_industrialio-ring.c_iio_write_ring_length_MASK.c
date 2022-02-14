
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct TYPE_2__ {scalar_t__ (* get_length ) (struct iio_ring_buffer*) ;int (* mark_param_change ) (struct iio_ring_buffer*) ;int (* set_length ) (struct iio_ring_buffer*,scalar_t__) ;} ;
struct iio_ring_buffer {TYPE_1__ access; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct iio_ring_buffer* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct iio_ring_buffer*) ;
 int FUNC_3 (struct iio_ring_buffer*,scalar_t__) ;
 int FUNC_4 (struct iio_ring_buffer*) ;

ssize_t FUNC_5(struct device *VAR_0,
          struct device_attribute *VAR_1,
          const char *VAR_2,
          size_t VAR_3)
{
 int VAR_4;
 ulong VAR_5;
 struct iio_ring_buffer *VAR_6 = FUNC_0(VAR_0);
 VAR_4 = FUNC_1(VAR_2, 10, &VAR_5);
 if (VAR_4)
  return VAR_4;

 if (VAR_6->access.get_length)
  if (VAR_5 == VAR_6->access.get_length(VAR_6))
   return VAR_3;

 if (VAR_6->access.set_length) {
  VAR_6->access.set_length(VAR_6, VAR_5);
  if (VAR_6->access.mark_param_change)
   VAR_6->access.mark_param_change(VAR_6);
 }

 return VAR_3;
}
