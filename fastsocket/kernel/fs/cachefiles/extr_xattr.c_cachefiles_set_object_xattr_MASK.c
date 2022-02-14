
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct cachefiles_xattr {int len; int type; } ;
struct cachefiles_object {struct dentry* dentry; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,struct cachefiles_object*,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct cachefiles_object*,char*,int) ;
 int VAR_2 ;
 int FUNC_5 (struct dentry*,int ,int *,int ,int ) ;

int FUNC_6(struct cachefiles_object *VAR_3,
    struct cachefiles_xattr *VAR_4)
{
 struct dentry *VAR_5 = VAR_3->dentry;
 int VAR_6;

 FUNC_0(VAR_5);

 FUNC_2("%p,#%d", VAR_3, VAR_4->len);


 FUNC_1("SET #%u", VAR_4->len);

 VAR_6 = FUNC_5(VAR_5, VAR_2,
      &VAR_4->type, VAR_4->len,
      VAR_1);
 if (VAR_6 < 0 && VAR_6 != -VAR_0)
  FUNC_4(
   VAR_3,
   "Failed to set xattr with error %d", VAR_6);

 FUNC_3(" = %d", VAR_6);
 return VAR_6;
}
