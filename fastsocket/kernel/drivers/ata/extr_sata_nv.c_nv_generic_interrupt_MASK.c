
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct ata_queued_cmd {TYPE_2__ tf; } ;
struct TYPE_4__ {int active_tag; } ;
struct ata_port {TYPE_3__* ops; TYPE_1__ link; } ;
struct ata_host {unsigned int n_ports; int lock; struct ata_port** ports; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int (* sff_check_status ) (struct ata_port*) ;} ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 struct ata_queued_cmd* FUNC_1 (struct ata_port*,int ) ;
 scalar_t__ FUNC_2 (struct ata_port*,struct ata_queued_cmd*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct ata_port*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct ata_host *VAR_3 = VAR_2;
 unsigned int VAR_4;
 unsigned int VAR_5 = 0;
 unsigned long VAR_6;

 FUNC_3(&VAR_3->lock, VAR_6);

 for (VAR_4 = 0; VAR_4 < VAR_3->n_ports; VAR_4++) {
  struct ata_port *VAR_7 = VAR_3->ports[VAR_4];
  struct ata_queued_cmd *VAR_8;

  VAR_8 = FUNC_1(VAR_7, VAR_7->link.active_tag);
  if (VAR_8 && (!(VAR_8->tf.flags & VAR_0))) {
   VAR_5 += FUNC_2(VAR_7, VAR_8);
  } else {




   VAR_7->ops->sff_check_status(VAR_7);
  }
 }

 FUNC_4(&VAR_3->lock, VAR_6);

 return FUNC_0(VAR_5);
}
