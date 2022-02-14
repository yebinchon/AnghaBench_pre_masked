
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {TYPE_1__* ops; } ;
struct TYPE_2__ {int * media_changed; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cdrom_device_info*,int ) ;

int FUNC_2(struct cdrom_device_info *VAR_1)
{



 if (VAR_1 == ((void*)0) || VAR_1->ops->media_changed == ((void*)0))
  return 0;
 if (!FUNC_0(VAR_0))
  return 0;
 return FUNC_1(VAR_1, 0);
}
