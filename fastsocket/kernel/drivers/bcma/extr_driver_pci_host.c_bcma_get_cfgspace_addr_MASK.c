
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct bcma_drv_pci {TYPE_1__* host_controller; } ;
struct TYPE_2__ {unsigned int host_cfg_addr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bcma_drv_pci*,int ) ;
 int FUNC_1 (struct bcma_drv_pci*,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(struct bcma_drv_pci *VAR_6, unsigned int VAR_7,
        unsigned int VAR_8, unsigned int VAR_9)
{
 u32 VAR_10 = 0;




 if (VAR_7 >= 2 || !(FUNC_0(VAR_6, VAR_2)
     & VAR_3))
  goto out;



 FUNC_1(VAR_6, VAR_4, VAR_5);

 VAR_10 = VAR_6->host_controller->host_cfg_addr;
 VAR_10 |= (VAR_7 << VAR_1);
 VAR_10 |= (VAR_8 << VAR_0);
 VAR_10 |= (VAR_9 & ~3);

out:
 return VAR_10;
}
