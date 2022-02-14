
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct set_ctrl_cfg_req {int* cfg_pg; int tag; } ;
struct pm8001_hba_info {struct inbound_queue_table* inbnd_q_tbl; } ;
struct inbound_queue_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct set_ctrl_cfg_req*,int ,int) ;
 int FUNC_2 (struct pm8001_hba_info*,struct inbound_queue_table*,int ,struct set_ctrl_cfg_req*,int ) ;
 int FUNC_3 (struct pm8001_hba_info*,int *) ;

int
FUNC_4(struct pm8001_hba_info *VAR_6)
{
 struct set_ctrl_cfg_req VAR_7;
 struct inbound_queue_table *VAR_8;
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11 = VAR_1;

 FUNC_1(&VAR_7, 0, sizeof(struct set_ctrl_cfg_req));
 VAR_9 = FUNC_3(VAR_6, &VAR_10);
 if (VAR_9)
  return -1;

 VAR_8 = &VAR_6->inbnd_q_tbl[0];
 VAR_7.tag = FUNC_0(VAR_10);
 VAR_7.cfg_pg[0] = (VAR_4 << 9) |
   (VAR_3 << 8) | VAR_5;
 VAR_7.cfg_pg[1] = (VAR_0 << 24) | (VAR_2 << 8);

 VAR_9 = FUNC_2(VAR_6, VAR_8, VAR_11, &VAR_7, 0);
 return VAR_9;

}
