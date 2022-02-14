
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_6__ {int ncci; } ;
struct TYPE_7__ {TYPE_1__ connect_b3_active_resp; } ;
struct TYPE_8__ {TYPE_2__ msg; } ;
typedef TYPE_3__ actcapi_msg ;
struct TYPE_9__ {int fsm_state; int ncci; } ;
typedef TYPE_4__ act2000_chan ;
typedef int act2000_card ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(act2000_card *VAR_3, act2000_chan *VAR_4)
{
 actcapi_msg *VAR_5;
 struct sk_buff *VAR_6;

 FUNC_0(2, 0x83, 0x03);
 VAR_1;
 VAR_5->msg.connect_b3_active_resp.ncci = VAR_4->ncci;
 VAR_4->fsm_state = VAR_0;
 VAR_2;
}
