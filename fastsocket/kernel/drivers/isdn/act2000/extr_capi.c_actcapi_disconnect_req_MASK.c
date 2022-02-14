
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ cause; int plci; } ;
struct TYPE_7__ {TYPE_1__ disconnect_req; } ;
struct TYPE_8__ {TYPE_2__ msg; } ;
typedef TYPE_3__ actcapi_msg ;
struct TYPE_9__ {int plci; } ;
typedef TYPE_4__ act2000_chan ;
typedef int act2000_card ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(act2000_card *VAR_2, act2000_chan *VAR_3)
{
 actcapi_msg *VAR_4;
 struct sk_buff *VAR_5;

 FUNC_0(3, 0x04, 0x00);
 VAR_0;
 VAR_4->msg.disconnect_req.plci = VAR_3->plci;
 VAR_4->msg.disconnect_req.cause = 0;
 VAR_1;
}
