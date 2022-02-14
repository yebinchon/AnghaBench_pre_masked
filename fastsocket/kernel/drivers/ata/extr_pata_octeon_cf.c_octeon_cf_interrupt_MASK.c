
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int done; } ;
union cvmx_mio_boot_dma_intx {void* u64; TYPE_6__ s; } ;
struct TYPE_10__ {int en; } ;
union cvmx_mio_boot_dma_cfgx {TYPE_4__ s; void* u64; } ;
typedef int u8 ;
struct octeon_cf_port {int dma_finished; int delayed_finish; int wq; } ;
struct octeon_cf_data {int dma_engine; } ;
struct TYPE_9__ {int flags; } ;
struct ata_queued_cmd {int cursg; TYPE_3__ tf; } ;
struct TYPE_11__ {int altstatus_addr; } ;
struct TYPE_8__ {int active_tag; } ;
struct ata_port {TYPE_5__ ioaddr; TYPE_2__ link; struct octeon_cf_port* private_data; TYPE_1__* dev; } ;
struct ata_host {int n_ports; int lock; struct ata_port** ports; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {struct octeon_cf_data* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (unsigned int) ;
 struct ata_queued_cmd* FUNC_4 (struct ata_port*,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (int ) ;
 unsigned int FUNC_8 (struct ata_port*,struct ata_queued_cmd*) ;
 int FUNC_9 (struct ata_queued_cmd*) ;
 int FUNC_10 (int ,int *,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_3, void *VAR_4)
{
 struct ata_host *VAR_5 = VAR_4;
 struct octeon_cf_port *VAR_6;
 int VAR_7;
 unsigned int VAR_8 = 0;
 unsigned long VAR_9;

 FUNC_13(&VAR_5->lock, VAR_9);

 FUNC_2("ENTER\n");
 for (VAR_7 = 0; VAR_7 < VAR_5->n_ports; VAR_7++) {
  u8 VAR_10;
  struct ata_port *VAR_11;
  struct ata_queued_cmd *VAR_12;
  union cvmx_mio_boot_dma_intx VAR_13;
  union cvmx_mio_boot_dma_cfgx VAR_14;
  struct octeon_cf_data *VAR_15;

  VAR_11 = VAR_5->ports[VAR_7];
  VAR_15 = VAR_11->dev->platform_data;

  VAR_15 = VAR_11->dev->platform_data;
  VAR_6 = VAR_11->private_data;
  VAR_13.u64 =
   FUNC_5(FUNC_1(VAR_15->dma_engine));
  VAR_14.u64 =
   FUNC_5(FUNC_0(VAR_15->dma_engine));

  VAR_12 = FUNC_4(VAR_11, VAR_11->link.active_tag);

  if (VAR_12 && !(VAR_12->tf.flags & VAR_2)) {
   if (VAR_13.s.done && !VAR_14.s.en) {
    if (!FUNC_11(VAR_12->cursg)) {
     VAR_12->cursg = FUNC_12(VAR_12->cursg);
     VAR_8 = 1;
     FUNC_9(VAR_12);
     continue;
    } else {
     VAR_6->dma_finished = 1;
    }
   }
   if (!VAR_6->dma_finished)
    continue;
   VAR_10 = FUNC_7(VAR_11->ioaddr.altstatus_addr);
   if (VAR_10 & (VAR_0 | VAR_1)) {
    VAR_13.u64 = 0;
    VAR_13.s.done = 1;
    FUNC_6(FUNC_1(VAR_15->dma_engine),
            VAR_13.u64);

    FUNC_10(VAR_6->wq,
         &VAR_6->delayed_finish, 1);
    VAR_8 = 1;
   } else {
    VAR_8 |= FUNC_8(VAR_11, VAR_12);
   }
  }
 }
 FUNC_14(&VAR_5->lock, VAR_9);
 FUNC_2("EXIT\n");
 return FUNC_3(VAR_8);
}
