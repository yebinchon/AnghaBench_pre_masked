
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
struct TYPE_8__ {TYPE_5__ ncpi; int plci; } ;
struct TYPE_7__ {TYPE_2__ connect_b3_req; } ;
struct TYPE_9__ {TYPE_1__ msg; } ;
typedef TYPE_3__ actcapi_msg ;
struct TYPE_10__ {int plci; } ;
typedef TYPE_4__ act2000_chan ;
typedef int act2000_card ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(act2000_card *VAR_2, act2000_chan *VAR_3)
{
 actcapi_msg *VAR_4;
 struct sk_buff *VAR_5;

 FUNC_0(17, 0x82, 0x00);
 VAR_0;
 VAR_4->msg.connect_b3_req.plci = VAR_3->plci;
 FUNC_1(&VAR_4->msg.connect_b3_req.ncpi, 0,
        sizeof(VAR_4->msg.connect_b3_req.ncpi));
 VAR_4->msg.connect_b3_req.ncpi.len = 13;
 VAR_4->msg.connect_b3_req.ncpi.modulo = 8;
 VAR_1;
}
