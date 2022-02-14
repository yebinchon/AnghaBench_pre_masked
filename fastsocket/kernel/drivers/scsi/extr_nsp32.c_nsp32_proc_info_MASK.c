
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct Scsi_Host {int host_no; unsigned int io_port; int this_id; int sg_tablesize; int base; scalar_t__ n_io_port; int irq; scalar_t__ hostdata; } ;
typedef int off_t ;
struct TYPE_5__ {TYPE_3__* target; int Lock; int CurrentSC; TYPE_1__* pci_devid; scalar_t__ MmioLength; } ;
typedef TYPE_2__ nsp32_hw_data ;
struct TYPE_6__ {scalar_t__ sync_flag; int period; scalar_t__ offset; } ;
struct TYPE_4__ {long driver_data; } ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*,...) ;
 int VAR_8 ;
 int FUNC_2 (int,int) ;
 unsigned char FUNC_3 (unsigned int,int ) ;
 int * VAR_9 ;
 int FUNC_4 (unsigned int,int ) ;
 int VAR_10 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct Scsi_Host *VAR_11, char *VAR_12, char **VAR_13,
      off_t VAR_14, int VAR_15, int VAR_16)
{
 char *VAR_17 = VAR_12;
 int VAR_18;
 unsigned long VAR_19;
 nsp32_hw_data *VAR_20;
 int VAR_21;
 unsigned int VAR_22;
 unsigned char VAR_23;
 int VAR_24, VAR_25;
 long VAR_26;


 if (VAR_16 == VAR_8) {
  return -VAR_2;
 }

 VAR_21 = VAR_11->host_no;
 VAR_20 = (nsp32_hw_data *)VAR_11->hostdata;
 VAR_22 = VAR_11->io_port;

 FUNC_1("NinjaSCSI-32 status\n\n");
 FUNC_1("Driver version:        %s, $Revision: 1.33 $\n", VAR_10);
 FUNC_1("SCSI host No.:         %d\n", VAR_21);
 FUNC_1("IRQ:                   %d\n", VAR_11->irq);
 FUNC_1("IO:                    0x%lx-0x%lx\n", VAR_11->io_port, VAR_11->io_port + VAR_11->n_io_port - 1);
 FUNC_1("MMIO(virtual address): 0x%lx-0x%lx\n", VAR_11->base, VAR_11->base + VAR_20->MmioLength - 1);
 FUNC_1("sg_tablesize:          %d\n", VAR_11->sg_tablesize);
 FUNC_1("Chip revision:         0x%x\n", (FUNC_4(VAR_22, VAR_3) >> 8) & 0xff);

 VAR_23 = FUNC_3(VAR_22, VAR_1);
 VAR_26 = VAR_20->pci_devid->driver_data;




 FUNC_1("OEM:                   %ld, %s\n", (VAR_23 & (VAR_4|VAR_5)), VAR_9[VAR_26]);

 FUNC_5(&(VAR_20->Lock), VAR_19);
 FUNC_1("CurrentSC:             0x%p\n\n", VAR_20->CurrentSC);
 FUNC_6(&(VAR_20->Lock), VAR_19);


 FUNC_1("SDTR status\n");
 for (VAR_24 = 0; VAR_24 < FUNC_0(VAR_20->target); VAR_24++) {

                FUNC_1("id %d: ", VAR_24);

  if (VAR_24 == VAR_11->this_id) {
   FUNC_1("----- NinjaSCSI-32 host adapter\n");
   continue;
  }

  if (VAR_20->target[VAR_24].sync_flag == VAR_7) {
   if (VAR_20->target[VAR_24].period == 0 &&
       VAR_20->target[VAR_24].offset == VAR_0 ) {
    FUNC_1("async");
   } else {
    FUNC_1(" sync");
   }
  } else {
   FUNC_1(" none");
  }

  if (VAR_20->target[VAR_24].period != 0) {

   VAR_25 = 1000000 / (VAR_20->target[VAR_24].period * 4);

   FUNC_1(" transfer %d.%dMB/s, offset %d",
    VAR_25 / 1000,
    VAR_25 % 1000,
    VAR_20->target[VAR_24].offset
    );
  }
  FUNC_1("\n");
 }


 VAR_18 = VAR_17 - (VAR_12 + VAR_14);

 if(VAR_18 < 0) {
  *VAR_13 = ((void*)0);
                return 0;
        }


 VAR_18 = FUNC_2(VAR_18, VAR_15);
 *VAR_13 = VAR_12 + VAR_14;

 return VAR_18;
}
