
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int scsi_status; struct pscsi_plugin_task* priv; } ;
struct request {int q; int resid_len; int errors; struct se_cmd* end_io_data; } ;
struct pscsi_plugin_task {int pscsi_result; int * pscsi_cdb; int pscsi_resid; } ;



 int VAR_0 ;
 int FUNC_0 (int ,struct request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pscsi_plugin_task*) ;
 int FUNC_3 (char*,struct se_cmd*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct se_cmd*,int) ;

__attribute__((used)) static void FUNC_6(struct request *VAR_1, int VAR_2)
{
 struct se_cmd *VAR_3 = VAR_1->end_io_data;
 struct pscsi_plugin_task *VAR_4 = VAR_3->priv;

 VAR_4->pscsi_result = VAR_1->errors;
 VAR_4->pscsi_resid = VAR_1->resid_len;

 VAR_3->scsi_status = FUNC_4(VAR_4->pscsi_result) << 1;
 if (VAR_3->scsi_status) {
  FUNC_3("PSCSI Status Byte exception at cmd: %p CDB:"
   " 0x%02x Result: 0x%08x\n", VAR_3, VAR_4->pscsi_cdb[0],
   VAR_4->pscsi_result);
 }

 switch (FUNC_1(VAR_4->pscsi_result)) {
 case 128:
  FUNC_5(VAR_3, VAR_3->scsi_status);
  break;
 default:
  FUNC_3("PSCSI Host Byte exception at cmd: %p CDB:"
   " 0x%02x Result: 0x%08x\n", VAR_3, VAR_4->pscsi_cdb[0],
   VAR_4->pscsi_result);
  FUNC_5(VAR_3, VAR_0);
  break;
 }

 FUNC_0(VAR_1->q, VAR_1);
 FUNC_2(VAR_4);
}
