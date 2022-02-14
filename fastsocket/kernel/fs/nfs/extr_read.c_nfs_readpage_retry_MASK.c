
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct nfs_readres {scalar_t__ count; } ;
struct nfs_readargs {int count; int pgbase; int offset; } ;
struct nfs_read_data {int mds_offset; TYPE_1__* header; struct nfs_readres res; struct nfs_readargs args; } ;
struct TYPE_2__ {int inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (struct rpc_task*) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_2, struct nfs_read_data *VAR_3)
{
 struct nfs_readargs *VAR_4 = &VAR_3->args;
 struct nfs_readres *VAR_5 = &VAR_3->res;


 FUNC_0(VAR_3->header->inode, VAR_1);

 if (VAR_5->count == 0) {
  FUNC_1(VAR_3->header, -VAR_0, VAR_4->offset);
  return;
 }

 VAR_3->mds_offset += VAR_5->count;
 VAR_4->offset += VAR_5->count;
 VAR_4->pgbase += VAR_5->count;
 VAR_4->count -= VAR_5->count;
 FUNC_2(VAR_2);
}
