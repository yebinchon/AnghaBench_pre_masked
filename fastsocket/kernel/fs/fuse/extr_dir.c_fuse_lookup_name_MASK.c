
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int dummy; } ;
struct qstr {scalar_t__ len; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int error; } ;
struct TYPE_5__ {TYPE_1__ h; } ;
struct fuse_req {TYPE_2__ out; } ;
struct TYPE_6__ {int mode; } ;
struct fuse_entry_out {int nodeid; TYPE_3__ attr; int generation; } ;
struct fuse_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 int FUNC_2 (struct fuse_entry_out*) ;
 int FUNC_3 (struct fuse_conn*) ;
 struct fuse_req* FUNC_4 (struct fuse_conn*) ;
 struct inode* FUNC_5 (struct super_block*,int ,int ,TYPE_3__*,int ,int ) ;
 int FUNC_6 (struct fuse_conn*,struct fuse_req*,int ,struct qstr*,struct fuse_entry_out*) ;
 int FUNC_7 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_8 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_9 (struct fuse_conn*,struct fuse_req*,int ,int) ;
 int FUNC_10 (int ) ;
 struct fuse_conn* FUNC_11 (struct super_block*) ;

int FUNC_12(struct super_block *VAR_4, u64 VAR_5, struct qstr *VAR_6,
       struct fuse_entry_out *VAR_7, struct inode **VAR_8)
{
 struct fuse_conn *VAR_9 = FUNC_11(VAR_4);
 struct fuse_req *VAR_10;
 struct fuse_req *VAR_11;
 u64 VAR_12;
 int VAR_13;

 *VAR_8 = ((void*)0);
 VAR_13 = -VAR_1;
 if (VAR_6->len > VAR_3)
  goto out;

 VAR_10 = FUNC_4(VAR_9);
 VAR_13 = FUNC_1(VAR_10);
 if (FUNC_0(VAR_10))
  goto out;

 VAR_11 = FUNC_4(VAR_9);
 VAR_13 = FUNC_1(VAR_11);
 if (FUNC_0(VAR_11)) {
  FUNC_7(VAR_9, VAR_10);
  goto out;
 }

 VAR_12 = FUNC_3(VAR_9);

 FUNC_6(VAR_9, VAR_10, VAR_5, VAR_6, VAR_7);
 FUNC_8(VAR_9, VAR_10);
 VAR_13 = VAR_10->out.h.error;
 FUNC_7(VAR_9, VAR_10);

 if (VAR_13 || !VAR_7->nodeid)
  goto out_put_forget;

 VAR_13 = -VAR_0;
 if (!VAR_7->nodeid)
  goto out_put_forget;
 if (!FUNC_10(VAR_7->attr.mode))
  goto out_put_forget;

 *VAR_8 = FUNC_5(VAR_4, VAR_7->nodeid, VAR_7->generation,
      &VAR_7->attr, FUNC_2(VAR_7),
      VAR_12);
 VAR_13 = -VAR_2;
 if (!*VAR_8) {
  FUNC_9(VAR_9, VAR_11, VAR_7->nodeid, 1);
  goto out;
 }
 VAR_13 = 0;

 out_put_forget:
 FUNC_7(VAR_9, VAR_11);
 out:
 return VAR_13;
}
