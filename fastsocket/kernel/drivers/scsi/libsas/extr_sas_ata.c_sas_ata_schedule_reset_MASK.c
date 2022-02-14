
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct ata_port* ap; } ;
struct domain_device {TYPE_1__ sata_dev; } ;
struct ata_eh_info {int action; int err_mask; } ;
struct TYPE_4__ {struct ata_eh_info eh_info; } ;
struct ata_port {int lock; TYPE_2__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct domain_device*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

void FUNC_4(struct domain_device *VAR_2)
{
 struct ata_eh_info *VAR_3;
 struct ata_port *VAR_4;
 unsigned long VAR_5;

 if (!FUNC_1(VAR_2))
  return;

 VAR_4 = VAR_2->sata_dev.ap;
 VAR_3 = &VAR_4->link.eh_info;

 FUNC_2(VAR_4->lock, VAR_5);
 VAR_3->err_mask |= VAR_0;
 VAR_3->action |= VAR_1;
 FUNC_0(VAR_4);
 FUNC_3(VAR_4->lock, VAR_5);
}
