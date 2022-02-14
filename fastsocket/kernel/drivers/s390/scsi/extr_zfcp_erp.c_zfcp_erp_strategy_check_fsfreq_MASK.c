
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_erp_action {int status; TYPE_1__* fsf_req; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int req_list_lock; } ;
struct TYPE_2__ {int status; struct zfcp_erp_action* erp_action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct zfcp_erp_action*) ;
 scalar_t__ FUNC_3 (struct zfcp_adapter*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct zfcp_erp_action *VAR_3)
{
 struct zfcp_adapter *VAR_4 = VAR_3->adapter;

 if (!VAR_3->fsf_req)
  return;

 FUNC_0(&VAR_4->req_list_lock);
 if (FUNC_3(VAR_4, VAR_3->fsf_req) &&
     VAR_3->fsf_req->erp_action == VAR_3) {
  if (VAR_3->status & (VAR_0 |
       VAR_1)) {
   VAR_3->fsf_req->status |= VAR_2;
   FUNC_2("erscf_1", VAR_3);
   VAR_3->fsf_req->erp_action = ((void*)0);
  }
  if (VAR_3->status & VAR_1)
   FUNC_2("erscf_2", VAR_3);
  if (VAR_3->fsf_req->status & VAR_2)
   VAR_3->fsf_req = ((void*)0);
 } else
  VAR_3->fsf_req = ((void*)0);
 FUNC_1(&VAR_4->req_list_lock);
}
