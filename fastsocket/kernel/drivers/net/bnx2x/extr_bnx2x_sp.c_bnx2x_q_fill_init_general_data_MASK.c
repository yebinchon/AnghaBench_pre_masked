
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client_init_general_data {int statistics_en_flg; int cos; void* activate_flg; int traffic_type; int func_id; int mtu; int sp_client_id; void* is_fcoe_flg; int statistics_counter_id; void* statistics_zero_flg; int client_id; } ;
struct bnx2x_queue_sp_obj {int func_id; int cl_id; } ;
struct bnx2x_general_setup_params {int cos; int mtu; int spcl_id; int stat_id; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,void*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,unsigned long*) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_8,
    struct bnx2x_queue_sp_obj *VAR_9,
    struct bnx2x_general_setup_params *VAR_10,
    struct client_init_general_data *VAR_11,
    unsigned long *VAR_12)
{
 VAR_11->client_id = VAR_9->cl_id;

 if (FUNC_2(VAR_3, VAR_12)) {
  VAR_11->statistics_counter_id =
     VAR_10->stat_id;
  VAR_11->statistics_en_flg = 1;
  VAR_11->statistics_zero_flg =
   FUNC_2(VAR_4, VAR_12);
 } else
  VAR_11->statistics_counter_id =
     VAR_5;

 VAR_11->is_fcoe_flg = FUNC_2(VAR_2, VAR_12);
 VAR_11->activate_flg = FUNC_2(VAR_1, VAR_12);
 VAR_11->sp_client_id = VAR_10->spcl_id;
 VAR_11->mtu = FUNC_1(VAR_10->mtu);
 VAR_11->func_id = VAR_9->func_id;

 VAR_11->cos = VAR_10->cos;

 VAR_11->traffic_type =
  FUNC_2(VAR_2, VAR_12) ?
  VAR_6 : VAR_7;

 FUNC_0(VAR_0, "flags: active %d, cos %d, stats en %d\n",
    VAR_11->activate_flg, VAR_11->cos, VAR_11->statistics_en_flg);
}
