
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int usbctlx_cmd_completor_t ;
struct TYPE_13__ {int cmdresp; } ;
struct TYPE_11__ {void* parm2; void* parm1; void* parm0; void* cmd; void* type; } ;
struct TYPE_12__ {TYPE_1__ cmdreq; } ;
struct TYPE_14__ {int outbufsize; TYPE_3__ inbuf; void* usercb_data; int usercb; int cmdcb; scalar_t__ reapable; TYPE_2__ outbuf; } ;
typedef TYPE_4__ hfa384x_usbctlx_t ;
typedef int hfa384x_t ;
struct TYPE_15__ {int result; int parm2; int parm1; int parm0; int cmd; } ;
typedef TYPE_5__ hfa384x_metacmd_t ;
typedef int ctlx_usercb_t ;
typedef int ctlx_cmdcb_t ;
typedef scalar_t__ CMD_MODE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_4__*,int ) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (char*,int ,int ,int ,int ) ;
 TYPE_4__* FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(hfa384x_t *VAR_3,
       CMD_MODE VAR_4,
       hfa384x_metacmd_t *VAR_5,
       ctlx_cmdcb_t VAR_6, ctlx_usercb_t VAR_7, void *VAR_8)
{
 int VAR_9;
 hfa384x_usbctlx_t *VAR_10;

 VAR_10 = FUNC_6();
 if (VAR_10 == ((void*)0)) {
  VAR_9 = -VAR_1;
  goto done;
 }


 VAR_10->outbuf.cmdreq.type = FUNC_0(VAR_2);
 VAR_10->outbuf.cmdreq.cmd = FUNC_0(VAR_5->cmd);
 VAR_10->outbuf.cmdreq.parm0 = FUNC_0(VAR_5->parm0);
 VAR_10->outbuf.cmdreq.parm1 = FUNC_0(VAR_5->parm1);
 VAR_10->outbuf.cmdreq.parm2 = FUNC_0(VAR_5->parm2);

 VAR_10->outbufsize = sizeof(VAR_10->outbuf.cmdreq);

 FUNC_5("cmdreq: cmd=0x%04x "
   "parm0=0x%04x parm1=0x%04x parm2=0x%04x\n",
   VAR_5->cmd, VAR_5->parm0, VAR_5->parm1, VAR_5->parm2);

 VAR_10->reapable = VAR_4;
 VAR_10->cmdcb = VAR_6;
 VAR_10->usercb = VAR_7;
 VAR_10->usercb_data = VAR_8;

 VAR_9 = FUNC_2(VAR_3, VAR_10);
 if (VAR_9 != 0) {
  FUNC_4(VAR_10);
 } else if (VAR_4 == VAR_0) {
  usbctlx_cmd_completor_t VAR_11;

  VAR_9 =
      FUNC_1(VAR_3, VAR_10,
        FUNC_3(&VAR_11,
             &VAR_10->
             inbuf.
             cmdresp,
             &VAR_5->
             result));
 }

done:
 return VAR_9;
}
