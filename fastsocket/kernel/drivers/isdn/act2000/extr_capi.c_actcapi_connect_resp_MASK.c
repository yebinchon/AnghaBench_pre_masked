
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_6__ {int plci; scalar_t__ rejectcause; } ;
struct TYPE_7__ {TYPE_1__ connect_resp; } ;
struct TYPE_8__ {TYPE_2__ msg; } ;
typedef TYPE_3__ actcapi_msg ;
struct TYPE_9__ {int plci; int fsm_state; } ;
typedef TYPE_4__ act2000_chan ;
typedef int act2000_card ;
typedef scalar_t__ __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int) ;
 int VAR_3 ;

void
FUNC_1(act2000_card *VAR_4, act2000_chan *VAR_5, __u8 VAR_6)
{
 actcapi_msg *VAR_7;
 struct sk_buff *VAR_8;

 FUNC_0(3, 0x02, 0x03);
 VAR_2;
 VAR_7->msg.connect_resp.plci = VAR_5->plci;
 VAR_7->msg.connect_resp.rejectcause = VAR_6;
 if (VAR_6) {
  VAR_5->fsm_state = VAR_1;
  VAR_5->plci = 0x8000;
 } else
  VAR_5->fsm_state = VAR_0;
 VAR_3;
}
