
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ altstatus_addr; } ;
struct ata_port {TYPE_2__ ioaddr; TYPE_1__* ops; } ;
struct TYPE_3__ {scalar_t__ sff_check_altstatus; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ata_port*) ;

void FUNC_2(struct ata_port *VAR_0)
{
 if (VAR_0->ops->sff_check_altstatus || VAR_0->ioaddr.altstatus_addr) {


  FUNC_1(VAR_0);
  return;
 }



 FUNC_0();
}
