
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_unit {int fcp_lun; int erp_counter; int status; struct zfcp_port* port; } ;
struct zfcp_port {int d_id; int wwpn; TYPE_1__* adapter; } ;
struct zfcp_dbf {int dummy; } ;
struct TYPE_2__ {struct zfcp_dbf* dbf; } ;


 int FUNC_0 (char*,void*,struct zfcp_dbf*,int *,int *,int ,int ,int ) ;

void FUNC_1(char *VAR_0, void *VAR_1, struct zfcp_unit *VAR_2)
{
 struct zfcp_port *VAR_3 = VAR_2->port;
 struct zfcp_dbf *VAR_4 = VAR_3->adapter->dbf;

 FUNC_0(VAR_0, VAR_1, VAR_4, &VAR_2->status,
      &VAR_2->erp_counter, VAR_3->wwpn, VAR_3->d_id,
      VAR_2->fcp_lun);
}
