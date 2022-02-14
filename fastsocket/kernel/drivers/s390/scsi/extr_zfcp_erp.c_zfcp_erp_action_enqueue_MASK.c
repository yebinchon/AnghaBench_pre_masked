
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_unit {int dummy; } ;
struct zfcp_port {int dummy; } ;
struct zfcp_erp_action {int list; } ;
struct zfcp_adapter {int dbf; int erp_ready_wq; int erp_ready_head; int erp_total_count; int status; int erp_thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,void*,int,int,struct zfcp_erp_action*,struct zfcp_adapter*,struct zfcp_port*,struct zfcp_unit*) ;
 int FUNC_5 (int,struct zfcp_adapter*,struct zfcp_port*,struct zfcp_unit*) ;
 struct zfcp_erp_action* FUNC_6 (int,struct zfcp_adapter*,struct zfcp_port*,struct zfcp_unit*) ;

__attribute__((used)) static int FUNC_7(int VAR_2, struct zfcp_adapter *VAR_3,
       struct zfcp_port *VAR_4,
       struct zfcp_unit *VAR_5, char *VAR_6, void *VAR_7)
{
 int VAR_8 = 1, VAR_9;
 struct zfcp_erp_action *VAR_10 = ((void*)0);

 if (!VAR_3->erp_thread)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_9)
  goto out;

 FUNC_0(VAR_1, &VAR_3->status);
 VAR_10 = FUNC_6(VAR_9, VAR_3, VAR_4, VAR_5);
 if (!VAR_10)
  goto out;
 ++VAR_3->erp_total_count;
 FUNC_1(&VAR_10->list, &VAR_3->erp_ready_head);
 FUNC_2(&VAR_3->erp_ready_wq);
 FUNC_3("eracte1", VAR_3->dbf);
 VAR_8 = 0;
 out:
 FUNC_4(VAR_6, VAR_7, VAR_2, VAR_9, VAR_10, VAR_3, VAR_4, VAR_5);
 return VAR_8;
}
