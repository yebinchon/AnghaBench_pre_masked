
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v9fs_session_info {scalar_t__ cache; } ;
struct TYPE_4__ {scalar_t__ version; } ;
struct p9_fid {TYPE_2__ qid; } ;
struct inode {scalar_t__ i_blocks; } ;
struct TYPE_3__ {int dentry; } ;
struct file {int f_flags; int * f_op; struct p9_fid* private_data; TYPE_1__ f_path; } ;


 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_2 (struct p9_fid*) ;
 int VAR_3 ;
 int FUNC_3 (struct file*,int ,int ) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct p9_fid*) ;
 int FUNC_6 (struct p9_fid*,int) ;
 int FUNC_7 (struct inode*,struct file*) ;
 int VAR_4 ;
 int FUNC_8 (struct v9fs_session_info*) ;
 struct p9_fid* FUNC_9 (int ) ;
 int VAR_5 ;
 struct v9fs_session_info* FUNC_10 (struct inode*) ;
 int FUNC_11 (int,int ) ;

int FUNC_12(struct inode *VAR_6, struct file *VAR_7)
{
 int VAR_8;
 struct v9fs_session_info *VAR_9;
 struct p9_fid *VAR_10;
 int VAR_11;

 FUNC_1(VAR_1, "inode: %p file: %p \n", VAR_6, VAR_7);
 VAR_9 = FUNC_10(VAR_6);
 VAR_11 = FUNC_11(VAR_7->f_flags, FUNC_8(VAR_9));
 VAR_10 = VAR_7->private_data;
 if (!VAR_10) {
  VAR_10 = FUNC_9(VAR_7->f_path.dentry);
  if (FUNC_0(VAR_10))
   return FUNC_2(VAR_10);

  VAR_8 = FUNC_6(VAR_10, VAR_11);
  if (VAR_8 < 0) {
   FUNC_5(VAR_10);
   return VAR_8;
  }
  if (VAR_11 & VAR_2) {
   FUNC_4(VAR_6, 0);
   VAR_6->i_blocks = 0;
  }
  if ((VAR_7->f_flags & VAR_0) && (!FUNC_8(VAR_9)))
   FUNC_3(VAR_7, 0, VAR_3);
 }

 VAR_7->private_data = VAR_10;
 if ((VAR_10->qid.version) && (VAR_9->cache)) {
  FUNC_1(VAR_1, "cached");

  if(VAR_7->f_op == &VAR_5)
   VAR_7->f_op = &VAR_4;




 }

 return 0;
}
