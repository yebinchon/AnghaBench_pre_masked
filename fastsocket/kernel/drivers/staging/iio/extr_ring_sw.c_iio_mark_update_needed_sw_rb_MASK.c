
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_sw_ring_buffer {int update_needed; } ;
struct iio_ring_buffer {int dummy; } ;


 struct iio_sw_ring_buffer* FUNC_0 (struct iio_ring_buffer*) ;

int FUNC_1(struct iio_ring_buffer *VAR_0)
{
 struct iio_sw_ring_buffer *VAR_1 = FUNC_0(VAR_0);
 VAR_1->update_needed = 1;
 return 0;
}
