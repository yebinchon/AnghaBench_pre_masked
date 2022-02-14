
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct iio_ring_buffer* private; } ;
struct TYPE_5__ {struct iio_ring_buffer* private; } ;
struct TYPE_4__ {int (* mark_param_change ) (struct iio_ring_buffer*) ;} ;
struct iio_ring_buffer {TYPE_3__ access_handler; TYPE_2__ ev_int; struct iio_dev* indio_dev; TYPE_1__ access; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (struct iio_ring_buffer*) ;

void FUNC_1(struct iio_ring_buffer *VAR_0,
     struct iio_dev *VAR_1)
{
 if (VAR_0->access.mark_param_change)
  VAR_0->access.mark_param_change(VAR_0);
 VAR_0->indio_dev = VAR_1;
 VAR_0->ev_int.private = VAR_0;
 VAR_0->access_handler.private = VAR_0;
}
