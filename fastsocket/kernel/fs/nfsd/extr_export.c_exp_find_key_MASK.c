
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int svc_client ;
struct svc_expkey {int ek_fsidtype; int h; int ek_fsid; int * ek_client; } ;
struct cache_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct svc_expkey* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,struct cache_req*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_2 ;
 struct svc_expkey* FUNC_4 (struct svc_expkey*) ;

__attribute__((used)) static struct svc_expkey *
FUNC_5(svc_client *VAR_3, int VAR_4, u32 *VAR_5, struct cache_req *VAR_6)
{
 struct svc_expkey VAR_7, *VAR_8;
 int VAR_9;

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_7.ek_client = VAR_3;
 VAR_7.ek_fsidtype = VAR_4;
 FUNC_3(VAR_7.ek_fsid, VAR_5, FUNC_2(VAR_4));

 VAR_8 = FUNC_4(&VAR_7);
 if (VAR_8 == ((void*)0))
  return FUNC_0(-VAR_1);
 VAR_9 = FUNC_1(&VAR_2, &VAR_8->h, VAR_6);
 if (VAR_9)
  return FUNC_0(VAR_9);
 return VAR_8;
}
