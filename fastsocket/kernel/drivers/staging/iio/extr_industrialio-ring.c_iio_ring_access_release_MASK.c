
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chrdev; } ;
struct iio_ring_buffer {TYPE_1__ access_handler; } ;
struct device {int devt; } ;


 int FUNC_0 (int ) ;
 struct iio_ring_buffer* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct iio_ring_buffer *VAR_1
  = FUNC_1(VAR_0);
 FUNC_2(&VAR_1->access_handler.chrdev);
 FUNC_3(FUNC_0(VAR_0->devt));
}
