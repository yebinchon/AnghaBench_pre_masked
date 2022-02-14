
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct TYPE_2__ {int dentry; } ;
struct svc_export {TYPE_1__ ex_path; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (struct svc_export*) ;
 int FUNC_1 (struct svc_export*) ;
 scalar_t__ FUNC_2 (struct svc_export*,struct svc_rqst*) ;
 int FUNC_3 (struct svc_export*) ;
 scalar_t__ FUNC_4 (struct svc_fh*,struct svc_export*,int ,int *) ;
 int FUNC_5 (struct svc_fh*) ;
 struct svc_export* FUNC_6 (struct svc_rqst*) ;
 scalar_t__ FUNC_7 (int ) ;

__be32
FUNC_8(struct svc_rqst *VAR_0, struct svc_fh *VAR_1)
{
 struct svc_export *VAR_2;
 __be32 VAR_3;

 VAR_2 = FUNC_6(VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_7(FUNC_1(VAR_2));
 VAR_3 = FUNC_4(VAR_1, VAR_2, VAR_2->ex_path.dentry, ((void*)0));
 if (VAR_3)
  goto out;
 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3)
  FUNC_5(VAR_1);
out:
 FUNC_3(VAR_2);
 return VAR_3;
}
