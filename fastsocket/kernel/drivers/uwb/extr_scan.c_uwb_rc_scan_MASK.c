
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int wEvent; void* bEventType; } ;
struct uwb_rc_evt_confirm {scalar_t__ bResultCode; TYPE_3__ rceb; } ;
struct TYPE_5__ {void* wCommand; void* bCommandType; } ;
struct uwb_rc_cmd_scan {unsigned int bChannelNumber; int bScanState; TYPE_2__ rccb; void* wStartTime; } ;
struct TYPE_4__ {int mutex; int dev; } ;
struct uwb_rc {unsigned int scanning; int scan_type; TYPE_1__ uwb_dev; } ;
typedef int reply ;
typedef enum uwb_scan_type { ____Placeholder_uwb_scan_type } uwb_scan_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,char*,int ,scalar_t__) ;
 int FUNC_2 (struct uwb_rc_cmd_scan*) ;
 struct uwb_rc_cmd_scan* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct uwb_rc*,char*,TYPE_2__*,int,TYPE_3__*,int) ;
 int FUNC_7 (scalar_t__) ;

int FUNC_8(struct uwb_rc *VAR_6,
  unsigned VAR_7, enum uwb_scan_type VAR_8,
  unsigned VAR_9)
{
 int VAR_10;
 struct uwb_rc_cmd_scan *VAR_11;
 struct uwb_rc_evt_confirm VAR_12;

 VAR_10 = -VAR_1;
 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_2);
 if (VAR_11 == ((void*)0))
  goto error_kzalloc;
 FUNC_4(&VAR_6->uwb_dev.mutex);
 VAR_11->rccb.bCommandType = VAR_3;
 VAR_11->rccb.wCommand = FUNC_0(VAR_4);
 VAR_11->bChannelNumber = VAR_7;
 VAR_11->bScanState = VAR_8;
 VAR_11->wStartTime = FUNC_0(VAR_9);
 VAR_12.rceb.bEventType = VAR_3;
 VAR_12.rceb.wEvent = VAR_4;
 VAR_10 = FUNC_6(VAR_6, "SCAN", &VAR_11->rccb, sizeof(*VAR_11),
       &VAR_12.rceb, sizeof(VAR_12));
 if (VAR_10 < 0)
  goto error_cmd;
 if (VAR_12.bResultCode != VAR_5) {
  FUNC_1(&VAR_6->uwb_dev.dev,
   "SCAN: command execution failed: %s (%d)\n",
   FUNC_7(VAR_12.bResultCode), VAR_12.bResultCode);
  VAR_10 = -VAR_0;
  goto error_cmd;
 }
 VAR_6->scanning = VAR_7;
 VAR_6->scan_type = VAR_8;
error_cmd:
 FUNC_5(&VAR_6->uwb_dev.mutex);
 FUNC_2(VAR_11);
error_kzalloc:
 return VAR_10;
}
