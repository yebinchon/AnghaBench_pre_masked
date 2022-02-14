
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct Scsi_Host {int host_no; int this_id; int sg_tablesize; int base; scalar_t__ n_io_port; int io_port; int irq; scalar_t__ hostdata; } ;
typedef int off_t ;
struct TYPE_3__ {TYPE_2__* Sync; int Lock; int CurrentSC; scalar_t__ MmioLength; } ;
typedef TYPE_1__ nsp_hw_data ;
struct TYPE_4__ {int SyncNegotiation; int SyncPeriod; int SyncOffset; } ;


 int FUNC_0 (TYPE_2__*) ;



 int VAR_0 ;
 int FUNC_1 (char*,...) ;



 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct Scsi_Host *VAR_2, char *VAR_3, char **VAR_4,
    off_t VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;
 char *VAR_9 = VAR_3;
 int VAR_10;
 int VAR_11;
 unsigned long VAR_12;
 nsp_hw_data *VAR_13;
 int VAR_14;

 if (VAR_7) {
  return -VAR_0;
 }

 VAR_14 = VAR_2->host_no;
 VAR_13 = (nsp_hw_data *)VAR_2->hostdata;


 FUNC_1("NinjaSCSI status\n\n");
 FUNC_1("Driver version:        $Revision: 1.23 $\n");
 FUNC_1("SCSI host No.:         %d\n", VAR_14);
 FUNC_1("IRQ:                   %d\n", VAR_2->irq);
 FUNC_1("IO:                    0x%lx-0x%lx\n", VAR_2->io_port, VAR_2->io_port + VAR_2->n_io_port - 1);
 FUNC_1("MMIO(virtual address): 0x%lx-0x%lx\n", VAR_2->base, VAR_2->base + VAR_13->MmioLength - 1);
 FUNC_1("sg_tablesize:          %d\n", VAR_2->sg_tablesize);

 FUNC_1("burst transfer mode:   ");
 switch (VAR_1) {
 case 132:
  FUNC_1("io8");
  break;
 case 133:
  FUNC_1("io32");
  break;
 case 131:
  FUNC_1("mem32");
  break;
 default:
  FUNC_1("???");
  break;
 }
 FUNC_1("\n");


 FUNC_3(&(VAR_13->Lock), VAR_12);
 FUNC_1("CurrentSC:             0x%p\n\n", VAR_13->CurrentSC);
 FUNC_4(&(VAR_13->Lock), VAR_12);

 FUNC_1("SDTR status\n");
 for(VAR_8 = 0; VAR_8 < FUNC_0(VAR_13->Sync); VAR_8++) {

  FUNC_1("id %d: ", VAR_8);

  if (VAR_8 == VAR_2->this_id) {
   FUNC_1("----- NinjaSCSI-3 host adapter\n");
   continue;
  }

  switch(VAR_13->Sync[VAR_8].SyncNegotiation) {
  case 128:
   FUNC_1(" sync");
   break;
  case 130:
   FUNC_1("async");
   break;
  case 129:
   FUNC_1(" none");
   break;
  default:
   FUNC_1("?????");
   break;
  }

  if (VAR_13->Sync[VAR_8].SyncPeriod != 0) {
   VAR_11 = 1000000 / (VAR_13->Sync[VAR_8].SyncPeriod * 4);

   FUNC_1(" transfer %d.%dMB/s, offset %d",
    VAR_11 / 1000,
    VAR_11 % 1000,
    VAR_13->Sync[VAR_8].SyncOffset
    );
  }
  FUNC_1("\n");
 }

 VAR_10 = VAR_9 - (VAR_3 + VAR_5);

 if(VAR_10 < 0) {
  *VAR_4 = ((void*)0);
                return 0;
        }


 VAR_10 = FUNC_2(VAR_10, VAR_6);
 *VAR_4 = VAR_3 + VAR_5;

 return VAR_10;
}
