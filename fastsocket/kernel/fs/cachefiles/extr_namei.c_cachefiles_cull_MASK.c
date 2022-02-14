
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int len; } ;
struct dentry {TYPE_2__* d_inode; TYPE_1__ d_name; } ;
struct cachefiles_cache {int dummy; } ;
struct TYPE_4__ {int i_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ,int ,int ,char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct cachefiles_cache*,struct dentry*,struct dentry*,int) ;
 struct dentry* FUNC_6 (struct cachefiles_cache*,struct dentry*,char*) ;
 int FUNC_7 (struct cachefiles_cache*,struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct cachefiles_cache *VAR_4, struct dentry *VAR_5,
      char *VAR_6)
{
 struct dentry *VAR_7;
 int VAR_8;

 FUNC_3(",%*.*s/,%s",
        VAR_5->d_name.len, VAR_5->d_name.len, VAR_5->d_name.name, VAR_6);

 VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_6);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_2("victim -> %p %s",
        VAR_7, VAR_7->d_inode ? "positive" : "negative");




 FUNC_2("victim is cullable");

 VAR_8 = FUNC_7(VAR_4, VAR_7);
 if (VAR_8 < 0)
  goto error_unlock;


 FUNC_2("bury");

 VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_7, 0);
 if (VAR_8 < 0)
  goto error;

 FUNC_8(VAR_7);
 FUNC_4(" = 0");
 return 0;

error_unlock:
 FUNC_10(&VAR_5->d_inode->i_mutex);
error:
 FUNC_8(VAR_7);
 if (VAR_8 == -VAR_1) {

  FUNC_4(" = -ESTALE [absent]");
  return -VAR_3;
 }

 if (VAR_8 != -VAR_2) {
  FUNC_9("Internal error: %d", VAR_8);
  VAR_8 = -VAR_0;
 }

 FUNC_4(" = %d", VAR_8);
 return VAR_8;
}
