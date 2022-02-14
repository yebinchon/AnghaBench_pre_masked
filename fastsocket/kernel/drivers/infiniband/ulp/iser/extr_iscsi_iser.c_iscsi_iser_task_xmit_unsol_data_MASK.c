
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_r2t_info {scalar_t__ sent; scalar_t__ data_length; scalar_t__ data_count; int datasn; } ;
struct iscsi_task {struct iscsi_r2t_info unsol_r2t; } ;
struct iscsi_data {int itt; } ;
struct iscsi_conn {int dummy; } ;


 int FUNC_0 (struct iscsi_task*,struct iscsi_r2t_info*,struct iscsi_data*) ;
 scalar_t__ FUNC_1 (struct iscsi_task*) ;
 int FUNC_2 (char*,scalar_t__,...) ;
 int FUNC_3 (struct iscsi_conn*,struct iscsi_task*,struct iscsi_data*) ;

__attribute__((used)) static int
FUNC_4(struct iscsi_conn *VAR_0,
     struct iscsi_task *VAR_1)
{
 struct iscsi_r2t_info *VAR_2 = &VAR_1->unsol_r2t;
 struct iscsi_data VAR_3;
 int VAR_4 = 0;


 while (FUNC_1(VAR_1)) {
  FUNC_0(VAR_1, VAR_2, &VAR_3);
  FUNC_2("Sending data-out: itt 0x%x, data count %d\n",
      VAR_3.itt, VAR_2->data_count);



  VAR_4 = FUNC_3(VAR_0, VAR_1, &VAR_3);
  if (VAR_4) {
   VAR_2->datasn--;
   goto iscsi_iser_task_xmit_unsol_data_exit;
  }
  VAR_2->sent += VAR_2->data_count;
  FUNC_2("Need to send %d more as data-out PDUs\n",
      VAR_2->data_length - VAR_2->sent);
 }

iscsi_iser_task_xmit_unsol_data_exit:
 return VAR_4;
}
