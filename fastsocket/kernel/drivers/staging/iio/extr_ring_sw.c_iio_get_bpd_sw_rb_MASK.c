
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bpd; } ;
struct iio_sw_ring_buffer {TYPE_1__ buf; } ;
struct iio_ring_buffer {int dummy; } ;


 struct iio_sw_ring_buffer* FUNC_0 (struct iio_ring_buffer*) ;

int FUNC_1(struct iio_ring_buffer *VAR_0)
{
 struct iio_sw_ring_buffer *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->buf.bpd;
}
