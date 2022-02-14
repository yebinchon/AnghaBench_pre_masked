
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_ioports {scalar_t__ ctl_addr; } ;
struct ata_port {TYPE_1__* ops; int ctl; int last_ctl; struct ata_ioports ioaddr; } ;
struct TYPE_2__ {int (* sff_irq_clear ) (struct ata_port*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct ata_port*) ;

u8 FUNC_3(struct ata_port *VAR_1)
{
 struct ata_ioports *VAR_2 = &VAR_1->ioaddr;
 u8 VAR_3;

 VAR_1->ctl &= ~VAR_0;
 VAR_1->last_ctl = VAR_1->ctl;

 if (VAR_2->ctl_addr)
  FUNC_1(VAR_1->ctl, VAR_2->ctl_addr);
 VAR_3 = FUNC_0(VAR_1);

 VAR_1->ops->sff_irq_clear(VAR_1);

 return VAR_3;
}
