
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_rss_config_obj {int ind_table; scalar_t__ udp_rss_v6; scalar_t__ udp_rss_v4; } ;
struct bnx2x_config_rss_params {int rss_flags; int rss_key; int ind_table; int rss_result_mask; int ramrod_flags; struct bnx2x_rss_config_obj* rss_obj; int * member_0; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_config_rss_params*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(struct bnx2x *VAR_10, struct bnx2x_rss_config_obj *VAR_11,
   bool VAR_12)
{
 struct bnx2x_config_rss_params VAR_13 = {((void*)0)};
 VAR_13.rss_obj = VAR_11;

 FUNC_0(VAR_9, &VAR_13.ramrod_flags);

 FUNC_0(VAR_6, &VAR_13.rss_flags);


 FUNC_0(VAR_0, &VAR_13.rss_flags);
 FUNC_0(VAR_1, &VAR_13.rss_flags);
 FUNC_0(VAR_3, &VAR_13.rss_flags);
 FUNC_0(VAR_4, &VAR_13.rss_flags);
 if (VAR_11->udp_rss_v4)
  FUNC_0(VAR_2, &VAR_13.rss_flags);
 if (VAR_11->udp_rss_v6)
  FUNC_0(VAR_5, &VAR_13.rss_flags);


 VAR_13.rss_result_mask = VAR_8;

 FUNC_2(VAR_13.ind_table, VAR_11->ind_table, sizeof(VAR_13.ind_table));

 if (VAR_12) {

  FUNC_3(VAR_13.rss_key, sizeof(VAR_13.rss_key));
  FUNC_0(VAR_7, &VAR_13.rss_flags);
 }

 return FUNC_1(VAR_10, &VAR_13);
}
