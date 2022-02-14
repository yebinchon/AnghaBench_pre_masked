
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct proc_inode {struct mnt_namespace* ns; int * ns_ops; } ;
struct path {TYPE_1__* dentry; } ;
struct mnt_namespace {scalar_t__ seq; } ;
struct inode {int dummy; } ;
struct TYPE_8__ {TYPE_3__* nsproxy; } ;
struct TYPE_7__ {TYPE_2__* mnt_ns; } ;
struct TYPE_6__ {scalar_t__ seq; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 struct proc_inode* FUNC_0 (struct inode*) ;
 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;

__attribute__((used)) static bool FUNC_2(struct path *VAR_2)
{



 struct inode *VAR_3 = VAR_2->dentry->d_inode;
 struct proc_inode *VAR_4;
 struct mnt_namespace *VAR_5;

 if (!FUNC_1(VAR_3))
  return 0;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4->ns_ops != &VAR_1)
  return 0;

 VAR_5 = VAR_4->ns;
 return VAR_0->nsproxy->mnt_ns->seq >= VAR_5->seq;
}
