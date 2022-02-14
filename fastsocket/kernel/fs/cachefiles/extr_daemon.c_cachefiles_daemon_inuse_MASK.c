
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dentry; } ;
struct fs_struct {int lock; TYPE_1__ pwd; } ;
struct dentry {TYPE_2__* d_inode; } ;
struct cred {int dummy; } ;
struct cachefiles_cache {int flags; } ;
struct TYPE_6__ {struct fs_struct* fs; } ;
struct TYPE_5__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cachefiles_cache*,struct cred const**) ;
 int FUNC_2 (struct cachefiles_cache*,struct dentry*,char*) ;
 int FUNC_3 (struct cachefiles_cache*,struct cred const*) ;
 TYPE_3__* VAR_5 ;
 struct dentry* FUNC_4 (int ) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct cachefiles_cache *VAR_6, char *VAR_7)
{
 struct fs_struct *VAR_8;
 struct dentry *VAR_9;
 const struct cred *VAR_10;
 int VAR_11;



 if (FUNC_9(VAR_7, '/'))
  goto inval;

 if (!FUNC_10(VAR_1, &VAR_6->flags)) {
  FUNC_6("inuse applied to unready cache");
  return -VAR_3;
 }

 if (FUNC_10(VAR_0, &VAR_6->flags)) {
  FUNC_6("inuse applied to dead cache");
  return -VAR_3;
 }


 VAR_8 = VAR_5->fs;
 FUNC_7(&VAR_8->lock);
 VAR_9 = FUNC_4(VAR_8->pwd.dentry);
 FUNC_8(&VAR_8->lock);

 if (!FUNC_0(VAR_9->d_inode->i_mode))
  goto notdir;

 FUNC_1(VAR_6, &VAR_10);
 VAR_11 = FUNC_2(VAR_6, VAR_9, VAR_7);
 FUNC_3(VAR_6, VAR_10);

 FUNC_5(VAR_9);

 return VAR_11;

notdir:
 FUNC_5(VAR_9);
 FUNC_6("inuse command requires dirfd to be a directory");
 return -VAR_4;

inval:
 FUNC_6("inuse command requires dirfd and filename");
 return -VAR_2;
}
