
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bpd; } ;
struct iio_sw_ring_buffer {scalar_t__ data; scalar_t__ half_p; scalar_t__ last_written_p; scalar_t__ write_p; scalar_t__ read_p; TYPE_1__ buf; int use_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_2 (int,int ) ;

__attribute__((used)) static inline int FUNC_3(struct iio_sw_ring_buffer *VAR_3,
         int VAR_4, int VAR_5)
{
 if ((VAR_5 == 0) || (VAR_4 == 0))
  return -VAR_0;

 FUNC_1(&VAR_3->buf, VAR_4, VAR_5);
 VAR_3->use_lock = FUNC_0((VAR_3)->use_lock);
 VAR_3->data = FUNC_2(VAR_5*VAR_3->buf.bpd, VAR_2);
 VAR_3->read_p = 0;
 VAR_3->write_p = 0;
 VAR_3->last_written_p = 0;
 VAR_3->half_p = 0;
 return VAR_3->data ? 0 : -VAR_1;
}
