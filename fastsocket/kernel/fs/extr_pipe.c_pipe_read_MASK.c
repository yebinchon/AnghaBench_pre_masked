
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pipe_inode_info {int nrbufs; int curbuf; int fasync_writers; int wait; int waiting_writers; int writers; struct pipe_buffer* bufs; } ;
struct pipe_buffer {size_t len; int offset; struct pipe_buf_operations* ops; } ;
struct pipe_buf_operations {int (* confirm ) (struct pipe_inode_info*,struct pipe_buffer*) ;int (* release ) (struct pipe_inode_info*,struct pipe_buffer*) ;int (* unmap ) (struct pipe_inode_info*,struct pipe_buffer*,void*) ;void* (* map ) (struct pipe_inode_info*,struct pipe_buffer*,int) ;} ;
struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int i_mutex; struct pipe_inode_info* i_pipe; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {int f_flags; TYPE_2__ f_path; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_3__ {struct inode* d_inode; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct iovec*,size_t) ;
 size_t FUNC_2 (struct iovec*,unsigned long) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct iovec*,void*,size_t,int) ;
 int FUNC_7 (struct pipe_inode_info*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct pipe_inode_info*,struct pipe_buffer*) ;
 void* FUNC_10 (struct pipe_inode_info*,struct pipe_buffer*,int) ;
 int FUNC_11 (struct pipe_inode_info*,struct pipe_buffer*,void*) ;
 int FUNC_12 (struct pipe_inode_info*,struct pipe_buffer*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static ssize_t
FUNC_15(struct kiocb *VAR_7, const struct iovec *VAR_8,
    unsigned long VAR_9, loff_t VAR_10)
{
 struct file *VAR_11 = VAR_7->ki_filp;
 struct inode *VAR_12 = VAR_11->f_path.dentry->d_inode;
 struct pipe_inode_info *VAR_13;
 int VAR_14;
 ssize_t VAR_15;
 struct iovec *VAR_16 = (struct iovec *)VAR_8;
 size_t VAR_17;

 VAR_17 = FUNC_2(VAR_16, VAR_9);

 if (FUNC_13(VAR_17 == 0))
  return 0;

 VAR_14 = 0;
 VAR_15 = 0;
 FUNC_4(&VAR_12->i_mutex);
 VAR_13 = VAR_12->i_pipe;
 for (;;) {
  int VAR_18 = VAR_13->nrbufs;
  if (VAR_18) {
   int VAR_19 = VAR_13->curbuf;
   struct pipe_buffer *VAR_20 = VAR_13->bufs + VAR_19;
   const struct pipe_buf_operations *VAR_21 = VAR_20->ops;
   void *VAR_22;
   size_t VAR_23 = VAR_20->len;
   int VAR_24, VAR_25;

   if (VAR_23 > VAR_17)
    VAR_23 = VAR_17;

   VAR_24 = VAR_21->confirm(VAR_13, VAR_20);
   if (VAR_24) {
    if (!VAR_15)
     VAR_24 = VAR_15;
    break;
   }

   VAR_25 = !FUNC_1(VAR_16, VAR_23);
redo:
   VAR_22 = VAR_21->map(VAR_13, VAR_20, VAR_25);
   VAR_24 = FUNC_6(VAR_16, VAR_22 + VAR_20->offset, VAR_23, VAR_25);
   VAR_21->unmap(VAR_13, VAR_20, VAR_22);
   if (FUNC_13(VAR_24)) {



    if (VAR_25) {
     VAR_25 = 0;
     goto redo;
    }
    if (!VAR_15)
     VAR_15 = VAR_24;
    break;
   }
   VAR_15 += VAR_23;
   VAR_20->offset += VAR_23;
   VAR_20->len -= VAR_23;
   if (!VAR_20->len) {
    VAR_20->ops = ((void*)0);
    VAR_21->release(VAR_13, VAR_20);
    VAR_19 = (VAR_19 + 1) & (VAR_3-1);
    VAR_13->curbuf = VAR_19;
    VAR_13->nrbufs = --VAR_18;
    VAR_14 = 1;
   }
   VAR_17 -= VAR_23;
   if (!VAR_17)
    break;
  }
  if (VAR_18)
   continue;
  if (!VAR_13->writers)
   break;
  if (!VAR_13->waiting_writers) {





   if (VAR_15)
    break;
   if (VAR_11->f_flags & VAR_2) {
    VAR_15 = -VAR_0;
    break;
   }
  }
  if (FUNC_8(VAR_6)) {
   if (!VAR_15)
    VAR_15 = -VAR_1;
   break;
  }
  if (VAR_14) {
   FUNC_14(&VAR_13->wait);
    FUNC_3(&VAR_13->fasync_writers, VAR_5, VAR_4);
  }
  FUNC_7(VAR_13);
 }
 FUNC_5(&VAR_12->i_mutex);


 if (VAR_14) {
  FUNC_14(&VAR_13->wait);
  FUNC_3(&VAR_13->fasync_writers, VAR_5, VAR_4);
 }
 if (VAR_15 > 0)
  FUNC_0(VAR_11);
 return VAR_15;
}
