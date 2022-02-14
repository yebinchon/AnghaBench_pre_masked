
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iovec {int dummy; } ;
struct iov_iter {int dummy; } ;
struct TYPE_4__ {size_t error; } ;
struct TYPE_5__ {TYPE_1__ h; } ;
struct fuse_req {TYPE_2__ out; } ;
struct fuse_io_priv {int async; struct file* file; } ;
struct fuse_file {struct fuse_conn* fc; } ;
struct fuse_conn {size_t max_write; size_t max_read; } ;
struct file {struct fuse_file* private_data; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;
typedef int fl_owner_t ;
struct TYPE_6__ {int files; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 size_t FUNC_1 (struct fuse_req*) ;
 TYPE_3__* VAR_1 ;
 struct fuse_req* FUNC_2 (struct fuse_conn*,int ) ;
 int FUNC_3 (struct fuse_req*,struct iov_iter*,size_t*,int) ;
 int FUNC_4 (struct iov_iter*) ;
 int FUNC_5 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_6 (struct fuse_req*,int) ;
 size_t FUNC_7 (struct fuse_req*,struct fuse_io_priv*,size_t,size_t,int ) ;
 size_t FUNC_8 (struct fuse_req*,struct fuse_io_priv*,size_t,size_t,int ) ;
 int FUNC_9 (struct iov_iter*,struct iovec const*,unsigned long,size_t,int ) ;
 size_t FUNC_10 (size_t,size_t) ;

ssize_t FUNC_11(struct fuse_io_priv *VAR_2, const struct iovec *VAR_3,
         unsigned long VAR_4, size_t VAR_5, loff_t *VAR_6,
         int VAR_7)
{
 struct file *VAR_8 = VAR_2->file;
 struct fuse_file *VAR_9 = VAR_8->private_data;
 struct fuse_conn *VAR_10 = VAR_9->fc;
 size_t VAR_11 = VAR_7 ? VAR_10->max_write : VAR_10->max_read;
 loff_t VAR_12 = *VAR_6;
 ssize_t VAR_13 = 0;
 struct fuse_req *VAR_14;
 struct iov_iter VAR_15;

 FUNC_9(&VAR_15, VAR_3, VAR_4, VAR_5, 0);

 VAR_14 = FUNC_2(VAR_10, FUNC_4(&VAR_15));
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 while (VAR_5) {
  size_t VAR_16;
  fl_owner_t VAR_17 = VAR_1->files;
  size_t VAR_18 = FUNC_10(VAR_5, VAR_11);
  int VAR_19 = FUNC_3(VAR_14, &VAR_15, &VAR_18, VAR_7);
  if (VAR_19) {
   VAR_13 = VAR_19;
   break;
  }

  if (VAR_7)
   VAR_16 = FUNC_8(VAR_14, VAR_2, VAR_12, VAR_18, VAR_17);
  else
   VAR_16 = FUNC_7(VAR_14, VAR_2, VAR_12, VAR_18, VAR_17);

  if (!VAR_2->async)
   FUNC_6(VAR_14, !VAR_7);
  if (VAR_14->out.h.error) {
   if (!VAR_13)
    VAR_13 = VAR_14->out.h.error;
   break;
  } else if (VAR_16 > VAR_18) {
   VAR_13 = -VAR_0;
   break;
  }
  VAR_5 -= VAR_16;
  VAR_13 += VAR_16;
  VAR_12 += VAR_16;
  if (VAR_16 != VAR_18)
   break;
  if (VAR_5) {
   FUNC_5(VAR_10, VAR_14);
   VAR_14 = FUNC_2(VAR_10, FUNC_4(&VAR_15));
   if (FUNC_0(VAR_14))
    break;
  }
 }
 if (!FUNC_0(VAR_14))
  FUNC_5(VAR_10, VAR_14);
 if (VAR_13 > 0)
  *VAR_6 = VAR_12;

 return VAR_13;
}
