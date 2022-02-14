
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kiocb {TYPE_3__* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_8__ {scalar_t__ clientCanCacheAll; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct TYPE_7__ {TYPE_2__ f_path; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct kiocb*,struct iovec const*,unsigned long,int ) ;
 int FUNC_2 (struct kiocb*,struct iovec const*,unsigned long,int ) ;

ssize_t FUNC_3(struct kiocb *VAR_0, const struct iovec *VAR_1,
      unsigned long VAR_2, loff_t VAR_3)
{
 struct inode *VAR_4;

 VAR_4 = VAR_0->ki_filp->f_path.dentry->d_inode;

 if (FUNC_0(VAR_4)->clientCanCacheAll)
  return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
