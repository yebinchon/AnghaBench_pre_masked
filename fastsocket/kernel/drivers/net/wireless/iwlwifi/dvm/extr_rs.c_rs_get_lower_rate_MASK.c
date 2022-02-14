
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct iwl_scale_tbl_info {int lq_type; int max_search; scalar_t__ is_SGI; scalar_t__ is_ht40; int ant_type; } ;
struct iwl_priv {TYPE_1__* nvm_data; } ;
struct iwl_lq_sta {size_t is_green; scalar_t__ band; int supp_rates; struct iwl_priv* drv; } ;
typedef int s32 ;
struct TYPE_2__ {int valid_tx_ant; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_priv*,struct iwl_scale_tbl_info*,int,size_t) ;
 int FUNC_4 (struct iwl_priv*,size_t,int,int ) ;
 int FUNC_5 (struct iwl_lq_sta*,int *,int ) ;
 size_t* VAR_6 ;

__attribute__((used)) static u32 FUNC_6(struct iwl_lq_sta *VAR_7,
        struct iwl_scale_tbl_info *VAR_8,
        u8 VAR_9, u8 VAR_10)
{
 s32 VAR_11;
 u16 VAR_12;
 u16 VAR_13;
 u8 VAR_14 = 0;
 u8 VAR_15 = VAR_7->is_green;
 struct iwl_priv *VAR_16 = VAR_7->drv;




 if (!FUNC_1(VAR_8->lq_type) && (!VAR_10 || !VAR_9)) {
  VAR_14 = 1;
  VAR_9 = VAR_6[VAR_9];
  if (VAR_7->band == VAR_0)
   VAR_8->lq_type = VAR_4;
  else
   VAR_8->lq_type = VAR_5;

  if (FUNC_2(VAR_8->ant_type) > 1)
   VAR_8->ant_type =
       FUNC_0(VAR_16->nvm_data->valid_tx_ant);

  VAR_8->is_ht40 = 0;
  VAR_8->is_SGI = 0;
  VAR_8->max_search = VAR_2;
 }

 VAR_12 = FUNC_5(VAR_7, ((void*)0), VAR_8->lq_type);


 if (FUNC_1(VAR_8->lq_type)) {

  if (VAR_7->band == VAR_0)
   VAR_12 = (u16)(VAR_12 &
      (VAR_7->supp_rates << VAR_1));
  else
   VAR_12 = (u16)(VAR_12 & VAR_7->supp_rates);
 }


 if (VAR_14 && (VAR_12 & (1 << VAR_9))) {
  VAR_11 = VAR_9;
  goto out;
 }

 VAR_13 = FUNC_4(VAR_7->drv, VAR_9, VAR_12,
     VAR_8->lq_type);
 VAR_11 = VAR_13 & 0xff;

 if (VAR_11 == VAR_3)
  VAR_11 = VAR_9;

out:
 return FUNC_3(VAR_7->drv, VAR_8, VAR_11, VAR_15);
}
