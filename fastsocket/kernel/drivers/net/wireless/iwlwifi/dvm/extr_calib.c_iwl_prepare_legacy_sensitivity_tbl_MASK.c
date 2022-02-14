
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_sensitivity_data {scalar_t__ nrg_th_cck; scalar_t__ auto_corr_cck_mrc; scalar_t__ auto_corr_cck; scalar_t__ nrg_th_ofdm; scalar_t__ auto_corr_ofdm_mrc_x1; scalar_t__ auto_corr_ofdm_x1; scalar_t__ auto_corr_ofdm_mrc; scalar_t__ auto_corr_ofdm; int nrg_th_cca; int barker_corr_th_min_mrc; int barker_corr_th_min; } ;
struct iwl_priv {int dummy; } ;
typedef int __le16 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (struct iwl_priv*,char*,scalar_t__,scalar_t__,scalar_t__,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct iwl_priv *VAR_11,
    struct iwl_sensitivity_data *VAR_12,
    __le16 *VAR_13)
{
 VAR_13[VAR_2] =
    FUNC_1((u16)VAR_12->auto_corr_ofdm);
 VAR_13[VAR_3] =
    FUNC_1((u16)VAR_12->auto_corr_ofdm_mrc);
 VAR_13[VAR_0] =
    FUNC_1((u16)VAR_12->auto_corr_ofdm_x1);
 VAR_13[VAR_1] =
    FUNC_1((u16)VAR_12->auto_corr_ofdm_mrc_x1);

 VAR_13[VAR_4] =
    FUNC_1((u16)VAR_12->auto_corr_cck);
 VAR_13[VAR_5] =
    FUNC_1((u16)VAR_12->auto_corr_cck_mrc);

 VAR_13[VAR_8] =
    FUNC_1((u16)VAR_12->nrg_th_cck);
 VAR_13[VAR_9] =
    FUNC_1((u16)VAR_12->nrg_th_ofdm);

 VAR_13[VAR_6] =
    FUNC_1(VAR_12->barker_corr_th_min);
 VAR_13[VAR_7] =
    FUNC_1(VAR_12->barker_corr_th_min_mrc);
 VAR_13[VAR_10] =
    FUNC_1(VAR_12->nrg_th_cca);

 FUNC_0(VAR_11, "ofdm: ac %u mrc %u x1 %u mrc_x1 %u thresh %u\n",
   VAR_12->auto_corr_ofdm, VAR_12->auto_corr_ofdm_mrc,
   VAR_12->auto_corr_ofdm_x1, VAR_12->auto_corr_ofdm_mrc_x1,
   VAR_12->nrg_th_ofdm);

 FUNC_0(VAR_11, "cck: ac %u mrc %u thresh %u\n",
   VAR_12->auto_corr_cck, VAR_12->auto_corr_cck_mrc,
   VAR_12->nrg_th_cck);
}
