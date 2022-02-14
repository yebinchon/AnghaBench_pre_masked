
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ bmdma_addr; } ;
struct ata_port {TYPE_1__ ioaddr; } ;
struct ata_device {int devno; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_0, struct ata_device *VAR_1)
{

 u8 VAR_2 = FUNC_0(VAR_0->ioaddr.bmdma_addr + 0x02);
 VAR_2 |= 1<<(VAR_1->devno + 5);
 FUNC_1(VAR_2, VAR_0->ioaddr.bmdma_addr + 0x02);
}
