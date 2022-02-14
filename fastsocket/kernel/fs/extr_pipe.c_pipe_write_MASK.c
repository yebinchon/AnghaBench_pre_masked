
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pipe_inode_info {int nrbufs; int curbuf; int fasync_readers; int wait; int waiting_writers; struct page* tmp_page; struct pipe_buffer* bufs; int readers; } ;
struct pipe_buffer {int offset; int len; struct pipe_buf_operations* ops; struct page* page; } ;
struct pipe_buf_operations {int (* confirm ) (struct pipe_inode_info*,struct pipe_buffer*) ;int (* unmap ) (struct pipe_inode_info*,struct pipe_buffer*,void*) ;void* (* map ) (struct pipe_inode_info*,struct pipe_buffer*,int) ;scalar_t__ can_merge; } ;
struct page {int dummy; } ;
struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int i_sb; int i_mutex; struct pipe_inode_info* i_pipe; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {int f_flags; TYPE_2__ f_path; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct page* FUNC_0 (int ) ;
 struct pipe_buf_operations VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct iovec*,int) ;
 size_t FUNC_3 (struct iovec*,unsigned long) ;
 int FUNC_4 (int *,int ,int ) ;
 char* FUNC_5 (struct page*) ;
 char* FUNC_6 (struct page*,int ) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,struct iovec*,int,int) ;
 int FUNC_12 (struct pipe_inode_info*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (struct pipe_inode_info*,struct pipe_buffer*) ;
 void* FUNC_18 (struct pipe_inode_info*,struct pipe_buffer*,int) ;
 int FUNC_19 (struct pipe_inode_info*,struct pipe_buffer*,void*) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static ssize_t
FUNC_22(struct kiocb *VAR_14, const struct iovec *VAR_15,
     unsigned long VAR_16, loff_t VAR_17)
{
 struct file *VAR_18 = VAR_14->ki_filp;
 struct inode *VAR_19 = VAR_18->f_path.dentry->d_inode;
 struct pipe_inode_info *VAR_20;
 ssize_t VAR_21;
 int VAR_22;
 struct iovec *VAR_23 = (struct iovec *)VAR_15;
 size_t VAR_24;
 ssize_t VAR_25;

 VAR_24 = FUNC_3(VAR_23, VAR_16);

 if (FUNC_20(VAR_24 == 0))
  return 0;

 VAR_22 = 0;
 VAR_21 = 0;
 FUNC_14(VAR_19->i_sb);
 FUNC_9(&VAR_19->i_mutex);
 VAR_20 = VAR_19->i_pipe;

 if (!VAR_20->readers) {
  FUNC_15(VAR_11, VAR_13, 0);
  VAR_21 = -VAR_2;
  goto out;
 }


 VAR_25 = VAR_24 & (VAR_7-1);
 if (VAR_20->nrbufs && VAR_25 != 0) {
  int VAR_26 = (VAR_20->curbuf + VAR_20->nrbufs - 1) &
       (VAR_8-1);
  struct pipe_buffer *VAR_27 = VAR_20->bufs + VAR_26;
  const struct pipe_buf_operations *VAR_28 = VAR_27->ops;
  int VAR_29 = VAR_27->offset + VAR_27->len;

  if (VAR_28->can_merge && VAR_29 + VAR_25 <= VAR_7) {
   int VAR_30, VAR_31 = 1;
   void *VAR_32;

   VAR_30 = VAR_28->confirm(VAR_20, VAR_27);
   if (VAR_30)
    goto out;

   FUNC_2(VAR_23, VAR_25);
redo1:
   VAR_32 = VAR_28->map(VAR_20, VAR_27, VAR_31);
   VAR_30 = FUNC_11(VAR_29 + VAR_32, VAR_23,
       VAR_25, VAR_31);
   VAR_28->unmap(VAR_20, VAR_27, VAR_32);
   VAR_21 = VAR_30;
   VAR_22 = 1;
   if (VAR_30) {
    if (VAR_31) {
     VAR_31 = 0;
     goto redo1;
    }
    goto out;
   }
   VAR_27->len += VAR_25;
   VAR_24 -= VAR_25;
   VAR_21 = VAR_25;
   if (!VAR_24)
    goto out;
  }
 }

 for (;;) {
  int VAR_33;

  if (!VAR_20->readers) {
   FUNC_15(VAR_11, VAR_13, 0);
   if (!VAR_21)
    VAR_21 = -VAR_2;
   break;
  }
  VAR_33 = VAR_20->nrbufs;
  if (VAR_33 < VAR_8) {
   int VAR_34 = (VAR_20->curbuf + VAR_33) & (VAR_8-1);
   struct pipe_buffer *VAR_35 = VAR_20->bufs + VAR_34;
   struct page *VAR_36 = VAR_20->tmp_page;
   char *VAR_37;
   int VAR_38, VAR_39 = 1;

   if (!VAR_36) {
    VAR_36 = FUNC_0(VAR_4);
    if (FUNC_20(!VAR_36)) {
     VAR_21 = VAR_21 ? : -VAR_1;
     break;
    }
    VAR_20->tmp_page = VAR_36;
   }





   VAR_22 = 1;
   VAR_25 = VAR_7;
   if (VAR_25 > VAR_24)
    VAR_25 = VAR_24;

   FUNC_2(VAR_23, VAR_25);
redo2:
   if (VAR_39)
    VAR_37 = FUNC_6(VAR_36, VAR_5);
   else
    VAR_37 = FUNC_5(VAR_36);

   VAR_38 = FUNC_11(VAR_37, VAR_23, VAR_25,
       VAR_39);
   if (VAR_39)
    FUNC_8(VAR_37, VAR_5);
   else
    FUNC_7(VAR_36);

   if (FUNC_20(VAR_38)) {
    if (VAR_39) {
     VAR_39 = 0;
     goto redo2;
    }
    if (!VAR_21)
     VAR_21 = VAR_38;
    break;
   }
   VAR_21 += VAR_25;


   VAR_35->page = VAR_36;
   VAR_35->ops = &VAR_12;
   VAR_35->offset = 0;
   VAR_35->len = VAR_25;
   VAR_20->nrbufs = ++VAR_33;
   VAR_20->tmp_page = ((void*)0);

   VAR_24 -= VAR_25;
   if (!VAR_24)
    break;
  }
  if (VAR_33 < VAR_8)
   continue;
  if (VAR_18->f_flags & VAR_6) {
   if (!VAR_21)
    VAR_21 = -VAR_0;
   break;
  }
  if (FUNC_16(VAR_13)) {
   if (!VAR_21)
    VAR_21 = -VAR_3;
   break;
  }
  if (VAR_22) {
   FUNC_21(&VAR_20->wait);
   FUNC_4(&VAR_20->fasync_readers, VAR_10, VAR_9);
   VAR_22 = 0;
  }
  VAR_20->waiting_writers++;
  FUNC_12(VAR_20);
  VAR_20->waiting_writers--;
 }
out:
 FUNC_10(&VAR_19->i_mutex);
 if (VAR_22) {
  FUNC_21(&VAR_20->wait);
  FUNC_4(&VAR_20->fasync_readers, VAR_10, VAR_9);
 }
 if (VAR_21 > 0)
  FUNC_1(VAR_18);
 FUNC_13(VAR_19->i_sb);
 return VAR_21;
}
