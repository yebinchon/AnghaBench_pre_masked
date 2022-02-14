
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_6__ {int bEventType; void* wEvent; } ;
struct uwb_rc_evt_confirm {scalar_t__ bResultCode; TYPE_3__ rceb; } ;
struct TYPE_4__ {int dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
struct uwb_dev_addr {int dummy; } ;
struct TYPE_5__ {int bCommandType; void* wCommand; } ;
struct i1480u_cmd_set_ip_mas {TYPE_2__ rccb; int baMAS; void* type; void* owner; void* stream; struct uwb_dev_addr addr; } ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (struct i1480u_cmd_set_ip_mas*) ;
 struct i1480u_cmd_set_ip_mas* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,unsigned long*,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct uwb_rc*,char*,TYPE_2__*,int,TYPE_3__*,int) ;

__attribute__((used)) static
int FUNC_7(
 struct uwb_rc *VAR_4,
 const struct uwb_dev_addr *VAR_5,
 u8 VAR_6, u8 VAR_7, u8 VAR_8, unsigned long *VAR_9)
{

 int VAR_10;
 struct i1480u_cmd_set_ip_mas *VAR_11;
 struct uwb_rc_evt_confirm VAR_12;

 VAR_10 = -VAR_1;
 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_2);
 if (VAR_11 == ((void*)0))
  goto error_kzalloc;
 VAR_11->rccb.bCommandType = 0xfd;
 VAR_11->rccb.wCommand = FUNC_0(0x000e);
 VAR_11->addr = *VAR_5;
 VAR_11->stream = VAR_6;
 VAR_11->owner = VAR_7;
 VAR_11->type = VAR_8;
 if (VAR_9 == ((void*)0))
  FUNC_5(VAR_11->baMAS, 0x00, sizeof(VAR_11->baMAS));
 else
  FUNC_4(VAR_11->baMAS, VAR_9, sizeof(VAR_11->baMAS));
 VAR_12.rceb.bEventType = 0xfd;
 VAR_12.rceb.wEvent = FUNC_0(0x000e);
 VAR_10 = FUNC_6(VAR_4, "SET-IP-MAS", &VAR_11->rccb, sizeof(*VAR_11),
       &VAR_12.rceb, sizeof(VAR_12));
 if (VAR_10 < 0)
  goto error_cmd;
 if (VAR_12.bResultCode != VAR_3) {
  FUNC_1(&VAR_4->uwb_dev.dev,
   "SET-IP-MAS: command execution failed: %d\n",
   VAR_12.bResultCode);
  VAR_10 = -VAR_0;
 }
error_cmd:
 FUNC_2(VAR_11);
error_kzalloc:
 return VAR_10;
}
