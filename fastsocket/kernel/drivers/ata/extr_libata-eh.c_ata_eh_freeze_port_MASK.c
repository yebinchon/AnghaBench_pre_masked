
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int error_handler; } ;


 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

void FUNC_3(struct ata_port *VAR_0)
{
 unsigned long VAR_1;

 if (!VAR_0->ops->error_handler)
  return;

 FUNC_1(VAR_0->lock, VAR_1);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0->lock, VAR_1);
}
