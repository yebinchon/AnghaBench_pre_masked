
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_erp_action {int status; int action; struct zfcp_adapter* adapter; TYPE_2__* port; TYPE_1__* unit; int list; } ;
struct zfcp_adapter {int status; int erp_low_mem_count; int erp_total_count; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_3__ {int status; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct zfcp_erp_action*) ;

__attribute__((used)) static void FUNC_3(struct zfcp_erp_action *VAR_2)
{
 struct zfcp_adapter *VAR_3 = VAR_2->adapter;

 VAR_3->erp_total_count--;
 if (VAR_2->status & VAR_1) {
  VAR_3->erp_low_mem_count--;
  VAR_2->status &= ~VAR_1;
 }

 FUNC_1(&VAR_2->list);
 FUNC_2("eractd1", VAR_2);

 switch (VAR_2->action) {
 case 128:
  FUNC_0(VAR_0,
      &VAR_2->unit->status);
  break;

 case 129:
 case 130:
  FUNC_0(VAR_0,
      &VAR_2->port->status);
  break;

 case 131:
  FUNC_0(VAR_0,
      &VAR_2->adapter->status);
  break;
 }
}
