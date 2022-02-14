
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int err_code; } ;
struct TYPE_6__ {int error_event_table_ptr; } ;
struct TYPE_5__ {int error_event_table_ptr; } ;
struct il_priv {scalar_t__ ucode_type; TYPE_4__ isr_stats; int status; TYPE_3__* ops; TYPE_2__ card_alive; TYPE_1__ card_alive_init; } ;
struct TYPE_7__ {int (* is_valid_rtc_data_addr ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct il_priv*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

void
FUNC_5(struct il_priv *VAR_3)
{
 u32 VAR_4, VAR_5;
 u32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15, VAR_16;

 if (VAR_3->ucode_type == VAR_2)
  VAR_9 = FUNC_3(VAR_3->card_alive_init.error_event_table_ptr);
 else
  VAR_9 = FUNC_3(VAR_3->card_alive.error_event_table_ptr);

 if (!VAR_3->ops->is_valid_rtc_data_addr(VAR_9)) {
  FUNC_0("Not valid error log pointer 0x%08X for %s uCode\n",
         VAR_9, (VAR_3->ucode_type == VAR_2) ? "Init" : "RT");
  return;
 }

 VAR_8 = FUNC_2(VAR_3, VAR_9);

 if (VAR_1 <= VAR_8 * VAR_0) {
  FUNC_0("Start IWL Error Log Dump:\n");
  FUNC_0("Status: 0x%08lX, count: %d\n", VAR_3->status, VAR_8);
 }

 VAR_6 = FUNC_2(VAR_3, VAR_9 + 1 * sizeof(u32));
 VAR_3->isr_stats.err_code = VAR_6;
 VAR_15 = FUNC_2(VAR_3, VAR_9 + 2 * sizeof(u32));
 VAR_11 = FUNC_2(VAR_3, VAR_9 + 3 * sizeof(u32));
 VAR_12 = FUNC_2(VAR_3, VAR_9 + 4 * sizeof(u32));
 VAR_13 = FUNC_2(VAR_3, VAR_9 + 5 * sizeof(u32));
 VAR_14 = FUNC_2(VAR_3, VAR_9 + 6 * sizeof(u32));
 VAR_10 = FUNC_2(VAR_3, VAR_9 + 7 * sizeof(u32));
 VAR_4 = FUNC_2(VAR_3, VAR_9 + 8 * sizeof(u32));
 VAR_5 = FUNC_2(VAR_3, VAR_9 + 9 * sizeof(u32));
 VAR_7 = FUNC_2(VAR_3, VAR_9 + 11 * sizeof(u32));
 VAR_16 = FUNC_2(VAR_3, VAR_9 + 22 * sizeof(u32));

 FUNC_0("Desc                                  Time       "
        "data1      data2      line\n");
 FUNC_0("%-28s (0x%04X) %010u 0x%08X 0x%08X %u\n",
        FUNC_1(VAR_6), VAR_6, VAR_7, VAR_10, VAR_4, VAR_5);
 FUNC_0("pc      blink1  blink2  ilink1  ilink2  hcmd\n");
 FUNC_0("0x%05X 0x%05X 0x%05X 0x%05X 0x%05X 0x%05X\n", VAR_15, VAR_11,
        VAR_12, VAR_13, VAR_14, VAR_16);
}
