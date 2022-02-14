
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_status; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (struct rpc_task*,int ) ;
 int FUNC_2 (struct rpc_task*) ;

__attribute__((used)) static int
FUNC_3(struct rpc_task *VAR_4, struct inode *VAR_5)
{
 if (VAR_4->tk_status != -VAR_0 && VAR_4->tk_status != -VAR_1)
  return 0;
 if (VAR_4->tk_status == -VAR_0)
  FUNC_0(VAR_5, VAR_2);
 VAR_4->tk_status = 0;
 FUNC_2(VAR_4);
 FUNC_1(VAR_4, VAR_3);
 return 1;
}
