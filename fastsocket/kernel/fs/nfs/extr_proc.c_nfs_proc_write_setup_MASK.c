
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_message {int * rpc_proc; } ;
struct TYPE_2__ {int stable; } ;
struct nfs_write_data {TYPE_1__ args; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_0(struct nfs_write_data *VAR_3, struct rpc_message *VAR_4)
{

 VAR_3->args.stable = VAR_1;
 VAR_4->rpc_proc = &VAR_2[VAR_0];
}
