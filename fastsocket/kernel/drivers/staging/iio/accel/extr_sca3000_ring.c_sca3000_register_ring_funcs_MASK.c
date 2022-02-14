
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {TYPE_1__* ring; } ;
struct TYPE_2__ {int * postdisable; int * preenable; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct iio_dev *VAR_2)
{
 VAR_2->ring->preenable = &VAR_1;
 VAR_2->ring->postdisable = &VAR_0;
}
