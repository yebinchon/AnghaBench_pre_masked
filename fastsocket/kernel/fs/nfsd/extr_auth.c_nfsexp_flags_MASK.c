
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {scalar_t__ rq_flavor; } ;
struct svc_export {int ex_nflavors; int ex_flags; struct exp_flavor_info* ex_flavors; } ;
struct exp_flavor_info {scalar_t__ pseudoflavor; int flags; } ;



int FUNC_0(struct svc_rqst *VAR_0, struct svc_export *VAR_1)
{
 struct exp_flavor_info *VAR_2;
 struct exp_flavor_info *VAR_3 = VAR_1->ex_flavors + VAR_1->ex_nflavors;

 for (VAR_2 = VAR_1->ex_flavors; VAR_2 < VAR_3; VAR_2++) {
  if (VAR_2->pseudoflavor == VAR_0->rq_flavor)
   return VAR_2->flags;
 }
 return VAR_1->ex_flags;

}
