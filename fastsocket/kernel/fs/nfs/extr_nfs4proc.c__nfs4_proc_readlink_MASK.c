
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_message {struct nfs4_readlink_res* rpc_resp; struct nfs4_readlink* rpc_argp; int * rpc_proc; } ;
struct page {int dummy; } ;
struct nfs4_readlink_res {int seq_res; } ;
struct nfs4_readlink {unsigned int pgbase; unsigned int pglen; int seq_args; struct page** pages; int fh; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {int client; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,TYPE_1__*,struct rpc_message*,int *,int *,int ) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct page *VAR_3,
  unsigned int VAR_4, unsigned int VAR_5)
{
 struct nfs4_readlink VAR_6 = {
  .fh = FUNC_0(VAR_2),
  .pgbase = VAR_4,
  .pglen = VAR_5,
  .pages = &VAR_3,
 };
 struct nfs4_readlink_res VAR_7;
 struct rpc_message VAR_8 = {
  .rpc_proc = &VAR_1[VAR_0],
  .rpc_argp = &VAR_6,
  .rpc_resp = &VAR_7,
 };

 return FUNC_2(FUNC_1(VAR_2)->client, FUNC_1(VAR_2), &VAR_8, &VAR_6.seq_args, &VAR_7.seq_res, 0);
}
