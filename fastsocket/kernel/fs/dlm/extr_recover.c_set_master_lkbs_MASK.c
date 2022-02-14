
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_nodeid; int res_waitqueue; int res_convertqueue; int res_grantqueue; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct dlm_rsb *VAR_0)
{
 FUNC_0(&VAR_0->res_grantqueue, VAR_0->res_nodeid);
 FUNC_0(&VAR_0->res_convertqueue, VAR_0->res_nodeid);
 FUNC_0(&VAR_0->res_waitqueue, VAR_0->res_nodeid);
}
