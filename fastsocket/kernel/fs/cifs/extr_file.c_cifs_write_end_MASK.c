
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {unsigned int i_size; int i_lock; } ;
struct file {struct cifsFileInfo* private_data; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct cifsFileInfo {int pid; TYPE_1__* dentry; } ;
struct address_space {struct inode* host; } ;
typedef unsigned int loff_t ;
typedef int __u32 ;
struct TYPE_4__ {int tgid; } ;
struct TYPE_3__ {int d_sb; } ;


 int VAR_0 ;
 struct cifs_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int,char*,struct page*,unsigned int,unsigned int) ;
 int FUNC_8 (struct cifsFileInfo*,int ,char*,unsigned int,unsigned int*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_9 (struct inode*,unsigned int) ;
 char* FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct page*) ;

__attribute__((used)) static int FUNC_17(struct file *VAR_3, struct address_space *VAR_4,
   loff_t VAR_5, unsigned VAR_6, unsigned VAR_7,
   struct page *VAR_8, void *VAR_9)
{
 int VAR_10;
 struct inode *VAR_11 = VAR_4->host;
 struct cifsFileInfo *VAR_12 = VAR_3->private_data;
 struct cifs_sb_info *VAR_13 = FUNC_0(VAR_12->dentry->d_sb);
 __u32 VAR_14;

 if (VAR_13->mnt_cifs_flags & VAR_0)
  VAR_14 = VAR_12->pid;
 else
  VAR_14 = VAR_2->tgid;

 FUNC_7(1, "write_end for page %p from pos %lld with %d bytes",
   VAR_8, VAR_5, VAR_7);

 if (FUNC_4(VAR_8)) {
  if (VAR_7 == VAR_6)
   FUNC_6(VAR_8);
  FUNC_1(VAR_8);
 } else if (!FUNC_5(VAR_8) && VAR_7 == VAR_1)
  FUNC_6(VAR_8);

 if (!FUNC_5(VAR_8)) {
  char *VAR_15;
  unsigned VAR_16 = VAR_5 & (VAR_1 - 1);
  int VAR_17;

  VAR_17 = FUNC_3();





  VAR_15 = FUNC_10(VAR_8);
  VAR_10 = FUNC_8(VAR_12, VAR_14, VAR_15 + VAR_16, VAR_7, &VAR_5);

  FUNC_11(VAR_8);

  FUNC_2(VAR_17);
 } else {
  VAR_10 = VAR_7;
  VAR_5 += VAR_7;
  FUNC_13(VAR_8);
 }

 if (VAR_10 > 0) {
  FUNC_14(&VAR_11->i_lock);
  if (VAR_5 > VAR_11->i_size)
   FUNC_9(VAR_11, VAR_5);
  FUNC_15(&VAR_11->i_lock);
 }

 FUNC_16(VAR_8);
 FUNC_12(VAR_8);

 return VAR_10;
}
