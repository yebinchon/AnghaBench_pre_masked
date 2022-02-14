
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct srp_cmd {int task_attr; scalar_t__ tag; int lun; int * cdb; } ;
struct scsi_lun {int dummy; } ;
struct TYPE_5__ {void* sgl; } ;
struct TYPE_6__ {int length; TYPE_2__ table; } ;
struct TYPE_4__ {void* ptr; } ;
struct scsi_cmnd {int tag; TYPE_3__ sdb; int cmnd; TYPE_1__ SCp; } ;
struct Scsi_Host {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (char*,void*,int ,int ,int,int,int,unsigned long long) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int *,int ) ;
 struct scsi_cmnd* FUNC_3 (struct Scsi_Host*,int,int ) ;
 int FUNC_4 (struct Scsi_Host*,struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*,scalar_t__,struct scsi_lun*,scalar_t__) ;
 int FUNC_6 (struct srp_cmd*) ;
 int FUNC_7 (struct srp_cmd*,int) ;

int FUNC_8(struct Scsi_Host *VAR_6, struct srp_cmd *VAR_7, void *VAR_8,
    u64 VAR_9, u64 VAR_10)
{
 enum dma_data_direction VAR_11;
 struct scsi_cmnd *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 switch (VAR_7->task_attr) {
 case 128:
  VAR_13 = VAR_5;
  break;
 case 129:
  VAR_13 = VAR_4;
  break;
 case 130:
  VAR_13 = VAR_3;
  break;
 default:
  FUNC_1("Task attribute %d not supported\n", VAR_7->task_attr);
  VAR_13 = VAR_4;
 }

 VAR_11 = FUNC_6(VAR_7);
 VAR_14 = FUNC_7(VAR_7, VAR_11);

 FUNC_0("%p %x %lx %d %d %d %llx\n", VAR_8, VAR_7->cdb[0],
  VAR_7->lun, VAR_11, VAR_14, VAR_13, (unsigned long long) VAR_7->tag);

 VAR_12 = FUNC_3(VAR_6, VAR_11, VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->SCp.ptr = VAR_8;
 FUNC_2(VAR_12->cmnd, VAR_7->cdb, VAR_2);
 VAR_12->sdb.length = VAR_14;
 VAR_12->sdb.table.sgl = (void *) (unsigned long) VAR_10;
 VAR_12->tag = VAR_13;
 VAR_15 = FUNC_5(VAR_12, VAR_9, (struct scsi_lun *)&VAR_7->lun,
         VAR_7->tag);
 if (VAR_15)
  FUNC_4(VAR_6, VAR_12);

 return VAR_15;
}
