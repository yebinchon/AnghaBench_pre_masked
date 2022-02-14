
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_qdio {int req_q_wq; } ;
struct zfcp_erp_action {TYPE_1__* adapter; } ;
struct TYPE_2__ {int status; struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct zfcp_qdio*) ;

__attribute__((used)) static int FUNC_3(struct zfcp_erp_action *VAR_3)
{
 struct zfcp_qdio *VAR_4 = VAR_3->adapter->qdio;

 if (FUNC_2(VAR_4))
  return VAR_0;
 FUNC_1(&VAR_4->req_q_wq);
 FUNC_0(VAR_2, &VAR_3->adapter->status);
 return VAR_1;
}
