
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {scalar_t__ protocol; } ;
struct ata_queued_cmd {int err_mask; TYPE_3__ tf; TYPE_2__* dev; } ;
struct TYPE_9__ {int idle_irq; } ;
struct ata_eh_info {int dummy; } ;
struct TYPE_6__ {struct ata_eh_info eh_info; } ;
struct ata_port {int hsm_task_state; TYPE_5__* ops; TYPE_4__ stats; int print_id; TYPE_1__ link; } ;
struct TYPE_10__ {int (* bmdma_status ) (struct ata_port*) ;int (* sff_check_altstatus ) (struct ata_port*) ;int (* sff_check_status ) (struct ata_port*) ;int (* irq_ack ) (struct ata_port*,int ) ;int (* sff_irq_clear ) (struct ata_port*) ;int (* bmdma_stop ) (struct ata_queued_cmd*) ;} ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

 int VAR_7 ;


 int VAR_8 ;
 int FUNC_0 (char*,int ,int,...) ;
 int FUNC_1 (struct ata_eh_info*,char*,int) ;
 int FUNC_2 (struct ata_port*,int ,char*) ;
 int FUNC_3 (struct ata_port*,struct ata_queued_cmd*,int,int ) ;
 int FUNC_4 (struct ata_port*) ;
 int FUNC_5 (struct ata_queued_cmd*) ;
 int FUNC_6 (struct ata_port*) ;
 int FUNC_7 (struct ata_port*) ;
 int FUNC_8 (struct ata_port*) ;
 int FUNC_9 (struct ata_port*,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static unsigned int FUNC_11(struct ata_port *VAR_9,
       struct ata_queued_cmd *VAR_10)
{
 struct ata_eh_info *VAR_11 = &VAR_9->link.eh_info;
 u8 VAR_12, VAR_13 = 0;

 FUNC_0("ata%u: protocol %d task_state %d\n",
  VAR_9->print_id, VAR_10->tf.protocol, VAR_9->hsm_task_state);


 switch (VAR_9->hsm_task_state) {
 case 129:
  if (!(VAR_10->dev->flags & VAR_3))
   goto idle_irq;
  break;
 case 128:
  if (VAR_10->tf.protocol == VAR_6 ||
      VAR_10->tf.protocol == VAR_1) {

   VAR_13 = VAR_9->ops->bmdma_status(VAR_9);
   FUNC_0("ata%u: host_stat 0x%X\n",
    VAR_9->print_id, VAR_13);


   if (!(VAR_13 & VAR_5))
    goto idle_irq;


   VAR_9->ops->bmdma_stop(VAR_10);

   if (FUNC_10(VAR_13 & VAR_4)) {

    VAR_10->err_mask |= VAR_0;
    VAR_9->hsm_task_state = VAR_7;
   }
  }
  break;
 case 130:
  break;
 default:
  goto idle_irq;
 }


 VAR_12 = VAR_9->ops->sff_check_altstatus(VAR_9);
 if (VAR_12 & VAR_2)
  goto busy_ata;


 VAR_12 = VAR_9->ops->sff_check_status(VAR_9);
 if (FUNC_10(VAR_12 & VAR_2))
  goto busy_ata;


 VAR_9->ops->sff_irq_clear(VAR_9);

 FUNC_3(VAR_9, VAR_10, VAR_12, 0);

 if (FUNC_10(VAR_10->err_mask) && (VAR_10->tf.protocol == VAR_6 ||
           VAR_10->tf.protocol == VAR_1))
  FUNC_1(VAR_11, "BMDMA stat 0x%x", VAR_13);

busy_ata:
 return 1;

idle_irq:
 VAR_9->stats.idle_irq++;
 return 0;
}
