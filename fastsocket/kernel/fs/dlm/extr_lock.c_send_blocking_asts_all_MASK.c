
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_convertqueue; int res_grantqueue; } ;
struct dlm_lkb {int dummy; } ;


 int FUNC_0 (struct dlm_rsb*,int *,struct dlm_lkb*) ;

__attribute__((used)) static void FUNC_1(struct dlm_rsb *VAR_0, struct dlm_lkb *VAR_1)
{
 FUNC_0(VAR_0, &VAR_0->res_grantqueue, VAR_1);
 FUNC_0(VAR_0, &VAR_0->res_convertqueue, VAR_1);
}
