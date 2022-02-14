
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct function_start_data {int gre_tunnel_rss; int gre_tunnel_mode; int network_cos_mode; int path_id; int sd_vlan_tag; scalar_t__ function_mode; } ;
struct bnx2x_func_start_params {int gre_tunnel_rss; int gre_tunnel_mode; int network_cos_mode; int sd_vlan_tag; scalar_t__ mf_mode; } ;
struct TYPE_2__ {struct bnx2x_func_start_params start; } ;
struct bnx2x_func_state_params {TYPE_1__ params; struct bnx2x_func_sp_obj* f_obj; } ;
struct bnx2x_func_sp_obj {int rdata_mapping; scalar_t__ rdata; } ;
struct bnx2x {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnx2x*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct function_start_data*,int ,int) ;

__attribute__((used)) static inline int FUNC_6(struct bnx2x *VAR_2,
     struct bnx2x_func_state_params *VAR_3)
{
 struct bnx2x_func_sp_obj *VAR_4 = VAR_3->f_obj;
 struct function_start_data *VAR_5 =
  (struct function_start_data *)VAR_4->rdata;
 dma_addr_t VAR_6 = VAR_4->rdata_mapping;
 struct bnx2x_func_start_params *VAR_7 = &VAR_3->params.start;

 FUNC_5(VAR_5, 0, sizeof(*VAR_5));


 VAR_5->function_mode = (u8)VAR_7->mf_mode;
 VAR_5->sd_vlan_tag = FUNC_4(VAR_7->sd_vlan_tag);
 VAR_5->path_id = FUNC_0(VAR_2);
 VAR_5->network_cos_mode = VAR_7->network_cos_mode;
 VAR_5->gre_tunnel_mode = VAR_7->gre_tunnel_mode;
 VAR_5->gre_tunnel_rss = VAR_7->gre_tunnel_rss;
 return FUNC_3(VAR_2, VAR_1, 0,
        FUNC_1(VAR_6),
        FUNC_2(VAR_6), VAR_0);
}
