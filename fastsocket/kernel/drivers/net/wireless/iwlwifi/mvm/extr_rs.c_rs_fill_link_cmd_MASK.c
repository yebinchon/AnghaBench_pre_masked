
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_scale_tbl_info {int lq_type; int ant_type; } ;
struct iwl_mvm {int fw; } ;
struct iwl_lq_cmd {int mimo_delim; int agg_time_limit; scalar_t__ agg_disable_start_th; int agg_frame_cnt_limit; void** rs_table; int dual_stream_ant_msk; int single_stream_ant_msk; } ;
struct iwl_lq_sta {int band; struct iwl_lq_cmd lq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct iwl_lq_sta*,int *,int) ;
 int FUNC_8 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*,int,int) ;
 int FUNC_9 (int ,int ,struct iwl_scale_tbl_info*,int*) ;
 scalar_t__ FUNC_10 (int,int *,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static void FUNC_11(struct iwl_mvm *VAR_7,
        struct iwl_lq_sta *VAR_8, u32 VAR_9)
{
 struct iwl_scale_tbl_info VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13 = 0;
 u8 VAR_14 = 0;
 u8 VAR_15 = 1;
 u8 VAR_16 = 0;
 struct iwl_lq_cmd *VAR_17 = &VAR_8->lq;


 FUNC_7(VAR_8, &VAR_9, VAR_11);


 FUNC_9(VAR_9, VAR_8->band,
     &VAR_10, &VAR_12);


 if (FUNC_2(VAR_10.lq_type)) {
  VAR_14 = 1;
  VAR_13 = VAR_1;
 } else {
  VAR_13 = FUNC_5(VAR_0,
      VAR_2 - 1);
 }

 VAR_17->mimo_delim = FUNC_3(VAR_10.lq_type) ? 1 : 0;


 VAR_17->rs_table[VAR_11] = FUNC_1(VAR_9);

 if (FUNC_6(VAR_10.ant_type) == 1)
  VAR_17->single_stream_ant_msk = VAR_10.ant_type;
 else if (FUNC_6(VAR_10.ant_type) == 2)
  VAR_17->dual_stream_ant_msk = VAR_10.ant_type;


 VAR_11++;
 VAR_13--;
 if (VAR_7)
  VAR_16 = FUNC_4(VAR_7->fw);


 while (VAR_11 < VAR_5) {



  while (VAR_13 > 0 && (VAR_11 < VAR_5)) {
   if (FUNC_2(VAR_10.lq_type)) {
    if (VAR_14 < VAR_6)
     VAR_14++;
    else if (VAR_7 &&
      FUNC_10(VAR_16,
       &VAR_9, &VAR_10))
     VAR_14 = 1;
   }


   FUNC_7(VAR_8, &VAR_9, VAR_11);


   VAR_17->rs_table[VAR_11] =
     FUNC_1(VAR_9);
   VAR_13--;
   VAR_11++;
  }

  FUNC_9(VAR_9, VAR_8->band, &VAR_10,
      &VAR_12);





  if (FUNC_3(VAR_10.lq_type))
   VAR_17->mimo_delim = VAR_11;


  VAR_9 = FUNC_8(VAR_8, &VAR_10, VAR_12,
          VAR_15);


  if (FUNC_2(VAR_10.lq_type)) {
   if (VAR_14 < VAR_6)
    VAR_14++;
   else if (VAR_7 &&
     FUNC_10(VAR_16,
         &VAR_9, &VAR_10))
    VAR_14 = 1;

   VAR_13 = VAR_1;
  } else {
   VAR_13 = VAR_0;
  }



  VAR_15 = 0;


  FUNC_7(VAR_8, &VAR_9, VAR_11);


  VAR_17->rs_table[VAR_11] = FUNC_1(VAR_9);

  VAR_11++;
  VAR_13--;
 }

 VAR_17->agg_frame_cnt_limit = VAR_3;
 VAR_17->agg_disable_start_th = VAR_2;

 VAR_17->agg_time_limit =
  FUNC_0(VAR_4);
}
