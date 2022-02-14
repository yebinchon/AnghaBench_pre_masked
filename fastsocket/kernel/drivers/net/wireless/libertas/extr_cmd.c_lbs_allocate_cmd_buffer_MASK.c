
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lbs_private {struct cmd_ctrl_node* cmd_array; } ;
struct cmd_ctrl_node {int cmdwait_q; void* cmdbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct lbs_private*,struct cmd_ctrl_node*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int) ;

int FUNC_6(struct lbs_private *VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6;
 u32 VAR_7;
 struct cmd_ctrl_node *VAR_8;

 FUNC_3(VAR_2);


 VAR_6 = sizeof(struct cmd_ctrl_node) * VAR_3;
 if (!(VAR_8 = FUNC_1(VAR_6, VAR_0))) {
  FUNC_4("ALLOC_CMD_BUF: tempcmd_array is NULL\n");
  VAR_5 = -1;
  goto done;
 }
 VAR_4->cmd_array = VAR_8;


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_8[VAR_7].cmdbuf = FUNC_1(VAR_1, VAR_0);
  if (!VAR_8[VAR_7].cmdbuf) {
   FUNC_4("ALLOC_CMD_BUF: ptempvirtualaddr is NULL\n");
   VAR_5 = -1;
   goto done;
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  FUNC_0(&VAR_8[VAR_7].cmdwait_q);
  FUNC_2(VAR_4, &VAR_8[VAR_7]);
 }
 VAR_5 = 0;

done:
 FUNC_5(VAR_2, "ret %d", VAR_5);
 return VAR_5;
}
