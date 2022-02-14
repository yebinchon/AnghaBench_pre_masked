
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd3_pathconfres {scalar_t__ status; int p_case_preserving; int p_case_insensitive; int p_chown_restricted; int p_no_trunc; int p_name_max; int p_link_max; } ;
typedef int __be32 ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct svc_rqst*,int *) ;
 int VAR_0 ;

int
FUNC_2(struct svc_rqst *VAR_1, __be32 *VAR_2,
     struct nfsd3_pathconfres *VAR_3)
{
 *VAR_2++ = VAR_0;

 if (VAR_3->status == 0) {
  *VAR_2++ = FUNC_0(VAR_3->p_link_max);
  *VAR_2++ = FUNC_0(VAR_3->p_name_max);
  *VAR_2++ = FUNC_0(VAR_3->p_no_trunc);
  *VAR_2++ = FUNC_0(VAR_3->p_chown_restricted);
  *VAR_2++ = FUNC_0(VAR_3->p_case_insensitive);
  *VAR_2++ = FUNC_0(VAR_3->p_case_preserving);
 }

 return FUNC_1(VAR_1, VAR_2);
}
