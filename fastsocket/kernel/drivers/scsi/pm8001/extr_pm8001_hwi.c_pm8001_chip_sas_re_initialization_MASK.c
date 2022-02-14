
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sas_re_initialization_req {void* open_reject_cmdretries_data_retries; void* sata_hol_tmo; void* SSAHOLT; void* tag; } ;
struct pm8001_hba_info {struct inbound_queue_table* inbnd_q_tbl; struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_ccb_info {size_t ccb_tag; } ;
struct inbound_queue_table {int dummy; } ;
typedef int payload ;


 size_t VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct sas_re_initialization_req*,int ,int) ;
 int FUNC_2 (struct pm8001_hba_info*,struct inbound_queue_table*,size_t,struct sas_re_initialization_req*,int ) ;
 int FUNC_3 (struct pm8001_hba_info*,size_t*) ;

__attribute__((used)) static int
FUNC_4(struct pm8001_hba_info *VAR_1)
{
 struct sas_re_initialization_req VAR_2;
 struct inbound_queue_table *VAR_3;
 struct pm8001_ccb_info *VAR_4;
 int VAR_5;
 u32 VAR_6;
 u32 VAR_7 = VAR_0;
 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 VAR_5 = FUNC_3(VAR_1, &VAR_6);
 if (VAR_5)
  return -1;
 VAR_4 = &VAR_1->ccb_info[VAR_6];
 VAR_4->ccb_tag = VAR_6;
 VAR_3 = &VAR_1->inbnd_q_tbl[0];
 VAR_2.tag = FUNC_0(VAR_6);
 VAR_2.SSAHOLT = FUNC_0(0xd << 25);
 VAR_2.sata_hol_tmo = FUNC_0(80);
 VAR_2.open_reject_cmdretries_data_retries = FUNC_0(0xff00ff);
 VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_7, &VAR_2, 0);
 return VAR_5;

}
