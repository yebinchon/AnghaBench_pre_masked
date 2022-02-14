
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct nameidata {int dummy; } ;
struct inode {int i_mode; } ;
struct TYPE_4__ {int error; } ;
struct TYPE_5__ {TYPE_1__ h; } ;
struct fuse_req {TYPE_2__ out; } ;
struct fuse_inode {int nlookup; } ;
struct TYPE_6__ {int mode; } ;
struct fuse_entry_out {TYPE_3__ attr; int nodeid; } ;
struct fuse_conn {int lock; } ;
struct dentry {int d_name; struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct fuse_entry_out*) ;
 int FUNC_7 (struct inode*,TYPE_3__*,int ,int ) ;
 int FUNC_8 (struct dentry*,struct fuse_entry_out*) ;
 scalar_t__ FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct fuse_conn*) ;
 struct fuse_req* FUNC_11 (struct fuse_conn*) ;
 int FUNC_12 (struct fuse_conn*,struct fuse_req*,int ,int *,struct fuse_entry_out*) ;
 int FUNC_13 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_14 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_15 (struct fuse_conn*,struct fuse_req*,int ,int) ;
 struct fuse_conn* FUNC_16 (struct inode*) ;
 struct fuse_inode* FUNC_17 (struct inode*) ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 (struct inode*) ;
 scalar_t__ FUNC_20 (struct dentry*) ;
 scalar_t__ FUNC_21 (struct inode*) ;
 int FUNC_22 (struct dentry*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static int FUNC_25(struct dentry *VAR_3, struct nameidata *VAR_4)
{
 struct inode *VAR_5 = VAR_3->d_inode;
 int VAR_6;

 if (VAR_5 && FUNC_21(VAR_5))
  goto invalid;
 else if (FUNC_9(VAR_3) < FUNC_18()) {
  int VAR_7;
  struct fuse_entry_out VAR_8;
  struct fuse_conn *VAR_9;
  struct fuse_req *VAR_10;
  struct fuse_req *VAR_11;
  struct dentry *VAR_12;
  u64 VAR_13;


  if (!VAR_5)
   goto invalid;

  VAR_9 = FUNC_16(VAR_5);
  VAR_10 = FUNC_11(VAR_9);
  VAR_6 = FUNC_1(VAR_10);
  if (FUNC_0(VAR_10))
   goto out;

  VAR_11 = FUNC_11(VAR_9);
  if (FUNC_0(VAR_11)) {
   FUNC_13(VAR_9, VAR_10);
   VAR_6 = -VAR_1;
   goto out;
  }

  VAR_13 = FUNC_10(VAR_9);

  VAR_12 = FUNC_4(VAR_3);
  FUNC_12(VAR_9, VAR_10, FUNC_19(VAR_12->d_inode),
     &VAR_3->d_name, &VAR_8);
  FUNC_14(VAR_9, VAR_10);
  FUNC_5(VAR_12);
  VAR_7 = VAR_10->out.h.error;
  FUNC_13(VAR_9, VAR_10);

  if (!VAR_7 && !VAR_8.nodeid)
   VAR_7 = -VAR_0;
  if (!VAR_7) {
   struct fuse_inode *VAR_14 = FUNC_17(VAR_5);
   if (VAR_8.nodeid != FUNC_19(VAR_5)) {
    FUNC_15(VAR_9, VAR_11,
       VAR_8.nodeid, 1);
    goto invalid;
   }
   FUNC_23(&VAR_9->lock);
   VAR_14->nlookup++;
   FUNC_24(&VAR_9->lock);
  }
  FUNC_13(VAR_9, VAR_11);
  if (VAR_7 || (VAR_8.attr.mode ^ VAR_5->i_mode) & VAR_2)
   goto invalid;

  FUNC_7(VAR_5, &VAR_8.attr,
           FUNC_6(&VAR_8),
           VAR_13);
  FUNC_8(VAR_3, &VAR_8);
 }
 VAR_6 = 1;
out:
 return VAR_6;

invalid:
 VAR_6 = 0;
 if (VAR_5 && FUNC_2(VAR_5->i_mode)) {
  if (FUNC_20(VAR_3)) {
   VAR_6 = 1;
   goto out;
  }
  FUNC_22(VAR_3);
 }
 FUNC_3(VAR_3);
 goto out;
}
