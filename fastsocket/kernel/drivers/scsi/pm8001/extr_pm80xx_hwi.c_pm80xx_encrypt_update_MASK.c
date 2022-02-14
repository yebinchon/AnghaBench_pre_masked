
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {struct inbound_queue_table* inbnd_q_tbl; } ;
struct kek_mgmt_req {int new_curidx_ksop; int tag; } ;
struct inbound_queue_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kek_mgmt_req*,int ,int) ;
 int FUNC_2 (struct pm8001_hba_info*,struct inbound_queue_table*,int ,struct kek_mgmt_req*,int ) ;
 int FUNC_3 (struct pm8001_hba_info*,int *) ;

__attribute__((used)) static int FUNC_4(struct pm8001_hba_info *VAR_2)
{
 struct kek_mgmt_req VAR_3;
 struct inbound_queue_table *VAR_4;
 int VAR_5;
 u32 VAR_6;
 u32 VAR_7 = VAR_1;

 FUNC_1(&VAR_3, 0, sizeof(struct kek_mgmt_req));
 VAR_5 = FUNC_3(VAR_2, &VAR_6);
 if (VAR_5)
  return -1;

 VAR_4 = &VAR_2->inbnd_q_tbl[0];
 VAR_3.tag = FUNC_0(VAR_6);



 VAR_3.new_curidx_ksop = ((1 << 24) | (1 << 16) | (1 << 8) |
     VAR_0);

 VAR_5 = FUNC_2(VAR_2, VAR_4, VAR_7, &VAR_3, 0);

 return VAR_5;
}
