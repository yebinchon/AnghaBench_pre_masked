
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int timeout; int controller; int * dev; } ;
struct smscore_device_t {int ir_init_done; TYPE_2__ ir; } ;
struct SmsMsgHdr_ST2 {int dummy; } ;
struct TYPE_8__ {int msgLength; } ;
struct SmsMsgData_ST2 {TYPE_4__ xMsgHeader; int * msgData; } ;
struct TYPE_5__ {int ir; } ;
struct TYPE_7__ {TYPE_1__ board_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*) ;
 TYPE_3__* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct smscore_device_t*) ;
 int FUNC_8 (struct smscore_device_t*) ;
 int FUNC_9 (struct smscore_device_t*,struct SmsMsgData_ST2*,int ,int *) ;
 int FUNC_10 (struct SmsMsgHdr_ST2*) ;

__attribute__((used)) static int FUNC_11(struct smscore_device_t *VAR_4)
{
 int VAR_5;
 int VAR_6;
 void *VAR_7;

 VAR_4->ir.dev = ((void*)0);
 VAR_5 = FUNC_5(FUNC_8(VAR_4))->board_cfg.ir;
 if (VAR_5) {
  FUNC_6("IR loading");
  VAR_6 = FUNC_7(VAR_4);

  if (VAR_6 != 0)
   FUNC_4("Error initialization DTV IR sub-module");
  else {
   VAR_7 = FUNC_3(sizeof(struct SmsMsgData_ST2) +
      VAR_3,
      VAR_1 | VAR_0);
   if (VAR_7) {
    struct SmsMsgData_ST2 *VAR_8 =
    (struct SmsMsgData_ST2 *)
    FUNC_0(VAR_7);

    FUNC_1(&VAR_8->xMsgHeader,
      VAR_2,
      sizeof(struct SmsMsgData_ST2));
    VAR_8->msgData[0] = VAR_4->ir.controller;
    VAR_8->msgData[1] = VAR_4->ir.timeout;

    FUNC_10(
     (struct SmsMsgHdr_ST2 *)VAR_8);
    VAR_6 = FUNC_9(VAR_4, VAR_8,
      VAR_8->xMsgHeader. msgLength,
      &VAR_4->ir_init_done);

    FUNC_2(VAR_7);
   } else
    FUNC_4
    ("Sending IR initialization message failed");
  }
 } else
  FUNC_6("IR port has not been detected");

 return 0;
}
