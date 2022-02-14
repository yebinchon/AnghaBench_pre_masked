
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_14__ {int count; } ;
struct TYPE_13__ {scalar_t__ count; } ;
struct TYPE_12__ {int count; } ;
struct TYPE_17__ {int ad_type; scalar_t__ num_ioctl; TYPE_4__ copp_waitlist; TYPE_3__ scb_activelist; TYPE_2__ scb_waitlist; int max_cmds; TYPE_1__* enq; TYPE_6__* nvram; TYPE_5__* pcidev; int mem_ptr; int mem_len; int mem_addr; int io_len; int io_addr; } ;
typedef TYPE_7__ ips_ha_t ;
struct TYPE_18__ {char* buffer; int length; int localpos; scalar_t__ pos; int offset; } ;
struct TYPE_16__ {int * bios_low; int * bios_high; int signature; int adapter_type; } ;
struct TYPE_15__ {int irq; } ;
struct TYPE_11__ {int ucMaxPhysicalDevices; int * BootBlkVersion; int * CodeBlkVersion; } ;
typedef TYPE_8__ IPS_INFOSTR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_8__*,char*,...) ;
 int * VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(ips_ha_t * VAR_5, char *VAR_6, off_t VAR_7, int VAR_8)
{
 IPS_INFOSTR VAR_9;

 FUNC_0("ips_host_info", 1);

 VAR_9.buffer = VAR_6;
 VAR_9.length = VAR_8;
 VAR_9.offset = VAR_7;
 VAR_9.pos = 0;
 VAR_9.localpos = 0;

 FUNC_1(&VAR_9, "\nIBM ServeRAID General Information:\n\n");

 if ((FUNC_3(VAR_5->nvram->signature) == VAR_1) &&
     (FUNC_2(VAR_5->nvram->adapter_type) != 0))
  FUNC_1(&VAR_9, "\tController Type                   : %s\n",
     VAR_4[VAR_5->ad_type - 1]);
 else
  FUNC_1(&VAR_9,
     "\tController Type                   : Unknown\n");

 if (VAR_5->io_addr)
  FUNC_1(&VAR_9,
     "\tIO region                         : 0x%lx (%d bytes)\n",
     VAR_5->io_addr, VAR_5->io_len);

 if (VAR_5->mem_addr) {
  FUNC_1(&VAR_9,
     "\tMemory region                     : 0x%lx (%d bytes)\n",
     VAR_5->mem_addr, VAR_5->mem_len);
  FUNC_1(&VAR_9,
     "\tShared memory address             : 0x%lx\n",
     VAR_5->mem_ptr);
 }

 FUNC_1(&VAR_9, "\tIRQ number                        : %d\n", VAR_5->pcidev->irq);




 if (FUNC_3(VAR_5->nvram->signature) == VAR_1) {
 if (VAR_5->nvram->bios_low[3] == 0) {
            FUNC_1(&VAR_9,
             "\tBIOS Version                      : %c%c%c%c%c%c%c\n",
             VAR_5->nvram->bios_high[0], VAR_5->nvram->bios_high[1],
             VAR_5->nvram->bios_high[2], VAR_5->nvram->bios_high[3],
             VAR_5->nvram->bios_low[0], VAR_5->nvram->bios_low[1],
             VAR_5->nvram->bios_low[2]);

        } else {
      FUNC_1(&VAR_9,
             "\tBIOS Version                      : %c%c%c%c%c%c%c%c\n",
             VAR_5->nvram->bios_high[0], VAR_5->nvram->bios_high[1],
             VAR_5->nvram->bios_high[2], VAR_5->nvram->bios_high[3],
             VAR_5->nvram->bios_low[0], VAR_5->nvram->bios_low[1],
             VAR_5->nvram->bios_low[2], VAR_5->nvram->bios_low[3]);
        }

    }

    if (VAR_5->enq->CodeBlkVersion[7] == 0) {
        FUNC_1(&VAR_9,
            "\tFirmware Version                  : %c%c%c%c%c%c%c\n",
            VAR_5->enq->CodeBlkVersion[0], VAR_5->enq->CodeBlkVersion[1],
            VAR_5->enq->CodeBlkVersion[2], VAR_5->enq->CodeBlkVersion[3],
            VAR_5->enq->CodeBlkVersion[4], VAR_5->enq->CodeBlkVersion[5],
            VAR_5->enq->CodeBlkVersion[6]);
    } else {
        FUNC_1(&VAR_9,
            "\tFirmware Version                  : %c%c%c%c%c%c%c%c\n",
            VAR_5->enq->CodeBlkVersion[0], VAR_5->enq->CodeBlkVersion[1],
            VAR_5->enq->CodeBlkVersion[2], VAR_5->enq->CodeBlkVersion[3],
            VAR_5->enq->CodeBlkVersion[4], VAR_5->enq->CodeBlkVersion[5],
            VAR_5->enq->CodeBlkVersion[6], VAR_5->enq->CodeBlkVersion[7]);
    }

    if (VAR_5->enq->BootBlkVersion[7] == 0) {
        FUNC_1(&VAR_9,
            "\tBoot Block Version                : %c%c%c%c%c%c%c\n",
            VAR_5->enq->BootBlkVersion[0], VAR_5->enq->BootBlkVersion[1],
            VAR_5->enq->BootBlkVersion[2], VAR_5->enq->BootBlkVersion[3],
            VAR_5->enq->BootBlkVersion[4], VAR_5->enq->BootBlkVersion[5],
            VAR_5->enq->BootBlkVersion[6]);
    } else {
        FUNC_1(&VAR_9,
            "\tBoot Block Version                : %c%c%c%c%c%c%c%c\n",
            VAR_5->enq->BootBlkVersion[0], VAR_5->enq->BootBlkVersion[1],
            VAR_5->enq->BootBlkVersion[2], VAR_5->enq->BootBlkVersion[3],
            VAR_5->enq->BootBlkVersion[4], VAR_5->enq->BootBlkVersion[5],
            VAR_5->enq->BootBlkVersion[6], VAR_5->enq->BootBlkVersion[7]);
    }

 FUNC_1(&VAR_9, "\tDriver Version                    : %s%s\n",
    VAR_2, VAR_3);

 FUNC_1(&VAR_9, "\tDriver Build                      : %d\n",
    VAR_0);

 FUNC_1(&VAR_9, "\tMax Physical Devices              : %d\n",
    VAR_5->enq->ucMaxPhysicalDevices);
 FUNC_1(&VAR_9, "\tMax Active Commands               : %d\n",
    VAR_5->max_cmds);
 FUNC_1(&VAR_9, "\tCurrent Queued Commands           : %d\n",
    VAR_5->scb_waitlist.count);
 FUNC_1(&VAR_9, "\tCurrent Active Commands           : %d\n",
    VAR_5->scb_activelist.count - VAR_5->num_ioctl);
 FUNC_1(&VAR_9, "\tCurrent Queued PT Commands        : %d\n",
    VAR_5->copp_waitlist.count);
 FUNC_1(&VAR_9, "\tCurrent Active PT Commands        : %d\n",
    VAR_5->num_ioctl);

 FUNC_1(&VAR_9, "\n");

 return (VAR_9.localpos);
}
