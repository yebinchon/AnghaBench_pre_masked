
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ bmdma_addr; } ;
struct ata_port {TYPE_1__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

u8 FUNC_1(struct ata_port *VAR_1)
{
 return FUNC_0(VAR_1->ioaddr.bmdma_addr + VAR_0);
}
