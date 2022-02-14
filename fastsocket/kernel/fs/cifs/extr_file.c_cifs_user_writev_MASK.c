
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kiocb {int ki_pos; TYPE_3__* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;
struct TYPE_8__ {int invalid_mapping; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct TYPE_7__ {TYPE_2__ f_path; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,struct iovec const*,unsigned long,int *) ;

ssize_t FUNC_2(struct kiocb *VAR_0, const struct iovec *VAR_1,
    unsigned long VAR_2, loff_t VAR_3)
{
 ssize_t VAR_4;
 struct inode *VAR_5;

 VAR_5 = VAR_0->ki_filp->f_path.dentry->d_inode;







 VAR_4 = FUNC_1(VAR_0->ki_filp, VAR_1, VAR_2, &VAR_3);
 if (VAR_4 > 0) {
  FUNC_0(VAR_5)->invalid_mapping = 1;
  VAR_0->ki_pos = VAR_3;
 }

 return VAR_4;
}
