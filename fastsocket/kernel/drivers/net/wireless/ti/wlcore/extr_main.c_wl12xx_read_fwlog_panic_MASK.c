
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct wl1271_rx_descriptor {int dummy; } ;
struct TYPE_4__ {scalar_t__ mem_blocks; scalar_t__ output; scalar_t__ mode; } ;
struct TYPE_5__ {TYPE_1__ fwlog; } ;
struct wl1271 {int quirks; int fwlog_waitq; TYPE_2__ conf; TYPE_3__* fw_status_2; int fw_status_1; int watchdog_recovery; } ;
typedef int addr ;
typedef int __le32 ;
struct TYPE_6__ {int log_start_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (struct wl1271*) ;
 int FUNC_8 (struct wl1271*) ;
 int FUNC_9 (struct wl1271*,int *,scalar_t__) ;
 int FUNC_10 (struct wl1271*,int ,TYPE_3__*) ;
 int FUNC_11 (struct wl1271*,scalar_t__,int *,scalar_t__,int) ;

__attribute__((used)) static void FUNC_12(struct wl1271 *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u8 *VAR_10;
 int VAR_11;

 if ((VAR_6->quirks & VAR_5) ||
     (VAR_6->conf.fwlog.mem_blocks == 0))
  return;

 FUNC_6("Reading FW panic log");

 VAR_10 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_10)
  return;






 if (FUNC_7(VAR_6))
  goto out;
 if (!VAR_6->watchdog_recovery &&
     VAR_6->conf.fwlog.output != VAR_2)
  FUNC_8(VAR_6);


 VAR_11 = FUNC_10(VAR_6, VAR_6->fw_status_1, VAR_6->fw_status_2);
 if (VAR_11 < 0)
  goto out;

 VAR_7 = FUNC_2(VAR_6->fw_status_2->log_start_addr);
 if (!VAR_7)
  goto out;

 if (VAR_6->conf.fwlog.mode == VAR_1) {
  VAR_8 = sizeof(VAR_7) + sizeof(struct wl1271_rx_descriptor);
  VAR_9 = VAR_4;
 } else {
  VAR_8 = sizeof(VAR_7);
  VAR_9 = VAR_7;
 }


 do {
  FUNC_4(VAR_10, 0, VAR_3);
  VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_10, VAR_3,
      0);
  if (VAR_11 < 0)
   goto out;







  VAR_7 = FUNC_3((__le32 *)VAR_10);
  if (!FUNC_9(VAR_6, VAR_10 + VAR_8,
           VAR_3 - VAR_8))
   break;
 } while (VAR_7 && (VAR_7 != VAR_9));

 FUNC_5(&VAR_6->fwlog_waitq);

out:
 FUNC_0(VAR_10);
}
