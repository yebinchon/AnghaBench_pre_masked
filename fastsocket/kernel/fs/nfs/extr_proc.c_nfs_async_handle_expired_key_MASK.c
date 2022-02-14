
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rpc_task*,int ) ;
 int FUNC_1 (struct rpc_task*) ;

__attribute__((used)) static int
FUNC_2(struct rpc_task *VAR_2)
{
 if (VAR_2->tk_status != -VAR_0)
  return 0;
 VAR_2->tk_status = 0;
 FUNC_1(VAR_2);
 FUNC_0(VAR_2, VAR_1);
 return 1;
}
