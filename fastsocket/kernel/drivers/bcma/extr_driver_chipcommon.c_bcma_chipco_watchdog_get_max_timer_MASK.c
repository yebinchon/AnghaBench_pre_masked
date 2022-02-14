
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct bcma_drv_cc {int capabilities; TYPE_2__* core; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct bcma_bus {TYPE_1__ chipinfo; } ;
struct TYPE_6__ {int rev; } ;
struct TYPE_5__ {TYPE_3__ id; struct bcma_bus* bus; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct bcma_drv_cc *VAR_2)
{
 struct bcma_bus *VAR_3 = VAR_2->core->bus;
 u32 VAR_4;

 if (VAR_2->capabilities & VAR_0) {
  if (VAR_3->chipinfo.id == VAR_1)
   VAR_4 = 32;
  else if (VAR_2->core->id.rev < 26)
   VAR_4 = 16;
  else
   VAR_4 = (VAR_2->core->id.rev >= 37) ? 32 : 24;
 } else {
  VAR_4 = 28;
 }
 if (VAR_4 == 32)
  return 0xffffffff;
 else
  return (1 << VAR_4) - 1;
}
