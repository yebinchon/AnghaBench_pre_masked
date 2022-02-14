
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int status; int erp_done_wqh; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct zfcp_adapter *VAR_1)
{
 FUNC_1(VAR_1->erp_done_wqh,
     !(FUNC_0(&VAR_1->status) &
   VAR_0));
}
