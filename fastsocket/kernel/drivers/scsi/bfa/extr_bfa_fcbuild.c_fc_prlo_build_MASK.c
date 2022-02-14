
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct fc_prlo_s {int page_len; int payload_len; TYPE_1__* prlo_params; int command; } ;
struct TYPE_2__ {scalar_t__ resp_process_assc; scalar_t__ orig_process_assc; scalar_t__ rpa_valid; scalar_t__ opa_valid; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fchs_s*,int ,int ,int ) ;
 int FUNC_3 (struct fc_prlo_s*,int ,int) ;

u16
FUNC_4(struct fchs_s *VAR_2, u32 VAR_3, u32 VAR_4, u16 VAR_5,
       int VAR_6)
{
 struct fc_prlo_s *VAR_7 = (struct fc_prlo_s *) (VAR_2 + 1);
 int VAR_8;

 FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_3(VAR_7, 0, (VAR_6 * 16) + 4);
 VAR_7->command = VAR_0;
 VAR_7->page_len = 0x10;
 VAR_7->payload_len = FUNC_1((VAR_6 * 16) + 4);

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_7->prlo_params[VAR_8].type = VAR_1;
  VAR_7->prlo_params[VAR_8].opa_valid = 0;
  VAR_7->prlo_params[VAR_8].rpa_valid = 0;
  VAR_7->prlo_params[VAR_8].orig_process_assc = 0;
  VAR_7->prlo_params[VAR_8].resp_process_assc = 0;
 }

 return FUNC_0(VAR_7->payload_len);
}
