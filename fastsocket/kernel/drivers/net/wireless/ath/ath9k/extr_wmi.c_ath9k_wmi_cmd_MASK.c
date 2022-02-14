
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct wmi_cmd_hdr {int dummy; } ;
struct wmi {int last_cmd_id; int op_mutex; int cmd_wait; int wmi_lock; scalar_t__ cmd_rsp_len; int * cmd_rsp_buf; int stopped; TYPE_1__* drv_priv; } ;
struct sk_buff {int dummy; } ;
struct htc_frame_hdr {int dummy; } ;
struct ath_hw {int ah_flags; } ;
struct ath_common {int dummy; } ;
typedef enum wmi_cmd_id { ____Placeholder_wmi_cmd_id } wmi_cmd_id ;
struct TYPE_2__ {struct ath_hw* ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct wmi*,struct sk_buff*,int,scalar_t__) ;
 int FUNC_3 (struct ath_common*,int ,char*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *,scalar_t__) ;
 int FUNC_14 (int) ;

int FUNC_15(struct wmi *VAR_6, enum wmi_cmd_id VAR_7,
    u8 *VAR_8, u32 VAR_9,
    u8 *VAR_10, u32 VAR_11,
    u32 VAR_12)
{
 struct ath_hw *VAR_13 = VAR_6->drv_priv->ah;
 struct ath_common *VAR_14 = FUNC_1(VAR_13);
 u16 VAR_15 = sizeof(struct htc_frame_hdr) +
         sizeof(struct wmi_cmd_hdr);
 struct sk_buff *VAR_16;
 u8 *VAR_17;
 int VAR_18, VAR_19 = 0;
 unsigned long VAR_20;

 if (VAR_13->ah_flags & VAR_0)
  return 0;

 VAR_16 = FUNC_0(VAR_15 + VAR_9, VAR_4);
 if (!VAR_16)
  return -VAR_1;

 FUNC_9(VAR_16, VAR_15);

 if (VAR_9 != 0 && VAR_8 != ((void*)0)) {
  VAR_17 = (u8 *) FUNC_8(VAR_16, VAR_9);
  FUNC_5(VAR_17, VAR_8, VAR_9);
 }

 FUNC_6(&VAR_6->op_mutex);


 if (FUNC_12(VAR_6->stopped)) {
  VAR_19 = -VAR_2;
  goto out;
 }


 VAR_6->cmd_rsp_buf = VAR_10;
 VAR_6->cmd_rsp_len = VAR_11;

 FUNC_10(&VAR_6->wmi_lock, VAR_20);
 VAR_6->last_cmd_id = VAR_7;
 FUNC_11(&VAR_6->wmi_lock, VAR_20);

 VAR_19 = FUNC_2(VAR_6, VAR_16, VAR_7, VAR_9);
 if (VAR_19)
  goto out;

 VAR_18 = FUNC_13(&VAR_6->cmd_wait, VAR_12);
 if (!VAR_18) {
  FUNC_3(VAR_14, VAR_5, "Timeout waiting for WMI command: %s\n",
   FUNC_14(VAR_7));
  FUNC_7(&VAR_6->op_mutex);
  return -VAR_3;
 }

 FUNC_7(&VAR_6->op_mutex);

 return 0;

out:
 FUNC_3(VAR_14, VAR_5, "WMI failure for: %s\n", FUNC_14(VAR_7));
 FUNC_7(&VAR_6->op_mutex);
 FUNC_4(VAR_16);

 return VAR_19;
}
