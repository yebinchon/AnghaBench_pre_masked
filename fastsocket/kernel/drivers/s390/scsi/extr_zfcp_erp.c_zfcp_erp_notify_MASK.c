
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_erp_action {unsigned long status; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int erp_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (struct zfcp_erp_action*) ;
 int FUNC_3 (struct zfcp_erp_action*) ;

void FUNC_4(struct zfcp_erp_action *VAR_1, unsigned long VAR_2)
{
 struct zfcp_adapter *VAR_3 = VAR_1->adapter;
 unsigned long VAR_4;

 FUNC_0(&VAR_3->erp_lock, VAR_4);
 if (FUNC_2(VAR_1) == VAR_0) {
  VAR_1->status |= VAR_2;
  FUNC_3(VAR_1);
 }
 FUNC_1(&VAR_3->erp_lock, VAR_4);
}
