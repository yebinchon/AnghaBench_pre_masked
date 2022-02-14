
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_ring_buffer {int shared_ev_pointer; int ev_int; } ;
typedef int s64 ;


 int FUNC_0 (int *,int,int ,int *) ;

int FUNC_1(struct iio_ring_buffer *VAR_0,
         int VAR_1,
         s64 VAR_2)
{
 return FUNC_0(&VAR_0->ev_int,
          VAR_1,
          VAR_2,
          &VAR_0->shared_ev_pointer);
}
