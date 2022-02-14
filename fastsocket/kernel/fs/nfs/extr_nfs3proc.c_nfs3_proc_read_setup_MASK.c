
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {int * rpc_proc; } ;
struct nfs_read_data {int dummy; } ;


 size_t VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_0(struct nfs_read_data *VAR_2, struct rpc_message *VAR_3)
{
 VAR_3->rpc_proc = &VAR_1[VAR_0];
}
