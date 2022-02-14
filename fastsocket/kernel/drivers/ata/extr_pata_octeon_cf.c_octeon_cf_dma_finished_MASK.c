
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


struct TYPE_10__ {int done; } ;
union cvmx_mio_boot_dma_intx {scalar_t__ u64; TYPE_4__ s; } ;
struct TYPE_9__ {int size; } ;
union cvmx_mio_boot_dma_cfgx {scalar_t__ u64; TYPE_3__ s; } ;
typedef int u8 ;
struct octeon_cf_port {int dummy; } ;
struct octeon_cf_data {int dma_engine; } ;
struct TYPE_12__ {scalar_t__ protocol; } ;
struct ata_queued_cmd {TYPE_6__ tf; int err_mask; } ;
struct ata_eh_info {int dummy; } ;
struct TYPE_7__ {struct ata_eh_info eh_info; } ;
struct ata_port {scalar_t__ hsm_task_state; TYPE_5__* ops; struct octeon_cf_port* private_data; int print_id; TYPE_2__* dev; TYPE_1__ link; } ;
struct TYPE_11__ {int (* sff_check_status ) (struct ata_port*) ;} ;
struct TYPE_8__ {struct octeon_cf_data* platform_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct ata_eh_info*,char*,int ) ;
 int FUNC_5 (struct ata_port*,struct ata_queued_cmd*,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (struct ata_port*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static unsigned int FUNC_10(struct ata_port *VAR_4,
     struct ata_queued_cmd *VAR_5)
{
 struct ata_eh_info *VAR_6 = &VAR_4->link.eh_info;
 struct octeon_cf_data *VAR_7 = VAR_4->dev->platform_data;
 union cvmx_mio_boot_dma_cfgx VAR_8;
 union cvmx_mio_boot_dma_intx VAR_9;
 struct octeon_cf_port *VAR_10;
 u8 VAR_11;

 FUNC_3("ata%u: protocol %d task_state %d\n",
  VAR_4->print_id, VAR_5->tf.protocol, VAR_4->hsm_task_state);


 if (VAR_4->hsm_task_state != VAR_3)
  return 0;

 VAR_10 = VAR_4->private_data;

 VAR_8.u64 = FUNC_6(FUNC_0(VAR_7->dma_engine));
 if (VAR_8.s.size != 0xfffff) {

  VAR_5->err_mask |= VAR_0;
  VAR_4->hsm_task_state = VAR_2;
 }


 VAR_8.u64 = 0;
 VAR_8.s.size = -1;
 FUNC_7(FUNC_0(VAR_7->dma_engine), VAR_8.u64);


 VAR_9.u64 = 0;
 FUNC_7(FUNC_2(VAR_7->dma_engine), VAR_9.u64);


 VAR_9.s.done = 1;
 FUNC_7(FUNC_1(VAR_7->dma_engine), VAR_9.u64);

 VAR_11 = VAR_4->ops->sff_check_status(VAR_4);

 FUNC_5(VAR_4, VAR_5, VAR_11, 0);

 if (FUNC_9(VAR_5->err_mask) && (VAR_5->tf.protocol == VAR_1))
  FUNC_4(VAR_6, "DMA stat 0x%x", VAR_11);

 return 1;
}
