
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ev_p; } ;
struct iio_ring_buffer {TYPE_1__ shared_ev_pointer; } ;
typedef int s64 ;


 int FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (struct iio_ring_buffer*,int,int ) ;

int FUNC_2(struct iio_ring_buffer *VAR_0,
        int VAR_1,
        s64 VAR_2)
{
 if (VAR_0->shared_ev_pointer.ev_p)
  FUNC_0(VAR_0->shared_ev_pointer.ev_p,
       VAR_1,
       VAR_2);
 else
  return FUNC_1(VAR_0,
       VAR_1,
       VAR_2);
 return 0;
}
