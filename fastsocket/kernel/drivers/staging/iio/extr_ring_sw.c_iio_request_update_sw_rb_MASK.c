
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int bpd; } ;
struct iio_sw_ring_buffer {int use_lock; TYPE_1__ buf; scalar_t__ use_count; int update_needed; } ;
struct iio_ring_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iio_sw_ring_buffer*) ;
 int FUNC_1 (struct iio_sw_ring_buffer*,int ,int ) ;
 struct iio_sw_ring_buffer* FUNC_2 (struct iio_ring_buffer*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct iio_ring_buffer *VAR_1)
{
 int VAR_2 = 0;
 struct iio_sw_ring_buffer *VAR_3 = FUNC_2(VAR_1);

 FUNC_3(&VAR_3->use_lock);
 if (!VAR_3->update_needed)
  goto error_ret;
 if (VAR_3->use_count) {
  VAR_2 = -VAR_0;
  goto error_ret;
 }
 FUNC_0(VAR_3);
 VAR_2 = FUNC_1(VAR_3, VAR_3->buf.bpd, VAR_3->buf.length);
error_ret:
 FUNC_4(&VAR_3->use_lock);
 return VAR_2;
}
