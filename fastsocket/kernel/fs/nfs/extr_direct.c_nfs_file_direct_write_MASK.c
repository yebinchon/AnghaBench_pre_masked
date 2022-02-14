
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kiocb {scalar_t__ ki_pos; struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int i_lock; } ;
struct TYPE_10__ {TYPE_4__* dentry; } ;
struct file {TYPE_5__ f_path; struct address_space* f_mapping; } ;
struct address_space {struct inode* host; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_8__ {int name; } ;
struct TYPE_9__ {TYPE_3__ d_name; TYPE_2__* d_parent; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,size_t,long long) ;
 int FUNC_1 (struct file*,scalar_t__*,size_t*,int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 size_t FUNC_4 (struct iovec const*,unsigned long) ;
 int FUNC_5 (struct inode*,int ,size_t) ;
 int FUNC_6 (struct kiocb*,struct iovec const*,unsigned long,scalar_t__,size_t) ;
 int FUNC_7 (struct address_space*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

ssize_t FUNC_10(struct kiocb *VAR_3, const struct iovec *VAR_4,
    unsigned long VAR_5, loff_t VAR_6)
{
 ssize_t VAR_7 = -VAR_0;
 struct file *VAR_8 = VAR_3->ki_filp;
 struct address_space *VAR_9 = VAR_8->f_mapping;
 size_t VAR_10;

 VAR_10 = FUNC_4(VAR_4, VAR_5);
 FUNC_5(VAR_9->host, VAR_2, VAR_10);

 FUNC_0(VAR_1, "NFS: direct write(%s/%s, %zd@%Ld)\n",
  VAR_8->f_path.dentry->d_parent->d_name.name,
  VAR_8->f_path.dentry->d_name.name,
  VAR_10, (long long) VAR_6);

 VAR_7 = FUNC_1(VAR_8, &VAR_6, &VAR_10, 0);
 if (VAR_7)
  goto out;

 VAR_7 = -VAR_0;
 if ((ssize_t) VAR_10 < 0)
  goto out;
 VAR_7 = 0;
 if (!VAR_10)
  goto out;

 VAR_7 = FUNC_7(VAR_9);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6, VAR_10);
 if (VAR_7 > 0) {
  struct inode *VAR_11 = VAR_9->host;

  VAR_3->ki_pos = VAR_6 + VAR_7;
  FUNC_8(&VAR_11->i_lock);
  if (FUNC_2(VAR_11) < VAR_3->ki_pos)
   FUNC_3(VAR_11, VAR_3->ki_pos);
  FUNC_9(&VAR_11->i_lock);
 }
out:
 return VAR_7;
}
