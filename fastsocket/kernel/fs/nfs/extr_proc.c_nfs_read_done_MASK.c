
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; } ;
struct TYPE_6__ {scalar_t__ count; int eof; TYPE_4__* fattr; } ;
struct TYPE_7__ {scalar_t__ offset; } ;
struct nfs_read_data {TYPE_2__ res; TYPE_3__ args; TYPE_1__* header; } ;
struct inode {int dummy; } ;
struct TYPE_8__ {scalar_t__ size; } ;
struct TYPE_5__ {struct inode* inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(struct rpc_task *VAR_1, struct nfs_read_data *VAR_2)
{
 struct inode *VAR_3 = VAR_2->header->inode;

 if (FUNC_0(VAR_1))
  return -VAR_0;

 FUNC_1(VAR_3);
 if (VAR_1->tk_status >= 0) {
  FUNC_2(VAR_3, VAR_2->res.fattr);



  if (VAR_2->args.offset + VAR_2->res.count >= VAR_2->res.fattr->size)
   VAR_2->res.eof = 1;
 }
 return 0;
}
