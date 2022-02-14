
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kiocb {TYPE_4__* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_8__ {int name; } ;
struct dentry {TYPE_3__ d_name; TYPE_2__* d_parent; struct inode* d_inode; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_10__ {struct dentry* dentry; } ;
struct TYPE_9__ {int f_flags; int f_mapping; TYPE_5__ f_path; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (struct kiocb*,struct iovec const*,unsigned long,scalar_t__) ;
 size_t FUNC_2 (struct iovec const*,unsigned long) ;
 int FUNC_3 (struct inode*,int ,size_t) ;
 scalar_t__ FUNC_4 (struct kiocb*,struct iovec const*,unsigned long,scalar_t__) ;
 scalar_t__ FUNC_5 (struct inode*,int ) ;

__attribute__((used)) static ssize_t
FUNC_6(struct kiocb *VAR_2, const struct iovec *VAR_3,
  unsigned long VAR_4, loff_t VAR_5)
{
 struct dentry * VAR_6 = VAR_2->ki_filp->f_path.dentry;
 struct inode * VAR_7 = VAR_6->d_inode;
 ssize_t VAR_8;
 size_t VAR_9 = FUNC_2(VAR_3, VAR_4);

 if (VAR_2->ki_filp->f_flags & VAR_1)
  return FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_0("NFS: read(%s/%s, %lu@%lu)\n",
  VAR_6->d_parent->d_name.name, VAR_6->d_name.name,
  (unsigned long) VAR_9, (unsigned long) VAR_5);

 VAR_8 = FUNC_5(VAR_7, VAR_2->ki_filp->f_mapping);
 FUNC_3(VAR_7, VAR_0, VAR_9);
 if (!VAR_8)
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 return VAR_8;
}
