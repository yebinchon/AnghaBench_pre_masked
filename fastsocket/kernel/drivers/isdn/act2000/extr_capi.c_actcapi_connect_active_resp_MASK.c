
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_6__ {int plci; } ;
struct TYPE_7__ {TYPE_1__ connect_resp; } ;
struct TYPE_8__ {TYPE_2__ msg; } ;
typedef TYPE_3__ actcapi_msg ;
struct TYPE_9__ {scalar_t__ fsm_state; int plci; } ;
typedef TYPE_4__ act2000_chan ;
typedef int act2000_card ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(act2000_card *VAR_4, act2000_chan *VAR_5)
{
 actcapi_msg *VAR_6;
 struct sk_buff *VAR_7;

 FUNC_0(2, 0x03, 0x03);
 VAR_2;
 VAR_6->msg.connect_resp.plci = VAR_5->plci;
 if (VAR_5->fsm_state == VAR_1)
  VAR_5->fsm_state = VAR_0;
 VAR_3;
}
