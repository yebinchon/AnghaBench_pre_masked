
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct register_write {int dummy; } ;
struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ priv; } ;
struct ath9k_htc_priv {TYPE_2__* wmi; } ;
typedef int rsp_status ;
struct TYPE_4__ {size_t multi_write_idx; int multi_write_mutex; TYPE_1__* multi_write; } ;
struct TYPE_3__ {void* val; void* reg; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (TYPE_2__*,int ,int *,int,int *,int,int) ;
 int FUNC_2 (struct ath_common*,int ,char*,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(void *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct ath_hw *VAR_6 = (struct ath_hw *) VAR_3;
 struct ath_common *VAR_7 = FUNC_0(VAR_6);
 struct ath9k_htc_priv *VAR_8 = (struct ath9k_htc_priv *) VAR_7->priv;
 u32 VAR_9;
 int VAR_10;

 FUNC_4(&VAR_8->wmi->multi_write_mutex);


 VAR_8->wmi->multi_write[VAR_8->wmi->multi_write_idx].reg =
  FUNC_3(VAR_5);
 VAR_8->wmi->multi_write[VAR_8->wmi->multi_write_idx].val =
  FUNC_3(VAR_4);

 VAR_8->wmi->multi_write_idx++;


 if (VAR_8->wmi->multi_write_idx == VAR_0) {
  VAR_10 = FUNC_1(VAR_8->wmi, VAR_2,
     (u8 *) &VAR_8->wmi->multi_write,
     sizeof(struct register_write) * VAR_8->wmi->multi_write_idx,
     (u8 *) &VAR_9, sizeof(VAR_9),
     100);
  if (FUNC_6(VAR_10)) {
   FUNC_2(VAR_7, VAR_1,
    "REGISTER WRITE FAILED, multi len: %d\n",
    VAR_8->wmi->multi_write_idx);
  }
  VAR_8->wmi->multi_write_idx = 0;
 }

 FUNC_5(&VAR_8->wmi->multi_write_mutex);
}
