
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_tgt_cmd {int work; } ;
struct scsi_cmnd {TYPE_2__* request; } ;
struct Scsi_Host {TYPE_1__* hostt; } ;
struct TYPE_4__ {struct scsi_tgt_cmd* end_io_data; } ;
struct TYPE_3__ {int (* eh_abort_handler ) (struct scsi_cmnd*) ;} ;


 int FUNC_0 (char*,struct scsi_cmnd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_3(struct Scsi_Host *VAR_0, struct scsi_cmnd *VAR_1)
{
 struct scsi_tgt_cmd *VAR_2;
 int VAR_3;

 VAR_3 = VAR_0->hostt->eh_abort_handler(VAR_1);
 if (VAR_3)
  FUNC_0("fail to abort %p\n", VAR_1);

 VAR_2 = VAR_1->request->end_io_data;
 FUNC_1(&VAR_2->work);
 return VAR_3;
}
