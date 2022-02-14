
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct il_sensitivity_ranges {scalar_t__ auto_corr_min_ofdm_mrc_x1; scalar_t__ auto_corr_min_ofdm_x1; scalar_t__ auto_corr_min_ofdm_mrc; scalar_t__ auto_corr_min_ofdm; scalar_t__ auto_corr_max_ofdm_mrc_x1; scalar_t__ auto_corr_max_ofdm_x1; scalar_t__ auto_corr_max_ofdm_mrc; scalar_t__ auto_corr_max_ofdm; } ;
struct il_sensitivity_data {int auto_corr_ofdm; int auto_corr_ofdm_mrc; int auto_corr_ofdm_x1; int auto_corr_ofdm_mrc_x1; } ;
struct TYPE_2__ {struct il_sensitivity_ranges* sens; } ;
struct il_priv {struct il_sensitivity_data sensitivity_data; TYPE_1__ hw_params; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int,int) ;
 void* FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(struct il_priv *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7 = VAR_4 * 200 * 1024;
 u32 VAR_8 = VAR_1 * VAR_5;
 u32 VAR_9 = VAR_2 * VAR_5;
 struct il_sensitivity_data *VAR_10 = ((void*)0);
 const struct il_sensitivity_ranges *VAR_11 = VAR_3->hw_params.sens;

 VAR_10 = &(VAR_3->sensitivity_data);


 if (VAR_7 > VAR_8) {

  FUNC_0("norm FA %u > max FA %u)\n", VAR_7,
   VAR_8);

  VAR_6 = VAR_10->auto_corr_ofdm + VAR_0;
  VAR_10->auto_corr_ofdm =
      FUNC_2((u32) VAR_11->auto_corr_max_ofdm, VAR_6);

  VAR_6 = VAR_10->auto_corr_ofdm_mrc + VAR_0;
  VAR_10->auto_corr_ofdm_mrc =
      FUNC_2((u32) VAR_11->auto_corr_max_ofdm_mrc, VAR_6);

  VAR_6 = VAR_10->auto_corr_ofdm_x1 + VAR_0;
  VAR_10->auto_corr_ofdm_x1 =
      FUNC_2((u32) VAR_11->auto_corr_max_ofdm_x1, VAR_6);

  VAR_6 = VAR_10->auto_corr_ofdm_mrc_x1 + VAR_0;
  VAR_10->auto_corr_ofdm_mrc_x1 =
      FUNC_2((u32) VAR_11->auto_corr_max_ofdm_mrc_x1, VAR_6);
 }


 else if (VAR_7 < VAR_9) {

  FUNC_0("norm FA %u < min FA %u\n", VAR_7,
   VAR_9);

  VAR_6 = VAR_10->auto_corr_ofdm - VAR_0;
  VAR_10->auto_corr_ofdm =
      FUNC_1((u32) VAR_11->auto_corr_min_ofdm, VAR_6);

  VAR_6 = VAR_10->auto_corr_ofdm_mrc - VAR_0;
  VAR_10->auto_corr_ofdm_mrc =
      FUNC_1((u32) VAR_11->auto_corr_min_ofdm_mrc, VAR_6);

  VAR_6 = VAR_10->auto_corr_ofdm_x1 - VAR_0;
  VAR_10->auto_corr_ofdm_x1 =
      FUNC_1((u32) VAR_11->auto_corr_min_ofdm_x1, VAR_6);

  VAR_6 = VAR_10->auto_corr_ofdm_mrc_x1 - VAR_0;
  VAR_10->auto_corr_ofdm_mrc_x1 =
      FUNC_1((u32) VAR_11->auto_corr_min_ofdm_mrc_x1, VAR_6);
 } else {
  FUNC_0("min FA %u < norm FA %u < max FA %u OK\n",
   VAR_9, VAR_7, VAR_8);
 }
 return 0;
}
