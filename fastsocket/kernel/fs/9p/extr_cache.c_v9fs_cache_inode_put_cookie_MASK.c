
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_cookie {int * fscache; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct inode*,int *) ;
 int FUNC_1 (int *,int ) ;
 struct v9fs_cookie* FUNC_2 (struct inode*) ;

void FUNC_3(struct inode *VAR_1)
{
 struct v9fs_cookie *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2->fscache)
  return;
 FUNC_0(VAR_0, "inode %p put cookie %p", VAR_1,
     VAR_2->fscache);

 FUNC_1(VAR_2->fscache, 0);
 VAR_2->fscache = ((void*)0);
}
