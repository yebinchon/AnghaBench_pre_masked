
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int fscache; } ;
struct v9fs_cookie {int lock; struct fscache_cookie* fscache; } ;
struct inode {int dummy; } ;
struct fscache_cookie {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct inode*,struct fscache_cookie*,struct fscache_cookie*) ;
 struct fscache_cookie* FUNC_1 (int ,int *,struct v9fs_cookie*) ;
 int FUNC_2 (struct fscache_cookie*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 struct v9fs_cookie* FUNC_5 (struct inode*) ;
 struct v9fs_session_info* FUNC_6 (struct inode*) ;

void FUNC_7(struct inode *VAR_2)
{
 struct v9fs_cookie *VAR_3 = FUNC_5(VAR_2);
 struct v9fs_session_info *VAR_4;
 struct fscache_cookie *VAR_5;

 if (!VAR_3->fscache)
  return;

 VAR_5 = VAR_3->fscache;

 FUNC_3(&VAR_3->lock);
 FUNC_2(VAR_3->fscache, 1);

 VAR_4 = FUNC_6(VAR_2);
 VAR_3->fscache = FUNC_1(VAR_4->fscache,
        &VAR_1,
        VAR_3);

 FUNC_0(VAR_0, "inode %p revalidating cookie old %p new %p",
     VAR_2, VAR_5, VAR_3->fscache);

 FUNC_4(&VAR_3->lock);
}
