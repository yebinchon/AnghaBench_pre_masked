
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v9fs_session_info {int dummy; } ;
struct p9_fid {struct p9_fid* private_data; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ open; } ;
struct nameidata {int flags; TYPE_2__ intent; } ;
struct inode {int dummy; } ;
struct file {struct file* private_data; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct p9_fid*) ;
 struct p9_fid* FUNC_2 (struct nameidata*,struct dentry*,int ) ;
 int FUNC_3 (struct p9_fid*) ;
 int FUNC_4 (struct v9fs_session_info*,int) ;
 struct p9_fid* FUNC_5 (struct v9fs_session_info*,struct inode*,struct dentry*,int *,int ,int ) ;
 int FUNC_6 (struct v9fs_session_info*) ;
 struct v9fs_session_info* FUNC_7 (struct inode*) ;
 int VAR_2 ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int
FUNC_9(struct inode *VAR_3, struct dentry *VAR_4, int VAR_5,
  struct nameidata *VAR_6)
{
 int VAR_7;
 u32 VAR_8;
 int VAR_9;
 struct v9fs_session_info *VAR_10;
 struct p9_fid *VAR_11;
 struct file *VAR_12;

 VAR_7 = 0;
 VAR_11 = ((void*)0);
 VAR_10 = FUNC_7(VAR_3);
 VAR_8 = FUNC_4(VAR_10, VAR_5);
 if (VAR_6 && VAR_6->flags & VAR_0)
  VAR_9 = VAR_6->intent.open.flags - 1;
 else
  VAR_9 = VAR_1;

 VAR_11 = FUNC_5(VAR_10, VAR_3, VAR_4, ((void*)0), VAR_8,
    FUNC_8(VAR_9, FUNC_6(VAR_10)));
 if (FUNC_0(VAR_11)) {
  VAR_7 = FUNC_1(VAR_11);
  VAR_11 = ((void*)0);
  goto error;
 }


 if (VAR_6 && VAR_6->flags & VAR_0) {
  VAR_12 = FUNC_2(VAR_6, VAR_4, VAR_2);
  if (FUNC_0(VAR_12)) {
   VAR_7 = FUNC_1(VAR_12);
   goto error;
  }

  VAR_12->private_data = VAR_11;
 } else
  FUNC_3(VAR_11);

 return 0;

error:
 if (VAR_11)
  FUNC_3(VAR_11);

 return VAR_7;
}
