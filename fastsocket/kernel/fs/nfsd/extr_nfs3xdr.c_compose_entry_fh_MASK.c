
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_fh {int dummy; } ;
struct svc_export {int dummy; } ;
struct TYPE_2__ {struct svc_export* fh_export; struct dentry* fh_dentry; } ;
struct nfsd3_readdirres {TYPE_1__ fh; } ;
struct dentry {int d_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct svc_fh*,struct svc_export*,struct dentry*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (char const*,int) ;
 struct dentry* FUNC_7 (char const*,struct dentry*,int) ;

__attribute__((used)) static int
FUNC_8(struct nfsd3_readdirres *VAR_1, struct svc_fh *VAR_2,
  const char *VAR_3, int VAR_4)
{
 struct svc_export *VAR_5;
 struct dentry *VAR_6, *VAR_7;
 int VAR_8 = 0;

 VAR_6 = VAR_1->fh.fh_dentry;
 VAR_5 = VAR_1->fh.fh_export;

 if (FUNC_6(VAR_3, VAR_4)) {
  if (VAR_4 == 2) {
   VAR_7 = FUNC_3(VAR_6);
   if (VAR_7 == VAR_6) {

    FUNC_4(VAR_7);
    return -VAR_0;
   }
  } else
   VAR_7 = FUNC_2(VAR_6);
 } else
  VAR_7 = FUNC_7(VAR_3, VAR_6, VAR_4);
 if (FUNC_0(VAR_7))
  return -VAR_0;
 VAR_8 = -VAR_0;
 if (FUNC_1(VAR_7))
  goto out;
 VAR_8 = FUNC_5(VAR_2, VAR_5, VAR_7, &VAR_1->fh);
 if (VAR_8)
  goto out;
 if (!VAR_7->d_inode)
  goto out;
 VAR_8 = 0;
out:
 FUNC_4(VAR_7);
 return VAR_8;
}
