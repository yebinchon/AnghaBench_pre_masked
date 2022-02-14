
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sg_list {int dummy; } ;
struct scsi_host_template {void* use_clustering; } ;
struct mscp {int dummy; } ;
struct hostdata {int dummy; } ;
struct TYPE_11__ {unsigned char heads; unsigned char sectors; unsigned char subversion; unsigned int board_number; TYPE_5__* cp; int * pdev; scalar_t__* board_id; } ;
struct TYPE_10__ {int sglist; int cp_dma_addr; } ;
struct TYPE_9__ {unsigned long io_port; unsigned long unique_id; unsigned long base; unsigned char irq; int sg_tablesize; int this_id; unsigned char can_queue; int unchecked_isa_dma; unsigned char dma_channel; unsigned char max_channel; int max_id; int max_lun; TYPE_1__* hostt; scalar_t__ cmd_per_lun; int n_io_port; } ;
struct TYPE_8__ {void* use_clustering; } ;


 char* FUNC_0 (unsigned int) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__* FUNC_1 (unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 unsigned char VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 unsigned char VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 unsigned char VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int) ;
 unsigned long FUNC_4 () ;
 int FUNC_5 (unsigned char) ;
 int FUNC_6 (unsigned char) ;
 int VAR_33 ;
 int VAR_34 ;
 char* VAR_35 ;
 int FUNC_7 (unsigned char) ;
 scalar_t__ VAR_36 ;
 int FUNC_8 (unsigned char) ;
 int FUNC_9 (unsigned char,int *) ;
 scalar_t__ VAR_37 ;
 void* FUNC_10 (scalar_t__) ;
 int FUNC_11 (int,int) ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int FUNC_12 (TYPE_6__*,int ,int) ;
 int FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 (int *,TYPE_5__*,int,int ) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (unsigned long) ;
 int FUNC_17 (unsigned long,int ) ;
 scalar_t__ FUNC_18 (unsigned char,char*) ;
 scalar_t__ FUNC_19 (unsigned char,int ,int,char*,void*) ;
 int FUNC_20 (unsigned long,int ,char*) ;
 TYPE_2__* FUNC_21 (struct scsi_host_template*,int) ;
 int FUNC_22 (unsigned char,int ) ;
 TYPE_2__** VAR_40 ;
 int * VAR_41 ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (char*,char*,...) ;
 scalar_t__ FUNC_26 (scalar_t__*,char*) ;
 scalar_t__ VAR_42 ;
 int FUNC_27 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_28 (unsigned long VAR_43, unsigned int VAR_44, struct scsi_host_template *VAR_45) {

   unsigned char VAR_46, VAR_47, VAR_48, VAR_49;
   unsigned char VAR_50;
   char *VAR_51, VAR_52[16];


   unsigned long VAR_53[8] = {
      0,
      0xc4000, 0xc8000, 0xcc000, 0xd0000,
      0xd4000, 0xd8000, 0xdc000
      };


   unsigned char VAR_54[4] = { 15, 14, 11, 10 };


   unsigned char VAR_55[4] = { 5, 6, 7, 0 };


   struct {
      unsigned char heads;
      unsigned char sectors;
      } VAR_56[4] = {
           { 16, 63 }, { 64, 32 }, { 64, 63 }, { 64, 32 }
           };

   struct config_1 {





      unsigned char bios_segment: 3, removable_disks_as_fixed: 1,
                    interrupt: 2, dma_channel: 2;


      } VAR_57;

   struct config_2 {





      unsigned char ha_scsi_id: 3, mapping_mode: 2,
                    bios_drive_number: 1, tfr_port: 2;


      } VAR_58;

   char VAR_59[16];

   FUNC_25(VAR_59, "%s%d", VAR_35, VAR_44);

   if (!FUNC_20(VAR_43, VAR_22, VAR_35)) {



      goto fail;
      }

   FUNC_23(&VAR_34);

   if (FUNC_10(VAR_43 + VAR_26) != VAR_20) goto freelock;

   VAR_50 = FUNC_10(VAR_43 + VAR_27);

   if ((VAR_50 & 0xf0) != VAR_21) goto freelock;

   *(char *)&VAR_57 = FUNC_10(VAR_43 + VAR_23);
   *(char *)&VAR_58 = FUNC_10(VAR_43 + VAR_24);

   VAR_46 = VAR_54[VAR_57];
   VAR_47 = VAR_55[VAR_57];
   VAR_48 = (VAR_50 & 0x0f);


   if (FUNC_19(VAR_46, VAR_33,
             VAR_7 | ((VAR_48 == VAR_3) ? VAR_8 : 0),
             VAR_35, (void *) &VAR_41[VAR_44])) {
      FUNC_15("%s: unable to allocate IRQ %u, detaching.\n", VAR_59, VAR_46);
      goto freelock;
      }

   if (VAR_48 == VAR_9 && FUNC_18(VAR_47, VAR_35)) {
      FUNC_15("%s: unable to allocate DMA channel %u, detaching.\n",
             VAR_59, VAR_47);
      goto freeirq;
      }

   if (VAR_37) VAR_45->use_clustering = VAR_1;

   FUNC_24(&VAR_34);
   VAR_40[VAR_44] = FUNC_21(VAR_45, sizeof(struct hostdata));
   FUNC_23(&VAR_34);

   if (VAR_40[VAR_44] == ((void*)0)) {
      FUNC_15("%s: unable to register host, detaching.\n", VAR_59);
      goto freedma;
      }

   VAR_40[VAR_44]->io_port = VAR_43;
   VAR_40[VAR_44]->unique_id = VAR_43;
   VAR_40[VAR_44]->n_io_port = VAR_22;
   VAR_40[VAR_44]->base = VAR_53[VAR_57];
   VAR_40[VAR_44]->irq = VAR_46;
   VAR_40[VAR_44]->sg_tablesize = VAR_15;
   VAR_40[VAR_44]->this_id = VAR_58;
   VAR_40[VAR_44]->can_queue = VAR_13;
   VAR_40[VAR_44]->cmd_per_lun = VAR_11;
   if (VAR_40[VAR_44]->this_id == 0) VAR_40[VAR_44]->this_id = -1;


   if (VAR_40[VAR_44]->base == 0) FUNC_13(VAR_0, VAR_40[VAR_44]->io_port + VAR_28);

   FUNC_12(FUNC_1(VAR_44), 0, sizeof(struct hostdata));
   FUNC_1(VAR_44)->heads = VAR_56[VAR_58].heads;
   FUNC_1(VAR_44)->sectors = VAR_56[VAR_58].sectors;
   FUNC_1(VAR_44)->subversion = VAR_48;
   FUNC_1(VAR_44)->pdev = ((void*)0);
   FUNC_1(VAR_44)->board_number = VAR_44;

   if (VAR_37) VAR_40[VAR_44]->sg_tablesize = VAR_14;

   if (FUNC_1(VAR_44)->subversion == VAR_3) {
      VAR_40[VAR_44]->unchecked_isa_dma = VAR_4;
      VAR_40[VAR_44]->dma_channel = VAR_18;
      FUNC_25(FUNC_0(VAR_44), "U34F%d", VAR_44);
      VAR_51 = "VESA";
      }
   else {
      unsigned long VAR_60;
      VAR_40[VAR_44]->unchecked_isa_dma = VAR_32;

      VAR_60=FUNC_4();
      FUNC_6(VAR_47);
      FUNC_5(VAR_47);
      FUNC_22(VAR_47, VAR_2);
      FUNC_7(VAR_47);
      FUNC_16(VAR_60);

      VAR_40[VAR_44]->dma_channel = VAR_47;
      FUNC_25(FUNC_0(VAR_44), "U14F%d", VAR_44);
      VAR_51 = "ISA";
      }

   VAR_40[VAR_44]->max_channel = VAR_10 - 1;
   VAR_40[VAR_44]->max_id = VAR_17;
   VAR_40[VAR_44]->max_lun = VAR_12;

   if (FUNC_1(VAR_44)->subversion == VAR_9 && !FUNC_3(VAR_44)) {
      FUNC_1(VAR_44)->board_id[40] = 0;

      if (FUNC_26(&FUNC_1(VAR_44)->board_id[32], "06000600")) {
         FUNC_15("%s: %s.\n", FUNC_0(VAR_44), &FUNC_1(VAR_44)->board_id[8]);
         FUNC_15("%s: firmware %s is outdated, FW PROM should be 28004-006.\n",
                FUNC_0(VAR_44), &FUNC_1(VAR_44)->board_id[32]);
         VAR_40[VAR_44]->hostt->use_clustering = VAR_1;
         VAR_40[VAR_44]->sg_tablesize = VAR_14;
         }
      }

   if (VAR_47 == VAR_18) FUNC_25(VAR_52, "%s", "BMST");
   else FUNC_25(VAR_52, "DMA %u", VAR_47);

   FUNC_24(&VAR_34);

   for (VAR_49 = 0; VAR_49 < VAR_40[VAR_44]->can_queue; VAR_49++)
      FUNC_1(VAR_44)->cp[VAR_49].cp_dma_addr = FUNC_14(FUNC_1(VAR_44)->pdev,
            &FUNC_1(VAR_44)->cp[VAR_49], sizeof(struct mscp), VAR_19);

   for (VAR_49 = 0; VAR_49 < VAR_40[VAR_44]->can_queue; VAR_49++)
      if (! ((&FUNC_1(VAR_44)->cp[VAR_49])->sglist = FUNC_11(
            VAR_40[VAR_44]->sg_tablesize * sizeof(struct sg_list),
            (VAR_40[VAR_44]->unchecked_isa_dma ? VAR_6 : 0) | VAR_5))) {
         FUNC_15("%s: kmalloc SGlist failed, mbox %d, detaching.\n", FUNC_0(VAR_44), VAR_49);
         goto release;
         }

   if (VAR_39 > VAR_16)
       VAR_39 = VAR_16;

   if (VAR_39 < VAR_11) VAR_39 = VAR_11;

   if (VAR_42 != VAR_29 && VAR_42 != VAR_31)
      VAR_42 = VAR_30;

   if (VAR_44 == 0) {
      FUNC_15("UltraStor 14F/34F: Copyright (C) 1994-2003 Dario Ballabio.\n");
      FUNC_15("%s config options -> of:%c, tm:%d, lc:%c, mq:%d, et:%c.\n",
             VAR_35, FUNC_2(VAR_37), VAR_42,
             FUNC_2(VAR_38), VAR_39, FUNC_2(VAR_36));
      }

   FUNC_15("%s: %s 0x%03lx, BIOS 0x%05x, IRQ %u, %s, SG %d, MB %d.\n",
          FUNC_0(VAR_44), VAR_51, (unsigned long)VAR_40[VAR_44]->io_port, (int)VAR_40[VAR_44]->base,
          VAR_40[VAR_44]->irq, VAR_52, VAR_40[VAR_44]->sg_tablesize, VAR_40[VAR_44]->can_queue);

   if (VAR_40[VAR_44]->max_id > 8 || VAR_40[VAR_44]->max_lun > 8)
      FUNC_15("%s: wide SCSI support enabled, max_id %u, max_lun %u.\n",
             FUNC_0(VAR_44), VAR_40[VAR_44]->max_id, VAR_40[VAR_44]->max_lun);

   for (VAR_49 = 0; VAR_49 <= VAR_40[VAR_44]->max_channel; VAR_49++)
      FUNC_15("%s: SCSI channel %u enabled, host target ID %d.\n",
             FUNC_0(VAR_44), VAR_49, VAR_40[VAR_44]->this_id);

   return VAR_32;

freedma:
   if (VAR_48 == VAR_9) FUNC_8(VAR_47);
freeirq:
   FUNC_9(VAR_46, &VAR_41[VAR_44]);
freelock:
   FUNC_24(&VAR_34);
   FUNC_17(VAR_43, VAR_22);
fail:
   return VAR_4;

release:
   FUNC_27(VAR_40[VAR_44]);
   return VAR_4;
}
