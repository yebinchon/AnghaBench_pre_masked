
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int scan_count; TYPE_2__* ring; scalar_t__ scan_timestamp; } ;
typedef int s64 ;
typedef int s16 ;
struct TYPE_3__ {int (* set_bpd ) (TYPE_2__*,size_t) ;} ;
struct TYPE_4__ {TYPE_1__ access; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,size_t) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_1)
{
 size_t VAR_2;

 if (!(VAR_1->scan_count || VAR_1->scan_timestamp))
  return -VAR_0;

 if (VAR_1->ring->access.set_bpd) {
  if (VAR_1->scan_timestamp)
   if (VAR_1->scan_count)
    VAR_2 = 2*sizeof(s64);
   else
    VAR_2 = sizeof(s64);
  else
   VAR_2 = VAR_1->scan_count*sizeof(s16);
  VAR_1->ring->access.set_bpd(VAR_1->ring, VAR_2);
 }

 return 0;
}
