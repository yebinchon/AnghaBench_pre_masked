
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_queued_cmd {int err_mask; int tag; struct ata_port* ap; } ;
struct ata_port {int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* sff_irq_on ) (struct ata_port*) ;scalar_t__ error_handler; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 struct ata_queued_cmd* FUNC_2 (struct ata_port*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (struct ata_port*) ;
 int FUNC_7 (struct ata_port*) ;

__attribute__((used)) static void FUNC_8(struct ata_queued_cmd *VAR_1, int VAR_2)
{
 struct ata_port *VAR_3 = VAR_1->ap;
 unsigned long VAR_4;

 if (VAR_3->ops->error_handler) {
  if (VAR_2) {
   FUNC_4(VAR_3->lock, VAR_4);




   VAR_1 = FUNC_2(VAR_3, VAR_1->tag);
   if (VAR_1) {
    if (FUNC_3(!(VAR_1->err_mask & VAR_0))) {
     VAR_3->ops->sff_irq_on(VAR_3);
     FUNC_1(VAR_1);
    } else
     FUNC_0(VAR_3);
   }

   FUNC_5(VAR_3->lock, VAR_4);
  } else {
   if (FUNC_3(!(VAR_1->err_mask & VAR_0)))
    FUNC_1(VAR_1);
   else
    FUNC_0(VAR_3);
  }
 } else {
  if (VAR_2) {
   FUNC_4(VAR_3->lock, VAR_4);
   VAR_3->ops->sff_irq_on(VAR_3);
   FUNC_1(VAR_1);
   FUNC_5(VAR_3->lock, VAR_4);
  } else
   FUNC_1(VAR_1);
 }
}
