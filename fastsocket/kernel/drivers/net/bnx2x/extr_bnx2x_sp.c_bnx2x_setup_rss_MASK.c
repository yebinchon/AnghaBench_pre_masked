
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eth_rss_update_ramrod_data {int capabilities; int * rss_key; int * indirection_table; int rss_engine_id; int rss_result_mask; int rss_mode; int echo; } ;
struct bnx2x_raw_obj {int cid; int state; int rdata_mapping; scalar_t__ rdata; } ;
struct bnx2x_rss_config_obj {int * ind_table; int engine_id; struct bnx2x_raw_obj raw; } ;
struct bnx2x_config_rss_params {int * rss_key; int rss_flags; int * ind_table; int rss_result_mask; struct bnx2x_rss_config_obj* rss_obj; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_config_rss_params*) ;
 int FUNC_4 (struct bnx2x*,int ,int,int ,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct eth_rss_update_ramrod_data*,int ,int) ;
 scalar_t__ FUNC_8 (struct bnx2x*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct bnx2x *VAR_24,
      struct bnx2x_config_rss_params *VAR_25)
{
 struct bnx2x_rss_config_obj *VAR_26 = VAR_25->rss_obj;
 struct bnx2x_raw_obj *VAR_27 = &VAR_26->raw;
 struct eth_rss_update_ramrod_data *VAR_28 =
  (struct eth_rss_update_ramrod_data *)(VAR_27->rdata);
 u8 VAR_29 = 0;
 int VAR_30;

 FUNC_7(VAR_28, 0, sizeof(*VAR_28));

 FUNC_0(VAR_0, "Configuring RSS\n");


 VAR_28->echo = FUNC_5((VAR_27->cid & VAR_10) |
     (VAR_27->state << VAR_11));


 if (FUNC_9(VAR_7, &VAR_25->rss_flags))
  VAR_29 = VAR_13;
 else if (FUNC_9(VAR_8, &VAR_25->rss_flags))
  VAR_29 = VAR_14;

 VAR_28->rss_mode = VAR_29;

 FUNC_0(VAR_0, "rss_mode=%d\n", VAR_29);


 if (FUNC_9(VAR_1, &VAR_25->rss_flags))
  VAR_28->capabilities |=
   VAR_15;

 if (FUNC_9(VAR_2, &VAR_25->rss_flags))
  VAR_28->capabilities |=
   VAR_16;

 if (FUNC_9(VAR_3, &VAR_25->rss_flags))
  VAR_28->capabilities |=
   VAR_17;

 if (FUNC_9(VAR_4, &VAR_25->rss_flags))
  VAR_28->capabilities |=
   VAR_18;

 if (FUNC_9(VAR_5, &VAR_25->rss_flags))
  VAR_28->capabilities |=
   VAR_19;

 if (FUNC_9(VAR_6, &VAR_25->rss_flags))
  VAR_28->capabilities |=
   VAR_20;


 VAR_28->rss_result_mask = VAR_25->rss_result_mask;


 VAR_28->rss_engine_id = VAR_26->engine_id;

 FUNC_0(VAR_0, "rss_engine_id=%d\n", VAR_28->rss_engine_id);


 FUNC_6(VAR_28->indirection_table, VAR_25->ind_table,
    VAR_23);


 FUNC_6(VAR_26->ind_table, VAR_25->ind_table, VAR_23);


 if (FUNC_8(VAR_24))
  FUNC_3(VAR_24, VAR_25);


 if (FUNC_9(VAR_9, &VAR_25->rss_flags)) {
  FUNC_6(&VAR_28->rss_key[0], &VAR_25->rss_key[0],
         sizeof(VAR_28->rss_key));
  VAR_28->capabilities |= VAR_21;
 }
 VAR_30 = FUNC_4(VAR_24, VAR_22, VAR_27->cid,
      FUNC_1(VAR_27->rdata_mapping),
      FUNC_2(VAR_27->rdata_mapping),
      VAR_12);

 if (VAR_30 < 0)
  return VAR_30;

 return 1;
}
