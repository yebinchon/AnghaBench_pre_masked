
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* mark_param_change ) (struct iio_ring_buffer*) ;} ;
struct iio_ring_buffer {int length; TYPE_1__ access; } ;


 int FUNC_0 (struct iio_ring_buffer*) ;

int FUNC_1(struct iio_ring_buffer *VAR_0, int VAR_1)
{
 if (VAR_0->length != VAR_1) {
  VAR_0->length = VAR_1;
  if (VAR_0->access.mark_param_change)
   VAR_0->access.mark_param_change(VAR_0);
 }
 return 0;
}
