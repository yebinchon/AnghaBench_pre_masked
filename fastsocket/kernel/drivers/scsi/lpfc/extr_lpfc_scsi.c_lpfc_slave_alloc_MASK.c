
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_device {int hostdata; TYPE_1__* host; } ;
struct lpfc_vport {int cfg_lun_queue_depth; struct lpfc_hba* phba; } ;
struct lpfc_hba {int total_scsi_bufs; int cfg_hba_queue_depth; int sdev_cnt; } ;
struct fc_rport {int dd_data; } ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct fc_rport*) ;
 int FUNC_2 (struct lpfc_vport*,int) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,int,...) ;
 int FUNC_4 (struct scsi_device*) ;
 struct fc_rport* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct scsi_device *VAR_5)
{
 struct lpfc_vport *VAR_6 = (struct lpfc_vport *) VAR_5->host->hostdata;
 struct lpfc_hba *VAR_7 = VAR_6->phba;
 struct fc_rport *VAR_8 = FUNC_5(FUNC_4(VAR_5));
 uint32_t VAR_9 = 0;
 uint32_t VAR_10 = 0;
 int VAR_11 = 0;
 uint32_t VAR_12;

 if (!VAR_8 || FUNC_1(VAR_8))
  return -VAR_0;

 VAR_5->hostdata = VAR_8->dd_data;
 VAR_12 = FUNC_0(&VAR_7->sdev_cnt);
 VAR_9 = VAR_7->total_scsi_bufs;
 VAR_10 = VAR_6->cfg_lun_queue_depth + 2;


 if ((VAR_12 * (VAR_6->cfg_lun_queue_depth + 2)) < VAR_9)
  return 0;


 if (VAR_9 >= VAR_7->cfg_hba_queue_depth - VAR_4 ) {
  FUNC_3(VAR_6, VAR_2, VAR_3,
     "0704 At limitation of %d preallocated "
     "command buffers\n", VAR_9);
  return 0;

 } else if (VAR_9 + VAR_10 >
  VAR_7->cfg_hba_queue_depth - VAR_4 ) {
  FUNC_3(VAR_6, VAR_2, VAR_3,
     "0705 Allocation request of %d "
     "command buffers will exceed max of %d.  "
     "Reducing allocation request to %d.\n",
     VAR_10, VAR_7->cfg_hba_queue_depth,
     (VAR_7->cfg_hba_queue_depth - VAR_9));
  VAR_10 = VAR_7->cfg_hba_queue_depth - VAR_9;
 }
 VAR_11 = FUNC_2(VAR_6, VAR_10);
 if (VAR_10 != VAR_11) {
   FUNC_3(VAR_6, VAR_1, VAR_3,
      "0708 Allocation request of %d "
      "command buffers did not succeed.  "
      "Allocated %d buffers.\n",
      VAR_10, VAR_11);
 }
 if (VAR_11 > 0)
  VAR_7->total_scsi_bufs += VAR_11;
 return 0;
}
