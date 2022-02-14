
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int open_rej_reason; } ;
struct sas_task {TYPE_1__ task_status; } ;
struct isci_request {int flags; } ;
typedef enum service_response { ____Placeholder_service_response } service_response ;
typedef enum sas_open_rej_reason { ____Placeholder_sas_open_rej_reason } sas_open_rej_reason ;
typedef enum exec_status { ____Placeholder_exec_status } exec_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(
 struct isci_request *VAR_3,
 struct sas_task *VAR_4,
 enum service_response *VAR_5,
 enum exec_status *VAR_6,
 enum sas_open_rej_reason VAR_7)
{

 FUNC_0(VAR_0, &VAR_3->flags);
 *VAR_5 = VAR_2;
 *VAR_6 = VAR_1;
 VAR_4->task_status.open_rej_reason = VAR_7;
}
