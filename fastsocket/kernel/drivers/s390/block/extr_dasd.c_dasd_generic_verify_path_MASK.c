
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opm; } ;
struct dasd_device {TYPE_1__ path_data; } ;
typedef int __u8 ;


 int FUNC_0 (struct dasd_device*) ;

int FUNC_1(struct dasd_device *VAR_0, __u8 VAR_1)
{
 if (!VAR_0->path_data.opm && VAR_1) {
  VAR_0->path_data.opm = VAR_1;
  FUNC_0(VAR_0);
 } else
  VAR_0->path_data.opm |= VAR_1;
 return 0;
}
