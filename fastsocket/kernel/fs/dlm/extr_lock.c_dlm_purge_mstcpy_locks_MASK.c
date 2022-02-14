
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_waitqueue; int res_convertqueue; int res_grantqueue; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_rsb*,int *,int *) ;

void FUNC_1(struct dlm_rsb *VAR_1)
{
 FUNC_0(VAR_1, &VAR_1->res_grantqueue, &VAR_0);
 FUNC_0(VAR_1, &VAR_1->res_convertqueue, &VAR_0);
 FUNC_0(VAR_1, &VAR_1->res_waitqueue, &VAR_0);
}
