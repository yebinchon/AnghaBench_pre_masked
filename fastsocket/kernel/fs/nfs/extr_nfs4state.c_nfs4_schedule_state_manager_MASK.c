
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct nfs_client {int cl_rpcclient; int cl_count; int cl_state; } ;


 int FUNC_0 (struct task_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct task_struct* FUNC_3 (int ,struct nfs_client*,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nfs_client*) ;
 int VAR_3 ;
 int FUNC_6 (struct nfs_client*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

void FUNC_9(struct nfs_client *VAR_4)
{
 struct task_struct *VAR_5;

 if (FUNC_8(VAR_0, &VAR_4->cl_state) != 0)
  return;
 FUNC_1(VAR_2);
 FUNC_2(&VAR_4->cl_count);
 VAR_5 = FUNC_3(VAR_3, VAR_4, "%s-manager",
    FUNC_7(VAR_4->cl_rpcclient,
       VAR_1));
 if (!FUNC_0(VAR_5))
  return;
 FUNC_5(VAR_4);
 FUNC_6(VAR_4);
 FUNC_4(VAR_2);
}
