
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd3_fsinfores {scalar_t__ status; int f_properties; int f_maxfilesize; int f_dtpref; int f_wtmult; int f_wtpref; int f_wtmax; int f_rtmult; int f_rtpref; int f_rtmax; } ;
typedef int __be32 ;


 void* FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct svc_rqst*,int *) ;
 void* VAR_1 ;

int
FUNC_3(struct svc_rqst *VAR_2, __be32 *VAR_3,
     struct nfsd3_fsinfores *VAR_4)
{
 *VAR_3++ = VAR_1;

 if (VAR_4->status == 0) {
  *VAR_3++ = FUNC_0(VAR_4->f_rtmax);
  *VAR_3++ = FUNC_0(VAR_4->f_rtpref);
  *VAR_3++ = FUNC_0(VAR_4->f_rtmult);
  *VAR_3++ = FUNC_0(VAR_4->f_wtmax);
  *VAR_3++ = FUNC_0(VAR_4->f_wtpref);
  *VAR_3++ = FUNC_0(VAR_4->f_wtmult);
  *VAR_3++ = FUNC_0(VAR_4->f_dtpref);
  VAR_3 = FUNC_1(VAR_3, VAR_4->f_maxfilesize);
  *VAR_3++ = VAR_0;
  *VAR_3++ = VAR_1;
  *VAR_3++ = FUNC_0(VAR_4->f_properties);
 }

 return FUNC_2(VAR_2, VAR_3);
}
