
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_dbf {struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int erp_counter; int status; } ;


 int FUNC_0 (char*,void*,struct zfcp_dbf*,int *,int *,int ,int ,int ) ;

void FUNC_1(char *VAR_0, void *VAR_1, struct zfcp_dbf *VAR_2)
{
 struct zfcp_adapter *VAR_3 = VAR_2->adapter;

 FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3->status,
      &VAR_3->erp_counter, 0, 0, 0);
}
