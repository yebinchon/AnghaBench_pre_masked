
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {TYPE_2__* ring; int modes; } ;
struct TYPE_3__ {int * get_bpd; int * get_length; int * rip_lots; } ;
struct TYPE_4__ {TYPE_1__ access; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct iio_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1(struct iio_dev *VAR_5)
{
 VAR_5->ring = FUNC_0(VAR_5);
 if (VAR_5->ring == ((void*)0))
  return -VAR_0;
 VAR_5->modes |= VAR_1;

 VAR_5->ring->access.rip_lots = &VAR_4;
 VAR_5->ring->access.get_length = &VAR_3;
 VAR_5->ring->access.get_bpd = &VAR_2;

 return 0;
}
