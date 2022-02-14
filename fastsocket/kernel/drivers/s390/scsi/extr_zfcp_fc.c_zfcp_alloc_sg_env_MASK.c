
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_gpn_ft {int sg_resp; int sg_req; } ;
struct ct_iu_gpn_ft_req {int dummy; } ;
struct TYPE_2__ {int gpn_ft_cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct zfcp_gpn_ft*) ;
 struct ct_iu_gpn_ft_req* FUNC_1 (int ,int ) ;
 struct zfcp_gpn_ft* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct ct_iu_gpn_ft_req*,int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (struct zfcp_gpn_ft*,int) ;
 scalar_t__ FUNC_5 (int ,int) ;

__attribute__((used)) static struct zfcp_gpn_ft *FUNC_6(int VAR_2)
{
 struct zfcp_gpn_ft *VAR_3;
 struct ct_iu_gpn_ft_req *VAR_4;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_1.gpn_ft_cache, VAR_0);
 if (!VAR_4) {
  FUNC_0(VAR_3);
  VAR_3 = ((void*)0);
  goto out;
 }
 FUNC_3(&VAR_3->sg_req, VAR_4, sizeof(*VAR_4));

 if (FUNC_5(VAR_3->sg_resp, VAR_2)) {
  FUNC_4(VAR_3, VAR_2);
  VAR_3 = ((void*)0);
 }
out:
 return VAR_3;
}
