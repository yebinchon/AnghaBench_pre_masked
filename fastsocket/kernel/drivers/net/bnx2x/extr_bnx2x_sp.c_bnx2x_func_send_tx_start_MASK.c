
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flow_control_configuration {int * traffic_type_to_priority_cos; int dont_add_pri_0_en; int dcb_version; int dcb_enabled; } ;
struct bnx2x_func_tx_start_params {int * traffic_type_to_priority_cos; int dont_add_pri_0_en; int dcb_version; int dcb_enabled; } ;
struct TYPE_2__ {struct bnx2x_func_tx_start_params tx_start; } ;
struct bnx2x_func_state_params {TYPE_1__ params; struct bnx2x_func_sp_obj* f_obj; } ;
struct bnx2x_func_sp_obj {int rdata_mapping; scalar_t__ rdata; } ;
struct bnx2x {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnx2x*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct flow_control_configuration*,int ,int) ;

__attribute__((used)) static inline int FUNC_5(struct bnx2x *VAR_2,
           struct bnx2x_func_state_params *VAR_3)
{
 struct bnx2x_func_sp_obj *VAR_4 = VAR_3->f_obj;
 struct flow_control_configuration *VAR_5 =
  (struct flow_control_configuration *)VAR_4->rdata;
 dma_addr_t VAR_6 = VAR_4->rdata_mapping;
 struct bnx2x_func_tx_start_params *VAR_7 =
  &VAR_3->params.tx_start;
 int VAR_8;

 FUNC_4(VAR_5, 0, sizeof(*VAR_5));

 VAR_5->dcb_enabled = VAR_7->dcb_enabled;
 VAR_5->dcb_version = VAR_7->dcb_version;
 VAR_5->dont_add_pri_0_en = VAR_7->dont_add_pri_0_en;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5->traffic_type_to_priority_cos); VAR_8++)
  VAR_5->traffic_type_to_priority_cos[VAR_8] =
   VAR_7->traffic_type_to_priority_cos[VAR_8];

 return FUNC_3(VAR_2, VAR_1, 0,
        FUNC_1(VAR_6),
        FUNC_2(VAR_6), VAR_0);
}
