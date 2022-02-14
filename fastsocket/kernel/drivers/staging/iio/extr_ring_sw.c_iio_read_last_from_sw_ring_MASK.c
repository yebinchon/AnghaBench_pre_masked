
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bpd; } ;
struct iio_sw_ring_buffer {unsigned char* last_written_p; TYPE_1__ buf; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (unsigned char*,unsigned char*,int ) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct iio_sw_ring_buffer *VAR_1,
          unsigned char *VAR_2)
{
 unsigned char *VAR_3;

 FUNC_1(&VAR_1->buf);
again:
 FUNC_0();
 VAR_3 = VAR_1->last_written_p;
 FUNC_0();

 if (VAR_3 == 0)
  return -VAR_0;
 FUNC_3(VAR_2, VAR_3, VAR_1->buf.bpd);

 if (FUNC_4(VAR_1->last_written_p >= VAR_3))
  goto again;

 FUNC_2(&VAR_1->buf);
 return 0;
}
