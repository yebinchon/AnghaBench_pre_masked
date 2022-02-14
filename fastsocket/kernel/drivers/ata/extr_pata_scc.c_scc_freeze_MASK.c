
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_ioports {int ctl_addr; } ;
struct ata_port {TYPE_1__* ops; int ctl; int last_ctl; struct ata_ioports ioaddr; } ;
struct TYPE_2__ {int (* sff_irq_clear ) (struct ata_port*) ;int (* sff_check_status ) (struct ata_port*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (struct ata_port*) ;

__attribute__((used)) static void FUNC_3 (struct ata_port *VAR_1)
{
 struct ata_ioports *VAR_2 = &VAR_1->ioaddr;

 VAR_1->ctl |= VAR_0;
 VAR_1->last_ctl = VAR_1->ctl;

 FUNC_0(VAR_2->ctl_addr, VAR_1->ctl);





 VAR_1->ops->sff_check_status(VAR_1);

 VAR_1->ops->sff_irq_clear(VAR_1);
}
