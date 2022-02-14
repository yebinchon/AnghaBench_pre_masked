
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_dbf {struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int erp_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (char*,struct zfcp_dbf*) ;

void FUNC_3(char *VAR_0, struct zfcp_dbf *VAR_1)
{
 struct zfcp_adapter *VAR_2 = VAR_1->adapter;
 unsigned long VAR_3;

 FUNC_0(&VAR_2->erp_lock, VAR_3);
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(&VAR_2->erp_lock, VAR_3);
}
