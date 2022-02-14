
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {scalar_t__ tk_status; } ;
struct nlm_rqst {struct nlm_block* a_block; } ;
struct nlm_block {int b_daemon; int b_list; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct nlm_block*,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct rpc_task *VAR_2, void *VAR_3)
{
 struct nlm_rqst *VAR_4 = VAR_3;
 struct nlm_block *VAR_5 = VAR_4->a_block;
 unsigned long VAR_6;

 FUNC_0("lockd: GRANT_MSG RPC callback\n");

 FUNC_3(&VAR_1);
 if (FUNC_1(&VAR_5->b_list))
  goto out;




 if (VAR_2->tk_status < 0) {

  VAR_6 = 10 * VAR_0;
 } else {

  VAR_6 = 60 * VAR_0;
 }
 FUNC_2(VAR_5, VAR_6);
 FUNC_5(VAR_5->b_daemon);
out:
 FUNC_4(&VAR_1);
}
