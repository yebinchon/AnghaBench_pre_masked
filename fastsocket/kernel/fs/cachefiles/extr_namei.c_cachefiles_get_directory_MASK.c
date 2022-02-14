
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dentry {TYPE_2__* d_inode; } ;
struct cachefiles_cache {int dummy; } ;
struct TYPE_5__ {int i_mutex; int i_ino; TYPE_1__* i_op; int i_mode; } ;
struct TYPE_4__ {int unlink; int rmdir; int rename; int create; int mkdir; int lookup; int getxattr; int setxattr; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct cachefiles_cache*,int,int ) ;
 int FUNC_9 (int ,unsigned long) ;
 int VAR_3 ;
 int FUNC_10 (struct dentry*) ;
 unsigned long VAR_4 ;
 int FUNC_11 (char*,char const*,...) ;
 struct dentry* FUNC_12 (char const*,struct dentry*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (TYPE_2__*,struct dentry*,int) ;

struct dentry *FUNC_17(struct cachefiles_cache *VAR_5,
     struct dentry *VAR_6,
     const char *VAR_7)
{
 struct dentry *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 FUNC_6(",,%s", VAR_7);


 FUNC_13(&VAR_6->d_inode->i_mutex);

 VAR_9 = VAR_4;
 VAR_8 = FUNC_12(VAR_7, VAR_6, FUNC_15(VAR_7));
 FUNC_9(VAR_3, VAR_9);
 if (FUNC_2(VAR_8)) {
  if (FUNC_3(VAR_8) == -VAR_1)
   goto nomem_d_alloc;
  goto lookup_error;
 }

 FUNC_5("subdir -> %p %s",
        VAR_8, VAR_8->d_inode ? "positive" : "negative");


 if (!VAR_8->d_inode) {
  VAR_10 = FUNC_8(VAR_5, 1, 0);
  if (VAR_10 < 0)
   goto mkdir_error;

  FUNC_5("attempt mkdir");

  VAR_10 = FUNC_16(VAR_6->d_inode, VAR_8, 0700);
  if (VAR_10 < 0)
   goto mkdir_error;

  FUNC_0(VAR_8->d_inode);

  FUNC_5("mkdir -> %p{%p{ino=%lu}}",
         VAR_8,
         VAR_8->d_inode,
         VAR_8->d_inode->i_ino);
 }

 FUNC_14(&VAR_6->d_inode->i_mutex);


 FUNC_0(VAR_8->d_inode);

 if (!FUNC_4(VAR_8->d_inode->i_mode)) {
  FUNC_11("%s is not a directory", VAR_7);
  VAR_10 = -VAR_0;
  goto check_error;
 }

 VAR_10 = -VAR_2;
 if (!VAR_8->d_inode->i_op ||
     !VAR_8->d_inode->i_op->setxattr ||
     !VAR_8->d_inode->i_op->getxattr ||
     !VAR_8->d_inode->i_op->lookup ||
     !VAR_8->d_inode->i_op->mkdir ||
     !VAR_8->d_inode->i_op->create ||
     !VAR_8->d_inode->i_op->rename ||
     !VAR_8->d_inode->i_op->rmdir ||
     !VAR_8->d_inode->i_op->unlink)
  goto check_error;

 FUNC_7(" = [%lu]", VAR_8->d_inode->i_ino);
 return VAR_8;

check_error:
 FUNC_10(VAR_8);
 FUNC_7(" = %d [check]", VAR_10);
 return FUNC_1(VAR_10);

mkdir_error:
 FUNC_14(&VAR_6->d_inode->i_mutex);
 FUNC_10(VAR_8);
 FUNC_11("mkdir %s failed with error %d", VAR_7, VAR_10);
 return FUNC_1(VAR_10);

lookup_error:
 FUNC_14(&VAR_6->d_inode->i_mutex);
 VAR_10 = FUNC_3(VAR_8);
 FUNC_11("Lookup %s failed with error %d", VAR_7, VAR_10);
 return FUNC_1(VAR_10);

nomem_d_alloc:
 FUNC_14(&VAR_6->d_inode->i_mutex);
 FUNC_7(" = -ENOMEM");
 return FUNC_1(-VAR_1);
}
