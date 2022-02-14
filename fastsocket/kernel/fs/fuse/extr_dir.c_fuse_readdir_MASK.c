
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_11__ {int error; } ;
struct TYPE_12__ {int argpages; TYPE_5__ h; TYPE_4__* args; } ;
struct fuse_req {int num_pages; TYPE_6__ out; TYPE_3__* page_descs; struct page** pages; } ;
struct fuse_conn {scalar_t__ do_readdirplus; } ;
struct TYPE_8__ {TYPE_1__* dentry; } ;
struct file {int f_pos; TYPE_2__ f_path; } ;
typedef int filldir_t ;
struct TYPE_10__ {size_t size; } ;
struct TYPE_9__ {int length; } ;
struct TYPE_7__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int VAR_5 ;
 int FUNC_1 (struct fuse_req*) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int ) ;
 int FUNC_4 (struct fuse_conn*) ;
 struct fuse_req* FUNC_5 (struct fuse_conn*,int) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_8 (struct fuse_req*,struct file*,int ,int ,int ) ;
 int FUNC_9 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_conn* FUNC_10 (struct inode*) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (int ,size_t,struct file*,void*,int ) ;
 int FUNC_14 (int ,size_t,struct file*,void*,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_6, void *VAR_7, filldir_t VAR_8)
{
 int VAR_9;
 size_t VAR_10;
 struct page *VAR_11;
 struct inode *VAR_12 = VAR_6->f_path.dentry->d_inode;
 struct fuse_conn *VAR_13 = FUNC_10(VAR_12);
 struct fuse_req *VAR_14;
 u64 VAR_15 = 0;

 if (FUNC_11(VAR_12))
  return -VAR_0;

 VAR_14 = FUNC_5(VAR_13, 1);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_11 = FUNC_3(VAR_4);
 if (!VAR_11) {
  FUNC_7(VAR_13, VAR_14);
  return -VAR_1;
 }
 VAR_14->out.argpages = 1;
 VAR_14->num_pages = 1;
 VAR_14->pages[0] = VAR_11;
 VAR_14->page_descs[0].length = VAR_5;
 if (VAR_13->do_readdirplus) {
  VAR_15 = FUNC_4(VAR_13);
  FUNC_8(VAR_14, VAR_6, VAR_6->f_pos, VAR_5,
          VAR_3);
 } else {
  FUNC_8(VAR_14, VAR_6, VAR_6->f_pos, VAR_5,
          VAR_2);
 }
 FUNC_9(VAR_13, VAR_14);
 VAR_10 = VAR_14->out.args[0].size;
 VAR_9 = VAR_14->out.h.error;
 FUNC_7(VAR_13, VAR_14);
 if (!VAR_9) {
  if (VAR_13->do_readdirplus) {
   VAR_9 = FUNC_14(FUNC_12(VAR_11), VAR_10,
      VAR_6, VAR_7, VAR_8,
      VAR_15);
  } else {
   VAR_9 = FUNC_13(FUNC_12(VAR_11), VAR_10, VAR_6,
         VAR_7, VAR_8);
  }
 }

 FUNC_2(VAR_11);
 FUNC_6(VAR_12);
 return VAR_9;
}
