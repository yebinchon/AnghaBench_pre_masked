
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct fchs_s {int dummy; } ;
struct fc_tprlo_acc_s {scalar_t__ command; TYPE_1__* tprlo_acc_params; int payload_len; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ opa_valid; scalar_t__ rpa_valid; scalar_t__ orig_process_assc; scalar_t__ resp_process_assc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;

u16
FUNC_1(struct fchs_s *VAR_9, int VAR_10)
{
 struct fc_tprlo_acc_s *VAR_11 = (struct fc_tprlo_acc_s *) (VAR_9 + 1);
 int VAR_12 = 0;
 int VAR_13 = 0;

 VAR_10 = VAR_10;

 if (VAR_11->command != VAR_0)
  return VAR_1;

 VAR_12 = (FUNC_0(VAR_11->payload_len) - 4) / 16;

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  if (VAR_11->tprlo_acc_params[VAR_13].type != VAR_8)
   return VAR_2;
  if (VAR_11->tprlo_acc_params[VAR_13].opa_valid != 0)
   return VAR_4;
  if (VAR_11->tprlo_acc_params[VAR_13].rpa_valid != 0)
   return VAR_6;
  if (VAR_11->tprlo_acc_params[VAR_13].orig_process_assc != 0)
   return VAR_5;
  if (VAR_11->tprlo_acc_params[VAR_13].resp_process_assc != 0)
   return VAR_7;
 }
 return VAR_3;
}
