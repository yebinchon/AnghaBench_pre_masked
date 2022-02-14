
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct ata_queued_cmd {int flags; TYPE_2__ tf; } ;
struct TYPE_3__ {int active_tag; } ;
struct ata_port {TYPE_1__ link; } ;
struct ata_host {unsigned int n_ports; int lock; struct ata_port** ports; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 struct ata_queued_cmd* FUNC_1 (struct ata_port*,int ) ;
 unsigned int FUNC_2 (struct ata_port*,struct ata_queued_cmd*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct ata_host *VAR_4 = VAR_3;
 unsigned int VAR_5;
 unsigned int VAR_6 = 0;
 unsigned long VAR_7;


 FUNC_3(&VAR_4->lock, VAR_7);

 for (VAR_5 = 0; VAR_5 < VAR_4->n_ports; VAR_5++) {
  struct ata_port *VAR_8 = VAR_4->ports[VAR_5];
  struct ata_queued_cmd *VAR_9;

  VAR_9 = FUNC_1(VAR_8, VAR_8->link.active_tag);
  if (VAR_9 && (!(VAR_9->tf.flags & VAR_1)) &&
      (VAR_9->flags & VAR_0))
   VAR_6 |= FUNC_2(VAR_8, VAR_9);
 }

 FUNC_4(&VAR_4->lock, VAR_7);

 return FUNC_0(VAR_6);
}
