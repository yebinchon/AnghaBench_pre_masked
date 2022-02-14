
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_rqst {int rq_chandle; int * rq_gssclient; int * rq_client; } ;
struct svc_export {scalar_t__ ex_nflavors; } ;


 int VAR_0 ;
 struct svc_export* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct svc_export*) ;
 int FUNC_2 (struct svc_export*) ;
 struct svc_export* FUNC_3 (int *,int,int *,int *) ;
 int FUNC_4 (struct svc_export*) ;

struct svc_export *
FUNC_5(struct svc_rqst *VAR_1, int VAR_2, u32 *VAR_3)
{
 struct svc_export *VAR_4, *VAR_5 = FUNC_0(-VAR_0);

 if (VAR_1->rq_client == ((void*)0))
  goto gss;


 VAR_5 = FUNC_3(VAR_1->rq_client, VAR_2, VAR_3, &VAR_1->rq_chandle);
 if (FUNC_2(VAR_5) == -VAR_0)
  goto gss;
 if (FUNC_1(VAR_5))
  return VAR_5;

 if (VAR_5->ex_nflavors > 0)
  return VAR_5;
gss:

 if (VAR_1->rq_gssclient == ((void*)0))
  return VAR_5;
 VAR_4 = FUNC_3(VAR_1->rq_gssclient, VAR_2, VAR_3,
      &VAR_1->rq_chandle);
 if (FUNC_2(VAR_4) == -VAR_0)
  return VAR_5;
 if (!FUNC_1(VAR_5))
  FUNC_4(VAR_5);
 return VAR_4;
}
