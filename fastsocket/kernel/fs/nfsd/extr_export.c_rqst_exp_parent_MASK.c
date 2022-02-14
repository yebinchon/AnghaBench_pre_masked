
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_export {int dummy; } ;
struct path {struct dentry* dentry; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct svc_export*) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 struct svc_export* FUNC_5 (struct svc_rqst*,struct path*) ;

struct svc_export *
FUNC_6(struct svc_rqst *VAR_1, struct path *VAR_2)
{
 struct dentry *VAR_3 = FUNC_2(VAR_2->dentry);
 struct svc_export *VAR_4 = FUNC_5(VAR_1, VAR_2);

 while (FUNC_1(VAR_4) == -VAR_0 && !FUNC_0(VAR_2->dentry)) {
  struct dentry *VAR_5 = FUNC_3(VAR_2->dentry);
  FUNC_4(VAR_2->dentry);
  VAR_2->dentry = VAR_5;
  VAR_4 = FUNC_5(VAR_1, VAR_2);
 }
 FUNC_4(VAR_2->dentry);
 VAR_2->dentry = VAR_3;
 return VAR_4;
}
