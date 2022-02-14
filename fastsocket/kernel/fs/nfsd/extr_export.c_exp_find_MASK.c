
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_export {int h; int ek_path; } ;
struct svc_expkey {int h; int ek_path; } ;
struct cache_req {int dummy; } ;
struct auth_domain {int dummy; } ;


 struct svc_export* FUNC_0 (struct svc_export*) ;
 scalar_t__ FUNC_1 (struct svc_export*) ;
 int FUNC_2 (int *,int *) ;
 struct svc_export* FUNC_3 (struct auth_domain*,int,int *,struct cache_req*) ;
 struct svc_export* FUNC_4 (struct auth_domain*,int *,struct cache_req*) ;
 int VAR_0 ;

__attribute__((used)) static struct svc_export *FUNC_5(struct auth_domain *VAR_1, int VAR_2,
       u32 *VAR_3, struct cache_req *VAR_4)
{
 struct svc_export *VAR_5;
 struct svc_expkey *VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 if (FUNC_1(VAR_6))
  return FUNC_0(VAR_6);

 VAR_5 = FUNC_4(VAR_1, &VAR_6->ek_path, VAR_4);
 FUNC_2(&VAR_6->h, &VAR_0);

 if (FUNC_1(VAR_5))
  return FUNC_0(VAR_5);
 return VAR_5;
}
