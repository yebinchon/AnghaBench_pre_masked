
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd3_fhandle_pair {int fh2; int fh1; } ;
typedef int __be32 ;


 int FUNC_0 (int *) ;

int
FUNC_1(struct svc_rqst *VAR_0, __be32 *VAR_1,
     struct nfsd3_fhandle_pair *VAR_2)
{
 FUNC_0(&VAR_2->fh1);
 FUNC_0(&VAR_2->fh2);
 return 1;
}
