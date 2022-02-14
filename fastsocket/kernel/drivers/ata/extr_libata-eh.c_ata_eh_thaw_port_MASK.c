
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {int print_id; int lock; TYPE_1__* ops; int pflags; } ;
struct TYPE_2__ {int (* thaw ) (struct ata_port*) ;int error_handler; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct ata_port*) ;

void FUNC_4(struct ata_port *VAR_1)
{
 unsigned long VAR_2;

 if (!VAR_1->ops->error_handler)
  return;

 FUNC_1(VAR_1->lock, VAR_2);

 VAR_1->pflags &= ~VAR_0;

 if (VAR_1->ops->thaw)
  VAR_1->ops->thaw(VAR_1);

 FUNC_2(VAR_1->lock, VAR_2);

 FUNC_0("ata%u port thawed\n", VAR_1->print_id);
}
