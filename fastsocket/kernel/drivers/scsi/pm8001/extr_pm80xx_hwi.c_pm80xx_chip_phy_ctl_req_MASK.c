
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {struct inbound_queue_table* inbnd_q_tbl; } ;
struct local_phy_ctl_req {void* phyop_phyid; void* tag; } ;
struct inbound_queue_table {int dummy; } ;
typedef int payload ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct local_phy_ctl_req*,int ,int) ;
 int FUNC_2 (struct pm8001_hba_info*,struct inbound_queue_table*,int,struct local_phy_ctl_req*,int ) ;

__attribute__((used)) static int FUNC_3(struct pm8001_hba_info *VAR_1,
 u32 VAR_2, u32 VAR_3)
{
 struct local_phy_ctl_req VAR_4;
 struct inbound_queue_table *VAR_5;
 int VAR_6;
 u32 VAR_7 = VAR_0;
 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_5 = &VAR_1->inbnd_q_tbl[0];
 VAR_4.tag = FUNC_0(1);
 VAR_4.phyop_phyid =
  FUNC_0(((VAR_3 & 0xFF) << 8) | (VAR_2 & 0xFF));
 VAR_6 = FUNC_2(VAR_1, VAR_5, VAR_7, &VAR_4, 0);
 return VAR_6;
}
