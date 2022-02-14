
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ protocol; } ;
struct ata_queued_cmd {int flags; int tag; int (* complete_fn ) (struct ata_queued_cmd*) ;TYPE_2__ tf; TYPE_1__* dev; struct ata_port* ap; } ;
struct ata_port {int qc_active; struct ata_link* excl_link; int nr_active_links; } ;
struct ata_link {int sactive; int active_tag; } ;
struct TYPE_3__ {struct ata_link* link; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct ata_queued_cmd *VAR_5)
{
 struct ata_port *VAR_6;
 struct ata_link *VAR_7;

 FUNC_0(VAR_5 == ((void*)0));
 FUNC_0(!(VAR_5->flags & VAR_1));
 VAR_6 = VAR_5->ap;
 VAR_7 = VAR_5->dev->link;

 if (FUNC_2(VAR_5->flags & VAR_3))
  FUNC_1(VAR_5);


 if (VAR_5->tf.protocol == VAR_0) {
  VAR_7->sactive &= ~(1 << VAR_5->tag);
  if (!VAR_7->sactive)
   VAR_6->nr_active_links--;
 } else {
  VAR_7->active_tag = VAR_4;
  VAR_6->nr_active_links--;
 }


 if (FUNC_4(VAR_5->flags & VAR_2 &&
       VAR_6->excl_link == VAR_7))
  VAR_6->excl_link = ((void*)0);





 VAR_5->flags &= ~VAR_1;
 VAR_6->qc_active &= ~(1 << VAR_5->tag);


 VAR_5->complete_fn(VAR_5);
}
