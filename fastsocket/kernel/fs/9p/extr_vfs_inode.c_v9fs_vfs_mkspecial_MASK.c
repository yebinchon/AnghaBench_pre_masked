
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v9fs_session_info {int dummy; } ;
struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct p9_fid*) ;
 int FUNC_3 (struct p9_fid*) ;
 int FUNC_4 (struct v9fs_session_info*,int) ;
 struct p9_fid* FUNC_5 (struct v9fs_session_info*,struct inode*,struct dentry*,char*,int ,int ) ;
 int FUNC_6 (struct v9fs_session_info*) ;
 struct v9fs_session_info* FUNC_7 (struct inode*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_3, struct dentry *VAR_4,
 int VAR_5, const char *VAR_6)
{
 u32 VAR_7;
 struct v9fs_session_info *VAR_8;
 struct p9_fid *VAR_9;

 VAR_8 = FUNC_7(VAR_3);
 if (!FUNC_6(VAR_8)) {
  FUNC_1(VAR_1, "not extended\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_4(VAR_8, VAR_5);
 VAR_9 = FUNC_5(VAR_8, VAR_3, VAR_4, (char *) VAR_6, VAR_7,
        VAR_2);
 if (FUNC_0(VAR_9))
  return FUNC_2(VAR_9);

 FUNC_3(VAR_9);
 return 0;
}
