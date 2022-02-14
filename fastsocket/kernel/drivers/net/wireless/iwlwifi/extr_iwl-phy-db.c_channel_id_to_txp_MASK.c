
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct iwl_phy_db_chg_txp {int max_channel_idx; } ;
struct iwl_phy_db {TYPE_1__* calib_ch_group_txp; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u16 FUNC_2(struct iwl_phy_db *VAR_1, u16 VAR_2)
{
 struct iwl_phy_db_chg_txp *VAR_3;
 int VAR_4;
 u8 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 == 0xff)
  return 0xff;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = (void *)VAR_1->calib_ch_group_txp[VAR_4].data;
  if (!VAR_3)
   return 0xff;




  if (FUNC_1(VAR_3->max_channel_idx) >= VAR_5)
   return VAR_4;
 }
 return 0xff;
}
