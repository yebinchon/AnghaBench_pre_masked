
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_chandle; int * rq_gssclient; int * rq_client; } ;
struct svc_export {scalar_t__ ex_nflavors; } ;
struct path {int dummy; } ;


 int VAR_0 ;
 struct svc_export* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct svc_export*) ;
 int FUNC_2 (struct svc_export*) ;
 struct svc_export* FUNC_3 (int *,struct path*,int *) ;
 int FUNC_4 (struct svc_export*) ;

struct svc_export *
FUNC_5(struct svc_rqst *VAR_1, struct path *VAR_2)
{
 struct svc_export *VAR_3, *VAR_4 = FUNC_0(-VAR_0);

 if (VAR_1->rq_client == ((void*)0))
  goto gss;


 VAR_4 = FUNC_3(VAR_1->rq_client, VAR_2, &VAR_1->rq_chandle);
 if (FUNC_2(VAR_4) == -VAR_0)
  goto gss;
 if (FUNC_1(VAR_4))
  return VAR_4;

 if (VAR_4->ex_nflavors > 0)
  return VAR_4;
gss:

 if (VAR_1->rq_gssclient == ((void*)0))
  return VAR_4;
 VAR_3 = FUNC_3(VAR_1->rq_gssclient, VAR_2, &VAR_1->rq_chandle);
 if (FUNC_2(VAR_3) == -VAR_0)
  return VAR_4;
 if (!FUNC_1(VAR_4))
  FUNC_4(VAR_4);
 return VAR_3;
}
