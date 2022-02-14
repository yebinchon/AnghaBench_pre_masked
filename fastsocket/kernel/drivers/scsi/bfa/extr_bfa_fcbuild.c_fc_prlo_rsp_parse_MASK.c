
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct fchs_s {int dummy; } ;
struct fc_prlo_acc_s {scalar_t__ command; TYPE_1__* prlo_acc_params; int payload_len; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ opa_valid; scalar_t__ rpa_valid; scalar_t__ orig_process_assc; scalar_t__ resp_process_assc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;

u16
FUNC_1(struct fchs_s *VAR_4, int VAR_5)
{
 struct fc_prlo_acc_s *VAR_6 = (struct fc_prlo_acc_s *) (VAR_4 + 1);
 int VAR_7 = 0;
 int VAR_8 = 0;

 VAR_5 = VAR_5;

 if (VAR_6->command != VAR_0)
  return VAR_1;

 VAR_7 = ((FUNC_0(VAR_6->payload_len)) - 4) / 16;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (VAR_6->prlo_acc_params[VAR_8].type != VAR_3)
   return VAR_1;

  if (VAR_6->prlo_acc_params[VAR_8].opa_valid != 0)
   return VAR_1;

  if (VAR_6->prlo_acc_params[VAR_8].rpa_valid != 0)
   return VAR_1;

  if (VAR_6->prlo_acc_params[VAR_8].orig_process_assc != 0)
   return VAR_1;

  if (VAR_6->prlo_acc_params[VAR_8].resp_process_assc != 0)
   return VAR_1;
 }
 return VAR_2;

}
