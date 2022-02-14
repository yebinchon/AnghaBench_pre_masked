
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ath9k_hw_mci {int query_bt; int unhalt_bt_gpm; int need_flush_btinfo; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int ,int *,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct ath_hw *VAR_6, bool VAR_7,
          bool VAR_8)
{
 struct ath9k_hw_mci *VAR_9 = &VAR_6->btcoex_hw.mci;
 u32 VAR_10[4] = {0, 0, 0, 0};

 FUNC_0(VAR_10, VAR_1,
    VAR_5);

 if (VAR_7) {
  VAR_9->query_bt = 1;

  VAR_9->unhalt_bt_gpm = 1;
  VAR_9->need_flush_btinfo = 1;
  *(((u8 *)VAR_10) + VAR_4) =
   VAR_2;
 } else
  *(((u8 *)VAR_10) + VAR_4) =
   VAR_3;

 FUNC_1(VAR_6, VAR_0, 0, VAR_10, 16, VAR_8, 1);
}
