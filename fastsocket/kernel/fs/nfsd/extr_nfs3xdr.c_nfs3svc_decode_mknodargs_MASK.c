
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd3_mknodargs {scalar_t__ ftype; void* minor; void* major; int attrs; int len; int name; int fh; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct svc_rqst*,int *) ;

int
FUNC_5(struct svc_rqst *VAR_4, __be32 *VAR_5,
     struct nfsd3_mknodargs *VAR_6)
{
 if (!(VAR_5 = FUNC_0(VAR_5, &VAR_6->fh))
  || !(VAR_5 = FUNC_1(VAR_5, &VAR_6->name, &VAR_6->len)))
  return 0;

 VAR_6->ftype = FUNC_3(*VAR_5++);

 if (VAR_6->ftype == VAR_0 || VAR_6->ftype == VAR_1
  || VAR_6->ftype == VAR_3 || VAR_6->ftype == VAR_2)
  VAR_5 = FUNC_2(VAR_5, &VAR_6->attrs);

 if (VAR_6->ftype == VAR_0 || VAR_6->ftype == VAR_1) {
  VAR_6->major = FUNC_3(*VAR_5++);
  VAR_6->minor = FUNC_3(*VAR_5++);
 }

 return FUNC_4(VAR_4, VAR_5);
}
