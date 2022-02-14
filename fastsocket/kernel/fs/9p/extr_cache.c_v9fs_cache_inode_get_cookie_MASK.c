
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int fscache; } ;
struct v9fs_cookie {scalar_t__ fscache; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct inode*,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,struct v9fs_cookie*) ;
 int VAR_1 ;
 struct v9fs_cookie* FUNC_3 (struct inode*) ;
 struct v9fs_session_info* FUNC_4 (struct inode*) ;

void FUNC_5(struct inode *VAR_2)
{
 struct v9fs_cookie *VAR_3;
 struct v9fs_session_info *VAR_4;

 if (!FUNC_1(VAR_2->i_mode))
  return;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3->fscache)
  return;

 VAR_4 = FUNC_4(VAR_2);
 VAR_3->fscache = FUNC_2(VAR_4->fscache,
        &VAR_1,
        VAR_3);

 FUNC_0(VAR_0, "inode %p get cookie %p", VAR_2,
     VAR_3->fscache);
}
