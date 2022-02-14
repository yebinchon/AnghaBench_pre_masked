
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bcma_device {TYPE_2__* bus; } ;
struct TYPE_3__ {struct bcma_device* core; } ;
struct TYPE_4__ {TYPE_1__ drv_mips; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct bcma_device*) ;
 int FUNC_2 (struct bcma_device*,int ) ;

unsigned int FUNC_3(struct bcma_device *VAR_0)
{
 struct bcma_device *VAR_1 = VAR_0->bus->drv_mips.core;
 u32 VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 == 0x3f)
  return 6;

 for (VAR_3 = 0; VAR_3 <= 4; VAR_3++)
  if (FUNC_2(VAR_1, FUNC_0(VAR_3)) &
      (1 << VAR_2))
   return VAR_3;

 return 5;
}
