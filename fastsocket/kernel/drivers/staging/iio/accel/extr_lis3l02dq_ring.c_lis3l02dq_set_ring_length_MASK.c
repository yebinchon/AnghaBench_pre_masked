
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {TYPE_2__* ring; } ;
struct TYPE_3__ {int (* set_length ) (TYPE_2__*,int) ;} ;
struct TYPE_4__ {TYPE_1__ access; } ;


 int FUNC_0 (TYPE_2__*,int) ;

int FUNC_1(struct iio_dev *VAR_0, int VAR_1)
{

 if (VAR_0->ring->access.set_length)
  return VAR_0->ring->access.set_length(VAR_0->ring, 500);
 return 0;
}
