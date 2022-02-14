
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int dummy; } ;
struct super_block {int dummy; } ;
struct p9_wstat {int qid; int i_ino; int mode; } ;
struct p9_fid {int dummy; } ;
struct inode {int qid; int i_ino; int mode; } ;


 struct p9_wstat* FUNC_0 (struct p9_wstat*) ;
 struct p9_wstat* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct p9_wstat*) ;
 int FUNC_3 (struct p9_wstat*) ;
 int FUNC_4 (struct p9_wstat*) ;
 struct p9_wstat* FUNC_5 (struct p9_fid*) ;
 int FUNC_6 (struct v9fs_session_info*,int ) ;
 int FUNC_7 (struct p9_wstat*) ;
 int FUNC_8 (struct p9_wstat*) ;
 struct p9_wstat* FUNC_9 (struct super_block*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct p9_wstat*,struct p9_wstat*,struct super_block*) ;
 int FUNC_12 (struct p9_wstat*,int *) ;

__attribute__((used)) static struct inode *
FUNC_13(struct v9fs_session_info *VAR_0, struct p9_fid *VAR_1,
 struct super_block *VAR_2)
{
 int VAR_3, VAR_4;
 struct inode *VAR_5;
 struct p9_wstat *VAR_6;

 VAR_5 = ((void*)0);
 VAR_6 = FUNC_5(VAR_1);
 if (FUNC_2(VAR_6))
  return FUNC_0(VAR_6);

 VAR_4 = FUNC_6(VAR_0, VAR_6->mode);
 VAR_5 = FUNC_9(VAR_2, VAR_4);
 if (FUNC_2(VAR_5)) {
  VAR_3 = FUNC_3(VAR_5);
  goto error;
 }

 FUNC_11(VAR_6, VAR_5, VAR_2);
 VAR_5->i_ino = FUNC_10(&VAR_6->qid);





 FUNC_7(VAR_6);
 FUNC_4(VAR_6);

 return VAR_5;

error:
 FUNC_7(VAR_6);
 FUNC_4(VAR_6);
 return FUNC_1(VAR_3);
}
