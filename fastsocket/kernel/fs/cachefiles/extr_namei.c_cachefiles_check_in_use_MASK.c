
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; } ;
struct cachefiles_cache {int dummy; } ;
struct TYPE_2__ {int i_mutex; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct cachefiles_cache*,struct dentry*,char*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct cachefiles_cache *VAR_0, struct dentry *VAR_1,
       char *VAR_2)
{
 struct dentry *VAR_3;




 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_4(&VAR_1->d_inode->i_mutex);
 FUNC_3(VAR_3);

 return 0;
}
