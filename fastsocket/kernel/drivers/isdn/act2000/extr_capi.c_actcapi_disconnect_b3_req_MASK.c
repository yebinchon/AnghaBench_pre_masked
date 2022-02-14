
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_11__ {int len; int modulo; } ;
struct TYPE_7__ {TYPE_5__ ncpi; int ncci; } ;
struct TYPE_8__ {TYPE_1__ disconnect_b3_req; } ;
struct TYPE_9__ {TYPE_2__ msg; } ;
typedef TYPE_3__ actcapi_msg ;
struct TYPE_10__ {int fsm_state; int ncci; } ;
typedef TYPE_4__ act2000_chan ;
typedef int act2000_card ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,int ,int) ;

void
FUNC_2(act2000_card *VAR_3, act2000_chan *VAR_4)
{
 actcapi_msg *VAR_5;
 struct sk_buff *VAR_6;

 FUNC_0(17, 0x84, 0x00);
 VAR_1;
 VAR_5->msg.disconnect_b3_req.ncci = VAR_4->ncci;
 FUNC_1(&VAR_5->msg.disconnect_b3_req.ncpi, 0,
        sizeof(VAR_5->msg.disconnect_b3_req.ncpi));
 VAR_5->msg.disconnect_b3_req.ncpi.len = 13;
 VAR_5->msg.disconnect_b3_req.ncpi.modulo = 8;
 VAR_4->fsm_state = VAR_0;
 VAR_2;
}
