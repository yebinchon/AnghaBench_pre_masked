
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kvec {char* iov_base; unsigned int iov_len; } ;
struct TYPE_5__ {int name; } ;
struct dentry {TYPE_2__* d_inode; TYPE_1__ d_name; int d_sb; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {scalar_t__ wsize; } ;
struct cifs_io_parms {unsigned int length; scalar_t__ offset; struct cifs_tcon* tcon; int pid; int netfid; } ;
struct cifsInodeInfo {int dummy; } ;
struct cifsFileInfo {int netfid; scalar_t__ invalidHandle; int tlink; struct dentry* dentry; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
typedef int __u32 ;
struct TYPE_6__ {scalar_t__ i_size; int i_lock; } ;


 int FUNC_0 (int,struct cifs_io_parms*,unsigned int*,struct kvec*,int,int ) ;
 struct cifsInodeInfo* FUNC_1 (TYPE_2__*) ;
 struct cifs_sb_info* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char*,size_t,scalar_t__,int ) ;
 int FUNC_6 (struct cifsFileInfo*,int) ;
 int FUNC_7 (struct cifs_tcon*,unsigned int) ;
 int FUNC_8 (struct cifsInodeInfo*,scalar_t__,unsigned int) ;
 int FUNC_9 (TYPE_2__*,scalar_t__) ;
 int FUNC_10 (TYPE_2__*) ;
 unsigned int FUNC_11 (size_t,size_t) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct cifs_tcon* FUNC_14 (int ) ;

__attribute__((used)) static ssize_t FUNC_15(struct cifsFileInfo *VAR_1, __u32 VAR_2,
     const char *VAR_3, size_t VAR_4,
     loff_t *VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8;
 struct cifs_sb_info *VAR_9;
 struct cifs_tcon *VAR_10;
 int VAR_11;
 struct dentry *VAR_12 = VAR_1->dentry;
 struct cifsInodeInfo *VAR_13 = FUNC_1(VAR_12->d_inode);
 struct cifs_io_parms VAR_14;

 VAR_9 = FUNC_2(VAR_12->d_sb);

 FUNC_5(1, "write %zd bytes to offset %lld of %s", VAR_4,
    *VAR_5, VAR_12->d_name.name);

 VAR_10 = FUNC_14(VAR_1->tlink);

 VAR_11 = FUNC_4();

 for (VAR_8 = 0; VAR_4 > VAR_8;
      VAR_8 += VAR_7) {
  VAR_6 = -VAR_0;
  while (VAR_6 == -VAR_0) {
   struct kvec VAR_15[2];
   unsigned int VAR_16;

   if (VAR_1->invalidHandle) {




    VAR_6 = FUNC_6(VAR_1, 0);
    if (VAR_6 != 0)
     break;
   }

   VAR_16 = FUNC_11((size_t)VAR_9->wsize,
      VAR_4 - VAR_8);

   VAR_15[1].iov_base = (char *)VAR_3 + VAR_8;
   VAR_15[1].iov_len = VAR_16;
   VAR_14.netfid = VAR_1->netfid;
   VAR_14.pid = VAR_2;
   VAR_14.tcon = VAR_10;
   VAR_14.offset = *VAR_5;
   VAR_14.length = VAR_16;
   VAR_6 = FUNC_0(VAR_11, &VAR_14, &VAR_7, VAR_15,
        1, 0);
  }
  if (VAR_6 || (VAR_7 == 0)) {
   if (VAR_8)
    break;
   else {
    FUNC_3(VAR_11);
    return VAR_6;
   }
  } else {
   FUNC_12(&VAR_12->d_inode->i_lock);
   FUNC_8(VAR_13, *VAR_5, VAR_7);
   FUNC_13(&VAR_12->d_inode->i_lock);
   *VAR_5 += VAR_7;
  }
 }

 FUNC_7(VAR_10, VAR_8);

 if (VAR_8 > 0) {
  FUNC_12(&VAR_12->d_inode->i_lock);
  if (*VAR_5 > VAR_12->d_inode->i_size)
   FUNC_9(VAR_12->d_inode, *VAR_5);
  FUNC_13(&VAR_12->d_inode->i_lock);
 }
 FUNC_10(VAR_12->d_inode);
 FUNC_3(VAR_11);
 return VAR_8;
}
