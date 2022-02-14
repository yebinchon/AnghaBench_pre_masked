
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int i_mutex; struct dentry* d_inode; struct dentry* d_parent; } ;
struct TYPE_2__ {int debug_id; } ;
struct cachefiles_object {struct dentry* dentry; int flags; TYPE_1__ fscache; } ;
struct cachefiles_cache {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,struct dentry*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct cachefiles_cache*,struct dentry*,struct dentry*,int) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

int FUNC_10(struct cachefiles_cache *VAR_2,
        struct cachefiles_object *VAR_3)
{
 struct dentry *VAR_4;
 int VAR_5;

 FUNC_2(",OBJ%x{%p}", VAR_3->fscache.debug_id, VAR_3->dentry);

 FUNC_0(VAR_3->dentry);
 FUNC_0(VAR_3->dentry->d_inode);
 FUNC_0(VAR_3->dentry->d_parent);

 VAR_4 = FUNC_5(VAR_3->dentry);

 FUNC_7(&VAR_4->d_inode->i_mutex, VAR_1);

 if (FUNC_9(VAR_0, &VAR_3->flags)) {


  FUNC_1("object preemptively buried");
  FUNC_8(&VAR_4->d_inode->i_mutex);
  VAR_5 = 0;
 } else {


  if (VAR_4 == VAR_3->dentry->d_parent) {
   VAR_5 = FUNC_4(VAR_2, VAR_4,
           VAR_3->dentry, 0);
  } else {



   FUNC_8(&VAR_4->d_inode->i_mutex);
   VAR_5 = 0;
  }
 }

 FUNC_6(VAR_4);
 FUNC_3(" = %d", VAR_5);
 return VAR_5;
}
