
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_transport_template {int create_work_queue; int eh_strategy_handler; int eh_timed_out; } ;
struct sas_internal {struct sas_domain_function_template* dft; } ;
struct sas_domain_function_template {int dummy; } ;


 struct scsi_transport_template* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sas_internal* FUNC_1 (struct scsi_transport_template*) ;

struct scsi_transport_template *
FUNC_2(struct sas_domain_function_template *VAR_3)
{
 struct scsi_transport_template *VAR_4 = FUNC_0(&VAR_2);
 struct sas_internal *VAR_5;

 if (!VAR_4)
  return VAR_4;

 VAR_5 = FUNC_1(VAR_4);
 VAR_5->dft = VAR_3;
 VAR_4->create_work_queue = 1;
 VAR_4->eh_timed_out = VAR_1;
 VAR_4->eh_strategy_handler = VAR_0;

 return VAR_4;
}
