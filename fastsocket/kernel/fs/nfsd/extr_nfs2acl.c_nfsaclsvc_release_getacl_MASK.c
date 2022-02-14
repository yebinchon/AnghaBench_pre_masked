
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd3_getaclres {int acl_default; int acl_access; int fh; } ;
typedef int __be32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct svc_rqst *VAR_0, __be32 *VAR_1,
  struct nfsd3_getaclres *VAR_2)
{
 FUNC_0(&VAR_2->fh);
 FUNC_1(VAR_2->acl_access);
 FUNC_1(VAR_2->acl_default);
 return 1;
}
