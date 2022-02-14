
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd3_sattrargs {int guardtime; int check_guard; int attrs; int fh; } ;
struct nfsd3_attrstat {int fh; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct svc_rqst*,int *,int *,int ,int ) ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_0, struct nfsd3_sattrargs *VAR_1,
        struct nfsd3_attrstat *VAR_2)
{
 __be32 VAR_3;

 FUNC_2("nfsd: SETATTR(3)  %s\n",
    FUNC_1(&VAR_1->fh));

 FUNC_3(&VAR_2->fh, &VAR_1->fh);
 VAR_3 = FUNC_4(VAR_0, &VAR_2->fh, &VAR_1->attrs,
         VAR_1->check_guard, VAR_1->guardtime);
 FUNC_0(VAR_3);
}
