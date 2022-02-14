
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int fis_type; } ;
struct TYPE_4__ {TYPE_1__ stp; } ;
struct scu_task_context {int transfer_length_bytes; TYPE_2__ type; int task_type; int priority; scalar_t__ control_frame; } ;
struct isci_request {struct scu_task_context* tc; } ;
struct host_to_dev_fis {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isci_request*,struct scu_task_context*) ;

__attribute__((used)) static void FUNC_1(struct isci_request *VAR_3)
{
 struct scu_task_context *VAR_4 = VAR_3->tc;

 FUNC_0(VAR_3, VAR_4);

 VAR_4->control_frame = 0;
 VAR_4->priority = VAR_1;
 VAR_4->task_type = VAR_2;
 VAR_4->type.stp.fis_type = VAR_0;
 VAR_4->transfer_length_bytes = sizeof(struct host_to_dev_fis) - sizeof(u32);
}
