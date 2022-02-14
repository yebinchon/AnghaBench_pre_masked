
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* rfbdev; } ;
struct radeon_device {TYPE_3__ mode_info; } ;
struct radeon_bo {int dummy; } ;
struct TYPE_4__ {int obj; } ;
struct TYPE_5__ {TYPE_1__ rfb; } ;


 struct radeon_bo* FUNC_0 (int ) ;

bool FUNC_1(struct radeon_device *VAR_0, struct radeon_bo *VAR_1)
{
 if (VAR_1 == FUNC_0(VAR_0->mode_info.rfbdev->rfb.obj))
  return 1;
 return 0;
}
