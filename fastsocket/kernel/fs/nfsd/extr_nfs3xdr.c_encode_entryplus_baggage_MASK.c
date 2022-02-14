
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_fh {int dummy; } ;
struct nfsd3_readdirres {int rqstp; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct nfsd3_readdirres*,struct svc_fh*,char const*,int) ;
 int * FUNC_1 (int *,struct svc_fh*) ;
 int * FUNC_2 (int ,int *,struct svc_fh*) ;
 int FUNC_3 (struct svc_fh*,int ) ;
 int FUNC_4 (struct svc_fh*) ;
 scalar_t__ VAR_1 ;

__be32 *FUNC_5(struct nfsd3_readdirres *VAR_2, __be32 *VAR_3, const char *VAR_4, int VAR_5)
{
 struct svc_fh VAR_6;
 int VAR_7;

 FUNC_3(&VAR_6, VAR_0);
 VAR_7 = FUNC_0(VAR_2, &VAR_6, VAR_4, VAR_5);
 if (VAR_7) {
  *VAR_3++ = 0;
  *VAR_3++ = 0;
  goto out;
 }
 VAR_3 = FUNC_2(VAR_2->rqstp, VAR_3, &VAR_6);
 *VAR_3++ = VAR_1;
 VAR_3 = FUNC_1(VAR_3, &VAR_6);
out:
 FUNC_4(&VAR_6);
 return VAR_3;
}
