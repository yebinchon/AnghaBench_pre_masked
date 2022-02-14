
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {unsigned char volatile* SASR; unsigned char volatile* SCMD; } ;
typedef TYPE_1__ wd33c93_regs ;
struct scsi_host_template {char* proc_name; int * proc_info; } ;
struct WD33C93_hostdata {int dummy; } ;
struct TYPE_13__ {int no_sync; int dma_mode; scalar_t__ fast; } ;
struct TYPE_12__ {int scsi_interrupt; int dma_cntrl; int dma_intr; } ;
struct TYPE_11__ {int base; int irq; } ;


 int VAR_0 ;
 TYPE_8__* FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 TYPE_7__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ,int ,int ,char*,int ) ;
 TYPE_2__* FUNC_3 (struct scsi_host_template*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__,int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_7 () ;

int FUNC_8(struct scsi_host_template *VAR_11)
{
    static unsigned char VAR_12 = 0;
    wd33c93_regs VAR_13;

    if (!VAR_1 || VAR_12)
 return 0;
    VAR_12++;

    VAR_11->proc_name = "MVME147";
    VAR_11->proc_info = &VAR_10;

    VAR_8 = FUNC_3 (VAR_11, sizeof(struct WD33C93_hostdata));
    if (!VAR_8)
     goto err_out;

    VAR_8->base = 0xfffe4000;
    VAR_8->irq = VAR_3;
    VAR_13.SASR = (volatile unsigned char *)0xfffe4000;
    VAR_13.SCMD = (volatile unsigned char *)0xfffe4001;
    FUNC_0(VAR_8)->no_sync = 0xff;
    FUNC_0(VAR_8)->fast = 0;
    FUNC_0(VAR_8)->dma_mode = VAR_0;
    FUNC_6(VAR_8, VAR_13, VAR_5, VAR_6, VAR_4);

    if (FUNC_2(VAR_3, VAR_9, 0, "MVME147 SCSI PORT", VAR_9))
     goto err_unregister;
    if (FUNC_2(VAR_2, VAR_9, 0, "MVME147 SCSI DMA", VAR_9))
     goto err_free_irq;







    VAR_7->scsi_interrupt = 0x09;

    VAR_7->dma_cntrl = 0x00;
    VAR_7->dma_intr = 0x89;

    return 1;

 err_free_irq:
    FUNC_1(VAR_3, VAR_9);
 err_unregister:
    FUNC_7();
    FUNC_4(VAR_8);
 err_out:
    return 0;
}
