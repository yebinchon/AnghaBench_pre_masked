
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd3_renameargs {int tlen; int tname; int tfh; int flen; int fname; int ffh; } ;
typedef int __be32 ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (struct svc_rqst*,int *) ;

int
FUNC_3(struct svc_rqst *VAR_0, __be32 *VAR_1,
     struct nfsd3_renameargs *VAR_2)
{
 if (!(VAR_1 = FUNC_0(VAR_1, &VAR_2->ffh))
  || !(VAR_1 = FUNC_1(VAR_1, &VAR_2->fname, &VAR_2->flen))
  || !(VAR_1 = FUNC_0(VAR_1, &VAR_2->tfh))
  || !(VAR_1 = FUNC_1(VAR_1, &VAR_2->tname, &VAR_2->tlen)))
  return 0;

 return FUNC_2(VAR_0, VAR_1);
}
