
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {TYPE_1__* host; } ;
struct scsi_cmnd {int serial_number; struct scsi_device* device; } ;
struct mscp {int cp_dma_addr; struct scsi_cmnd* SCpnt; } ;
struct hostdata {scalar_t__* cp_stat; struct mscp* cp; } ;
struct TYPE_2__ {unsigned int can_queue; int io_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct hostdata*,unsigned long,unsigned int,unsigned int*,unsigned int) ;
 int FUNC_2 (int ,struct scsi_cmnd*,char*,char*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct scsi_device *VAR_6, unsigned long VAR_7,
        struct hostdata *VAR_8, unsigned int VAR_9)
{
 struct scsi_cmnd *VAR_10;
 struct mscp *VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14 = 0, VAR_15[VAR_3];

 for (VAR_12 = 0; VAR_12 < VAR_6->host->can_queue; VAR_12++) {

  if (VAR_8->cp_stat[VAR_12] != VAR_4 && VAR_8->cp_stat[VAR_12] != VAR_1)
   continue;

  VAR_11 = &VAR_8->cp[VAR_12];
  VAR_10 = VAR_11->SCpnt;

  if (VAR_10->device != VAR_6)
   continue;

  if (VAR_8->cp_stat[VAR_12] == VAR_1)
   return;

  VAR_15[VAR_14++] = VAR_12;
 }

 if (FUNC_1(VAR_8, VAR_7, VAR_9, VAR_15, VAR_14))
  VAR_14 = 1;

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_12 = VAR_15[VAR_13];
  VAR_11 = &VAR_8->cp[VAR_12];
  VAR_10 = VAR_11->SCpnt;

  if (FUNC_0(VAR_6->host->io_port, VAR_11->cp_dma_addr, VAR_5)) {
   FUNC_2(VAR_2, VAR_10,
       "%s, pid %ld, mbox %d, adapter"
        " busy, will abort.\n",
        (VAR_9 ? "ihdlr" : "qcomm"),
        VAR_10->serial_number, VAR_12);
   VAR_8->cp_stat[VAR_12] = VAR_0;
   continue;
  }

  VAR_8->cp_stat[VAR_12] = VAR_1;
 }
}
