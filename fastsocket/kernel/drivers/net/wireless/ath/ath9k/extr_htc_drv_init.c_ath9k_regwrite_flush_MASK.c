
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct register_write {int dummy; } ;
struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ priv; } ;
struct ath9k_htc_priv {TYPE_1__* wmi; } ;
typedef int rsp_status ;
struct TYPE_2__ {int multi_write_idx; int multi_write_mutex; int multi_write; int mwrite_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (TYPE_1__*,int ,int *,int,int *,int,int) ;
 int FUNC_2 (struct ath_common*,int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(void *VAR_2)
{
 struct ath_hw *VAR_3 = (struct ath_hw *) VAR_2;
 struct ath_common *VAR_4 = FUNC_0(VAR_3);
 struct ath9k_htc_priv *VAR_5 = (struct ath9k_htc_priv *) VAR_4->priv;
 u32 VAR_6;
 int VAR_7;

 FUNC_3(&VAR_5->wmi->mwrite_cnt);

 FUNC_4(&VAR_5->wmi->multi_write_mutex);

 if (VAR_5->wmi->multi_write_idx) {
  VAR_7 = FUNC_1(VAR_5->wmi, VAR_1,
     (u8 *) &VAR_5->wmi->multi_write,
     sizeof(struct register_write) * VAR_5->wmi->multi_write_idx,
     (u8 *) &VAR_6, sizeof(VAR_6),
     100);
  if (FUNC_6(VAR_7)) {
   FUNC_2(VAR_4, VAR_0,
    "REGISTER WRITE FAILED, multi len: %d\n",
    VAR_5->wmi->multi_write_idx);
  }
  VAR_5->wmi->multi_write_idx = 0;
 }

 FUNC_5(&VAR_5->wmi->multi_write_mutex);
}
