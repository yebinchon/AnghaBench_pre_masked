
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
struct TYPE_7__ {TYPE_1__ disconnect_b3_resp; } ;
struct TYPE_8__ {TYPE_2__ msg; } ;
typedef TYPE_3__ actcapi_msg ;
struct TYPE_9__ {int ncci; scalar_t__ queued; } ;
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

 FUNC_0(2, 0x84, 0x03);
 VAR_0;
 VAR_4->msg.disconnect_b3_resp.ncci = VAR_3->ncci;
 VAR_3->ncci = 0x8000;
 VAR_3->queued = 0;
 VAR_1;
}
