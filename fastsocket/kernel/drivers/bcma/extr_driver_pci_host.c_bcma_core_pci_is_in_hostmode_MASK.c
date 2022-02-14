
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct bcma_drv_pci {TYPE_2__* core; } ;
struct TYPE_3__ {int id; } ;
struct bcma_bus {TYPE_1__ chipinfo; } ;
struct TYPE_4__ {int io_addr; struct bcma_bus* bus; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ) ;

bool FUNC_2(struct bcma_drv_pci *VAR_0)
{
 struct bcma_bus *VAR_1 = VAR_0->core->bus;
 u16 VAR_2;
 u32 VAR_3;

 VAR_2 = (VAR_1->chipinfo.id & 0xFF00);
 if (VAR_2 != 0x4700 &&
     VAR_2 != 0x5300)
  return 0;

 FUNC_0(VAR_0->core, 0);

 return !FUNC_1(VAR_3, VAR_0->core->io_addr);
}
