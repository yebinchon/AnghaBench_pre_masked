
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {int index; } ;
struct inode {int dummy; } ;
struct TYPE_7__ {int error; } ;
struct TYPE_8__ {TYPE_3__ h; } ;
struct TYPE_5__ {int argpages; } ;
struct fuse_req {int num_pages; TYPE_4__ out; TYPE_2__* page_descs; struct page** pages; TYPE_1__ in; } ;
struct fuse_io_priv {struct file* file; int async; } ;
struct fuse_conn {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_6__ {unsigned int offset; unsigned int length; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int VAR_1 ;
 int FUNC_1 (struct fuse_req*) ;
 int FUNC_2 (struct page*) ;
 struct fuse_req* FUNC_3 (struct fuse_conn*,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct fuse_conn*,struct fuse_req*) ;
 size_t FUNC_6 (struct fuse_req*,struct fuse_io_priv*,int,unsigned int,int *) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct inode*,int) ;
 struct fuse_conn* FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (struct inode*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_2, struct inode *VAR_3,
          loff_t VAR_4, unsigned VAR_5, struct page *VAR_6)
{
 int VAR_7;
 size_t VAR_8;
 struct fuse_conn *VAR_9 = FUNC_9(VAR_3);
 unsigned VAR_10 = VAR_4 & (VAR_1 - 1);
 struct fuse_req *VAR_11;
 struct fuse_io_priv VAR_12 = { .async = 0, .file = VAR_2 };

 if (FUNC_10(VAR_3))
  return -VAR_0;





 FUNC_7(VAR_3, VAR_6->index);

 VAR_11 = FUNC_3(VAR_9, 1);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_11->in.argpages = 1;
 VAR_11->num_pages = 1;
 VAR_11->pages[0] = VAR_6;
 VAR_11->page_descs[0].offset = VAR_10;
 VAR_11->page_descs[0].length = VAR_5;
 VAR_8 = FUNC_6(VAR_11, &VAR_12, VAR_4, VAR_5, ((void*)0));
 VAR_7 = VAR_11->out.h.error;
 FUNC_5(VAR_9, VAR_11);
 if (!VAR_7 && !VAR_8)
  VAR_7 = -VAR_0;
 if (!VAR_7) {
  VAR_4 += VAR_8;
  FUNC_8(VAR_3, VAR_4);
  if (VAR_5 == VAR_1)
   FUNC_2(VAR_6);
 }
 FUNC_4(VAR_3);
 return VAR_7 ? VAR_7 : VAR_8;
}
