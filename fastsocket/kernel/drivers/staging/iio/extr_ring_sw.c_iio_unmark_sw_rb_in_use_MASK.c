
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_sw_ring_buffer {int use_lock; int use_count; } ;
struct iio_ring_buffer {int dummy; } ;


 struct iio_sw_ring_buffer* FUNC_0 (struct iio_ring_buffer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iio_ring_buffer *VAR_0)
{
 struct iio_sw_ring_buffer *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(&VAR_1->use_lock);
 VAR_1->use_count--;
 FUNC_2(&VAR_1->use_lock);
}
