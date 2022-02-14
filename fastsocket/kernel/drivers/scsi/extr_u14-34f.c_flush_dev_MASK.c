
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct scsi_cmnd {int serial_number; struct scsi_device* device; } ;
struct mscp {int cp_dma_addr; struct scsi_cmnd* SCpnt; } ;
struct TYPE_4__ {scalar_t__* cp_stat; struct mscp* cp; } ;
struct TYPE_3__ {unsigned int can_queue; scalar_t__ io_port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (unsigned int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (unsigned int,unsigned long,unsigned int,unsigned int*,unsigned int) ;
 int FUNC_5 (int ,struct scsi_cmnd*,char*,char*,int ,unsigned int) ;
 TYPE_1__** VAR_9 ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_7(struct scsi_device *VAR_10, unsigned long VAR_11, unsigned int VAR_12,
                      unsigned int VAR_13) {
   struct scsi_cmnd *VAR_14;
   struct mscp *VAR_15;
   unsigned int VAR_16, VAR_17, VAR_18 = 0, VAR_19[VAR_5];

   for (VAR_16 = 0; VAR_16 < VAR_9[VAR_12]->can_queue; VAR_16++) {

      if (FUNC_1(VAR_12)->cp_stat[VAR_16] != VAR_6 && FUNC_1(VAR_12)->cp_stat[VAR_16] != VAR_2) continue;

      VAR_15 = &FUNC_1(VAR_12)->cp[VAR_16]; VAR_14 = VAR_15->SCpnt;

      if (VAR_14->device != VAR_10) continue;

      if (FUNC_1(VAR_12)->cp_stat[VAR_16] == VAR_2) return;

      VAR_19[VAR_18++] = VAR_16;
      }

   if (FUNC_4(VAR_12, VAR_11, VAR_13, VAR_19, VAR_18)) VAR_18 = 1;

   for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
      VAR_16 = VAR_19[VAR_17]; VAR_15 = &FUNC_1(VAR_12)->cp[VAR_16]; VAR_14 = VAR_15->SCpnt;

      if (FUNC_6(VAR_9[VAR_12]->io_port, VAR_4)) {
         FUNC_5(VAR_3, VAR_14,
   "%s, pid %ld, mbox %d, adapter"
                " busy, will abort.\n", (VAR_13 ? "ihdlr" : "qcomm"),
                VAR_14->serial_number, VAR_16);
         FUNC_1(VAR_12)->cp_stat[VAR_16] = VAR_0;
         continue;
         }

      FUNC_3(FUNC_0(VAR_15->cp_dma_addr), VAR_9[VAR_12]->io_port + VAR_8);
      FUNC_2(VAR_1, VAR_9[VAR_12]->io_port + VAR_7);
      FUNC_1(VAR_12)->cp_stat[VAR_16] = VAR_2;
      }

}
