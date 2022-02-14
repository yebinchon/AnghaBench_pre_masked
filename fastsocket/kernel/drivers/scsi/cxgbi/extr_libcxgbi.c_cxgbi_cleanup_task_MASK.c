
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_task {int hdr_itt; } ;
struct cxgbi_task_data {scalar_t__ skb; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct cxgbi_task_data* FUNC_1 (struct iscsi_task*) ;
 int FUNC_2 (struct iscsi_task*) ;
 int FUNC_3 (int,char*,struct iscsi_task*,scalar_t__,int ) ;
 int FUNC_4 (struct cxgbi_task_data*,int ,int) ;
 int FUNC_5 (struct iscsi_task*,int ) ;

void FUNC_6(struct iscsi_task *VAR_1)
{
 struct cxgbi_task_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(1 << VAR_0,
  "task 0x%p, skb 0x%p, itt 0x%x.\n",
  VAR_1, VAR_2->skb, VAR_1->hdr_itt);


 if (VAR_2->skb)
  FUNC_0(VAR_2->skb);
 FUNC_4(VAR_2, 0, sizeof(*VAR_2));

 FUNC_5(VAR_1, VAR_1->hdr_itt);
 FUNC_2(VAR_1);
}
