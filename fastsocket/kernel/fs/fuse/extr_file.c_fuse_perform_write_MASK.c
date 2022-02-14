
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {int error; } ;
struct TYPE_4__ {TYPE_1__ h; } ;
struct fuse_req {TYPE_2__ out; } ;
struct fuse_conn {int dummy; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 size_t FUNC_2 (struct fuse_req*,struct address_space*,struct iov_iter*,size_t) ;
 struct fuse_req* FUNC_3 (struct fuse_conn*,unsigned int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct fuse_conn*,struct fuse_req*) ;
 size_t FUNC_6 (struct fuse_req*,struct file*,struct inode*,size_t,size_t) ;
 unsigned int FUNC_7 (size_t,scalar_t__) ;
 int FUNC_8 (struct inode*,size_t) ;
 struct fuse_conn* FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (struct iov_iter*) ;
 scalar_t__ FUNC_11 (struct inode*) ;

__attribute__((used)) static ssize_t FUNC_12(struct file *VAR_1,
      struct address_space *VAR_2,
      struct iov_iter *VAR_3, loff_t VAR_4)
{
 struct inode *VAR_5 = VAR_2->host;
 struct fuse_conn *VAR_6 = FUNC_9(VAR_5);
 int VAR_7 = 0;
 ssize_t VAR_8 = 0;

 if (FUNC_11(VAR_5))
  return -VAR_0;

 do {
  struct fuse_req *VAR_9;
  ssize_t VAR_10;
  unsigned VAR_11 = FUNC_7(VAR_4, FUNC_10(VAR_3));

  VAR_9 = FUNC_3(VAR_6, VAR_11);
  if (FUNC_0(VAR_9)) {
   VAR_7 = FUNC_1(VAR_9);
   break;
  }

  VAR_10 = FUNC_2(VAR_9, VAR_2, VAR_3, VAR_4);
  if (VAR_10 <= 0) {
   VAR_7 = VAR_10;
  } else {
   size_t VAR_12;

   VAR_12 = FUNC_6(VAR_9, VAR_1, VAR_5,
           VAR_4, VAR_10);
   VAR_7 = VAR_9->out.h.error;
   if (!VAR_7) {
    VAR_8 += VAR_12;
    VAR_4 += VAR_12;


    if (VAR_12 != VAR_10)
     VAR_7 = -VAR_0;
   }
  }
  FUNC_5(VAR_6, VAR_9);
 } while (!VAR_7 && FUNC_10(VAR_3));

 if (VAR_8 > 0)
  FUNC_8(VAR_5, VAR_4);

 FUNC_4(VAR_5);

 return VAR_8 > 0 ? VAR_8 : VAR_7;
}
