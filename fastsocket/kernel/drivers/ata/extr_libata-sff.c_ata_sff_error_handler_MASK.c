
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ protocol; } ;
struct ata_queued_cmd {int flags; scalar_t__ err_mask; TYPE_1__ tf; } ;
struct TYPE_8__ {int active_tag; } ;
struct TYPE_6__ {int ctl_addr; scalar_t__ bmdma_addr; } ;
struct ata_port {TYPE_3__* ops; TYPE_4__ link; TYPE_2__ ioaddr; int lock; } ;
typedef int * ata_reset_fn_t ;
struct TYPE_7__ {int (* bmdma_status ) (struct ata_port*) ;int postreset; int prereset; int (* drain_fifo ) (struct ata_queued_cmd*) ;int (* sff_irq_clear ) (struct ata_port*) ;int (* sff_check_status ) (struct ata_port*) ;int (* bmdma_stop ) (struct ata_queued_cmd*) ;int * hardreset; int * softreset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct ata_queued_cmd* FUNC_0 (struct ata_port*,int ) ;
 int FUNC_1 (struct ata_port*,int ,int *,int *,int ) ;
 int FUNC_2 (struct ata_port*) ;
 scalar_t__ FUNC_3 (int *) ;
 int * VAR_6 ;
 int FUNC_4 (struct ata_port*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (struct ata_port*) ;
 int FUNC_9 (struct ata_queued_cmd*) ;
 int FUNC_10 (struct ata_port*) ;
 int FUNC_11 (struct ata_port*) ;
 int FUNC_12 (struct ata_queued_cmd*) ;

void FUNC_13(struct ata_port *VAR_7)
{
 ata_reset_fn_t VAR_8 = VAR_7->ops->softreset;
 ata_reset_fn_t VAR_9 = VAR_7->ops->hardreset;
 struct ata_queued_cmd *VAR_10;
 unsigned long VAR_11;
 int VAR_12 = 0;

 VAR_10 = FUNC_0(VAR_7, VAR_7->link.active_tag);
 if (VAR_10 && !(VAR_10->flags & VAR_5))
  VAR_10 = ((void*)0);


 FUNC_6(VAR_7->lock, VAR_11);

 if (VAR_7->ioaddr.bmdma_addr &&
     VAR_10 && (VAR_10->tf.protocol == VAR_4 ||
     VAR_10->tf.protocol == VAR_2)) {
  u8 VAR_13;

  VAR_13 = VAR_7->ops->bmdma_status(VAR_7);






  if (VAR_10->err_mask == VAR_1
      && (VAR_13 & VAR_3)) {
   VAR_10->err_mask = VAR_0;
   VAR_12 = 1;
  }

  VAR_7->ops->bmdma_stop(VAR_10);
 }

 FUNC_4(VAR_7);
 VAR_7->ops->sff_check_status(VAR_7);
 VAR_7->ops->sff_irq_clear(VAR_7);





 if (VAR_7->ops->drain_fifo)
  VAR_7->ops->drain_fifo(VAR_10);

 FUNC_7(VAR_7->lock, VAR_11);

 if (VAR_12)
  FUNC_2(VAR_7);






 if (VAR_8 == VAR_6 && !VAR_7->ioaddr.ctl_addr)
  VAR_8 = ((void*)0);
 if (FUNC_3(VAR_9) && !FUNC_5(&VAR_7->link))
  VAR_9 = ((void*)0);

 FUNC_1(VAR_7, VAR_7->ops->prereset, VAR_8, VAR_9,
    VAR_7->ops->postreset);
}
