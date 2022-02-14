
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v9fs_session_info {int dummy; } ;
struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct p9_fid*) ;
 int VAR_2 ;
 int FUNC_3 (struct p9_fid*) ;
 int FUNC_4 (struct v9fs_session_info*,int) ;
 struct p9_fid* FUNC_5 (struct v9fs_session_info*,struct inode*,struct dentry*,int *,int ,int ) ;
 struct v9fs_session_info* FUNC_6 (struct inode*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, struct dentry *VAR_4, int VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 struct v9fs_session_info *VAR_8;
 struct p9_fid *VAR_9;

 FUNC_1(VAR_0, "name %s\n", VAR_4->d_name.name);
 VAR_6 = 0;
 VAR_8 = FUNC_6(VAR_3);
 VAR_7 = FUNC_4(VAR_8, VAR_5 | VAR_2);
 VAR_9 = FUNC_5(VAR_8, VAR_3, VAR_4, ((void*)0), VAR_7, VAR_1);
 if (FUNC_0(VAR_9)) {
  VAR_6 = FUNC_2(VAR_9);
  VAR_9 = ((void*)0);
 }

 if (VAR_9)
  FUNC_3(VAR_9);

 return VAR_6;
}
