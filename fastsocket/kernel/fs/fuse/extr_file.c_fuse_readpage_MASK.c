
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct page {int index; TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct TYPE_7__ {int error; } ;
struct TYPE_8__ {int page_zeroing; int argpages; TYPE_3__ h; } ;
struct fuse_req {int num_pages; TYPE_4__ out; TYPE_2__* page_descs; struct page** pages; } ;
struct fuse_io_priv {struct file* file; int async; } ;
struct fuse_conn {int dummy; } ;
struct file {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {size_t length; } ;
struct TYPE_5__ {struct inode* host; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 size_t VAR_1 ;
 int FUNC_1 (struct fuse_req*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct fuse_conn*) ;
 struct fuse_req* FUNC_4 (struct fuse_conn*,int) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_7 (struct inode*,scalar_t__,int ) ;
 size_t FUNC_8 (struct fuse_req*,struct fuse_io_priv*,scalar_t__,size_t,int *) ;
 int FUNC_9 (struct inode*,int ) ;
 struct fuse_conn* FUNC_10 (struct inode*) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 scalar_t__ FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_2, struct page *VAR_3)
{
 struct fuse_io_priv VAR_4 = { .async = 0, .file = VAR_2 };
 struct inode *VAR_5 = VAR_3->mapping->host;
 struct fuse_conn *VAR_6 = FUNC_10(VAR_5);
 struct fuse_req *VAR_7;
 size_t VAR_8;
 loff_t VAR_9 = FUNC_12(VAR_3);
 size_t VAR_10 = VAR_1;
 u64 VAR_11;
 int VAR_12;

 VAR_12 = -VAR_0;
 if (FUNC_11(VAR_5))
  goto out;






 FUNC_9(VAR_5, VAR_3->index);

 VAR_7 = FUNC_4(VAR_6, 1);
 VAR_12 = FUNC_1(VAR_7);
 if (FUNC_0(VAR_7))
  goto out;

 VAR_11 = FUNC_3(VAR_6);

 VAR_7->out.page_zeroing = 1;
 VAR_7->out.argpages = 1;
 VAR_7->num_pages = 1;
 VAR_7->pages[0] = VAR_3;
 VAR_7->page_descs[0].length = VAR_10;
 VAR_8 = FUNC_8(VAR_7, &VAR_4, VAR_9, VAR_10, ((void*)0));
 VAR_12 = VAR_7->out.h.error;
 FUNC_6(VAR_6, VAR_7);

 if (!VAR_12) {



  if (VAR_8 < VAR_10)
   FUNC_7(VAR_5, VAR_9 + VAR_8, VAR_11);

  FUNC_2(VAR_3);
 }

 FUNC_5(VAR_5);
 out:
 FUNC_13(VAR_3);
 return VAR_12;
}
