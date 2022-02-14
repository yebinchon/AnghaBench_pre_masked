
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svc_fh ;
struct svc_rqst {int dummy; } ;
struct nfsd_attrstat {int fh; } ;
struct nfsd3_setaclargs {int acl_default; int acl_access; int fh; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int * FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (struct svc_rqst*,int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static __be32 FUNC_7(struct svc_rqst * VAR_3,
  struct nfsd3_setaclargs *VAR_4,
  struct nfsd_attrstat *VAR_5)
{
 svc_fh *VAR_6;
 __be32 VAR_7 = 0;

 FUNC_1("nfsd: SETACL(2acl)   %s\n", FUNC_0(&VAR_4->fh));

 VAR_6 = FUNC_2(&VAR_5->fh, &VAR_4->fh);
 VAR_7 = FUNC_3(VAR_3, &VAR_5->fh, 0, VAR_2);

 if (!VAR_7) {
  VAR_7 = FUNC_5( FUNC_4(
   VAR_6, VAR_0, VAR_4->acl_access) );
 }
 if (!VAR_7) {
  VAR_7 = FUNC_5( FUNC_4(
   VAR_6, VAR_1, VAR_4->acl_default) );
 }



 FUNC_6(VAR_4->acl_access);
 FUNC_6(VAR_4->acl_default);
 return VAR_7;
}
