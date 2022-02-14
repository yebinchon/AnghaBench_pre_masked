
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_tgt_cmd {int work; int tag; int itn_id; } ;
struct scsi_cmnd {TYPE_1__* request; } ;
struct TYPE_2__ {struct scsi_tgt_cmd* end_io_data; } ;


 int FUNC_0 (char*,struct scsi_cmnd*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct scsi_cmnd *VAR_1)
{
 struct scsi_tgt_cmd *VAR_2 = VAR_1->request->end_io_data;

 FUNC_0("cmd %p %u\n", VAR_1, FUNC_2(VAR_1->request));

 FUNC_4(VAR_1, VAR_2->itn_id, VAR_2->tag);

 FUNC_3(VAR_1);

 FUNC_1(VAR_0, &VAR_2->work);
}
