
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct fc_tprlo_s {int page_len; int payload_len; TYPE_1__* tprlo_params; int command; } ;
typedef enum fc_tprlo_type { ____Placeholder_fc_tprlo_type } fc_tprlo_type ;
struct TYPE_2__ {int global_process_logout; int tpo_nport_valid; int tpo_nport_id; scalar_t__ resp_process_assc; scalar_t__ orig_process_assc; scalar_t__ rpa_valid; scalar_t__ opa_valid; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fchs_s*,int ,int ,int ) ;
 int FUNC_3 (struct fc_tprlo_s*,int ,int) ;

u16
FUNC_4(struct fchs_s *VAR_4, u32 VAR_5, u32 VAR_6, u16 VAR_7,
        int VAR_8, enum fc_tprlo_type VAR_9, u32 VAR_10)
{
 struct fc_tprlo_s *VAR_11 = (struct fc_tprlo_s *) (VAR_4 + 1);
 int VAR_12;

 FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_3(VAR_11, 0, (VAR_8 * 16) + 4);
 VAR_11->command = VAR_0;
 VAR_11->page_len = 0x10;
 VAR_11->payload_len = FUNC_1((VAR_8 * 16) + 4);

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  VAR_11->tprlo_params[VAR_12].type = VAR_3;
  VAR_11->tprlo_params[VAR_12].opa_valid = 0;
  VAR_11->tprlo_params[VAR_12].rpa_valid = 0;
  VAR_11->tprlo_params[VAR_12].orig_process_assc = 0;
  VAR_11->tprlo_params[VAR_12].resp_process_assc = 0;
  if (VAR_9 == VAR_1) {
   VAR_11->tprlo_params[VAR_12].global_process_logout = 1;
  } else if (VAR_9 == VAR_2) {
   VAR_11->tprlo_params[VAR_12].tpo_nport_valid = 1;
   VAR_11->tprlo_params[VAR_12].tpo_nport_id = (VAR_10);
  }
 }

 return FUNC_0(VAR_11->payload_len);
}
