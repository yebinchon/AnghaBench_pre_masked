
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_port {int d_id; int wwpn; int erp_counter; int status; TYPE_1__* adapter; } ;
struct zfcp_dbf {int dummy; } ;
struct TYPE_2__ {struct zfcp_dbf* dbf; } ;


 int FUNC_0 (char*,void*,struct zfcp_dbf*,int *,int *,int ,int ,int ) ;

void FUNC_1(char *VAR_0, void *VAR_1, struct zfcp_port *VAR_2)
{
 struct zfcp_dbf *VAR_3 = VAR_2->adapter->dbf;

 FUNC_0(VAR_0, VAR_1, VAR_3, &VAR_2->status,
      &VAR_2->erp_counter, VAR_2->wwpn, VAR_2->d_id,
      0);
}
