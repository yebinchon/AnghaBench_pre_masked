
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bmdma_addr; } ;
struct ata_port {TYPE_1__ ioaddr; } ;


 int FUNC_0 (struct ata_port*) ;

int FUNC_1(struct ata_port *VAR_0)
{
 if (VAR_0->ioaddr.bmdma_addr)
  return FUNC_0(VAR_0);
 return 0;
}
