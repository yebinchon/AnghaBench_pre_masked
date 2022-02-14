
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct get_conf {size_t IRQ; int* scsi_id; scalar_t__ SECOND; int MORE_support; scalar_t__ is_EISA; scalar_t__ is_PCI; int len; int queuesiz; int IRQ_TR; int cppadlen; int cplen; scalar_t__ DMA_support; } ;
struct eata_ccb {int dummy; } ;
struct Scsi_Host {long unique_id; long base; long io_port; int n_io_port; size_t irq; int this_id; int can_queue; int cmd_per_lun; int max_id; int max_lun; int sg_tablesize; int dma_channel; } ;
struct TYPE_3__ {char* revision; char EATA_revision; unsigned long cplen; unsigned short cppadlen; int hostid; int devflags; int primary; struct Scsi_Host* next; struct Scsi_Host* prev; int pdev; scalar_t__ channel; int moresupport; void* bustype; int name; int vendor; int reads; int ccb; } ;
typedef TYPE_1__ hostdata ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (struct Scsi_Host*) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct Scsi_Host* VAR_10 ;
 char* FUNC_6 (long,size_t,int,unsigned long,unsigned short) ;
 struct Scsi_Host* VAR_11 ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct get_conf*) ;
 int FUNC_10 (long) ;
 int FUNC_11 (char*,...) ;
 int * VAR_12 ;
 int* VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (size_t,int ,int ,char*,struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int ,char*,int) ;

__attribute__((used)) static int FUNC_15(long VAR_15, struct get_conf *VAR_16, struct pci_dev *VAR_17)
{
 unsigned long VAR_18 = 0;
 char *VAR_19;
 unsigned long VAR_20;
 unsigned short VAR_21;
 struct Scsi_Host *VAR_22;
 hostdata *VAR_23;

 FUNC_0(VAR_1, FUNC_9(VAR_16));

 if (VAR_16->DMA_support) {
  FUNC_11("HBA at %#.4lx supports DMA. Please use EATA-DMA driver.\n", VAR_15);
  if (!VAR_0)
   return 0;
 }

 if ((VAR_19 = FUNC_6(VAR_15, VAR_16->IRQ, VAR_16->scsi_id[3], VAR_20 = (FUNC_5(VAR_16->cplen) + 1) / 2, VAR_21 = (FUNC_4(VAR_16->cppadlen) + 1) / 2)) == ((void*)0)) {
  FUNC_11("HBA at %#lx didn't react on INQUIRY. Sorry.\n", VAR_15);
  return 0;
 }

 if (!FUNC_10(VAR_15) && !VAR_0) {
  FUNC_11("HBA at %#lx failed while performing self test & setup.\n", VAR_15);
  return 0;
 }

 VAR_18 = sizeof(hostdata) + (sizeof(struct eata_ccb) * FUNC_2(VAR_16->queuesiz));

 VAR_22 = FUNC_13(&VAR_9, VAR_18);
 if (VAR_22 == ((void*)0))
  return 0;

 if (!VAR_12[VAR_16->IRQ]) {
  if (!FUNC_12(VAR_16->IRQ, VAR_8, VAR_2, "EATA-PIO", VAR_22)) {
   VAR_12[VAR_16->IRQ]++;
   if (!VAR_16->IRQ_TR)
    VAR_13[VAR_16->IRQ] = 1;
  } else {
   FUNC_11("Couldn't allocate IRQ %d, Sorry.\n", VAR_16->IRQ);
   return 0;
  }
 } else {
  if (VAR_13[VAR_16->IRQ]) {
   FUNC_11("Can't support more than one HBA on this IRQ,\n" "  if the IRQ is edge triggered. Sorry.\n");
   return 0;
  } else
   VAR_12[VAR_16->IRQ]++;
 }

 VAR_23 = FUNC_1(VAR_22);

 FUNC_7(VAR_23->ccb, 0, (sizeof(struct eata_ccb) * FUNC_2(VAR_16->queuesiz)));
 FUNC_7(VAR_23->reads, 0, sizeof(VAR_23->reads));

 FUNC_14(FUNC_1(VAR_22)->vendor, &VAR_19[8], sizeof(FUNC_1(VAR_22)->vendor));
 FUNC_14(FUNC_1(VAR_22)->name, &VAR_19[16], sizeof(FUNC_1(VAR_22)->name));
 FUNC_1(VAR_22)->revision[0] = VAR_19[32];
 FUNC_1(VAR_22)->revision[1] = VAR_19[33];
 FUNC_1(VAR_22)->revision[2] = VAR_19[34];
 FUNC_1(VAR_22)->revision[3] = '.';
 FUNC_1(VAR_22)->revision[4] = VAR_19[35];
 FUNC_1(VAR_22)->revision[5] = 0;

 switch (FUNC_3(VAR_16->len)) {
 case 0x1c:
  FUNC_1(VAR_22)->EATA_revision = 'a';
  break;
 case 0x1e:
  FUNC_1(VAR_22)->EATA_revision = 'b';
  break;
 case 0x22:
  FUNC_1(VAR_22)->EATA_revision = 'c';
  break;
 case 0x24:
  FUNC_1(VAR_22)->EATA_revision = 'z';
 default:
  FUNC_1(VAR_22)->EATA_revision = '?';
 }

 if (FUNC_3(VAR_16->len) >= 0x22) {
  if (VAR_16->is_PCI)
   VAR_23->bustype = VAR_5;
  else if (VAR_16->is_EISA)
   VAR_23->bustype = VAR_3;
  else
   VAR_23->bustype = VAR_4;
 } else {
  if (VAR_19[21] == '4')
   VAR_23->bustype = VAR_5;
  else if (VAR_19[21] == '2')
   VAR_23->bustype = VAR_3;
  else
   VAR_23->bustype = VAR_4;
 }

 FUNC_1(VAR_22)->cplen = VAR_20;
 FUNC_1(VAR_22)->cppadlen = VAR_21;
 FUNC_1(VAR_22)->hostid = VAR_16->scsi_id[3];
 FUNC_1(VAR_22)->devflags = 1 << VAR_16->scsi_id[3];
 FUNC_1(VAR_22)->moresupport = VAR_16->MORE_support;
 VAR_22->unique_id = VAR_15;
 VAR_22->base = VAR_15;
 VAR_22->io_port = VAR_15;
 VAR_22->n_io_port = 9;
 VAR_22->irq = VAR_16->IRQ;
 VAR_22->dma_channel = VAR_6;
 VAR_22->this_id = VAR_16->scsi_id[3];
 VAR_22->can_queue = 1;
 VAR_22->cmd_per_lun = 1;
 VAR_22->sg_tablesize = VAR_7;

 VAR_23->channel = 0;

 VAR_23->pdev = FUNC_8(VAR_17);

 VAR_22->max_id = 8;
 VAR_22->max_lun = 8;

 if (VAR_16->SECOND)
  VAR_23->primary = 0;
 else
  VAR_23->primary = 1;

 VAR_23->next = ((void*)0);
 VAR_23->prev = VAR_11;
 if (VAR_23->prev != ((void*)0))
  FUNC_1(VAR_23->prev)->next = VAR_22;
 VAR_11 = VAR_22;
 if (VAR_10 == ((void*)0))
  VAR_10 = VAR_22;
 VAR_14++;
 return (1);
}
