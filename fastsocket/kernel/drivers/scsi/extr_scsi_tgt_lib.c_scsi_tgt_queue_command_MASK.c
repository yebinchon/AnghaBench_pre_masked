
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct scsi_tgt_cmd {int dummy; } ;
struct scsi_lun {int dummy; } ;
struct scsi_cmnd {TYPE_1__* request; } ;
struct TYPE_2__ {struct scsi_tgt_cmd* end_io_data; } ;


 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (TYPE_1__*,struct scsi_tgt_cmd*,int ,int ) ;
 int FUNC_2 (struct scsi_cmnd*,int ,struct scsi_lun*,int ) ;

int FUNC_3(struct scsi_cmnd *VAR_0, u64 VAR_1,
      struct scsi_lun *VAR_2, u64 VAR_3)
{
 struct scsi_tgt_cmd *VAR_4 = VAR_0->request->end_io_data;
 int VAR_5;

 FUNC_1(VAR_0->request, VAR_4, VAR_1, VAR_3);
 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  FUNC_0(VAR_0);

 return VAR_5;
}
