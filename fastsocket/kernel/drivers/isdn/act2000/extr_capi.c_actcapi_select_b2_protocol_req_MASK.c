
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
struct TYPE_11__ {int len; int dlen; int laa; int lab; int win; int modulo; } ;
struct TYPE_7__ {int protocol; TYPE_5__ dlpd; int plci; } ;
struct TYPE_8__ {TYPE_1__ select_b2_protocol_req; } ;
struct TYPE_9__ {TYPE_2__ msg; } ;
typedef TYPE_3__ actcapi_msg ;
struct TYPE_10__ {int l2prot; int plci; } ;
typedef TYPE_4__ act2000_chan ;
typedef int act2000_card ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int VAR_1 ;





 int FUNC_1 (TYPE_5__*,int ,int) ;

void
FUNC_2(act2000_card *VAR_2, act2000_chan *VAR_3)
{
 actcapi_msg *VAR_4;
 struct sk_buff *VAR_5;

 FUNC_0(10, 0x40, 0x00);
 VAR_0;
 VAR_4->msg.select_b2_protocol_req.plci = VAR_3->plci;
 FUNC_1(&VAR_4->msg.select_b2_protocol_req.dlpd, 0,
        sizeof(VAR_4->msg.select_b2_protocol_req.dlpd));
 VAR_4->msg.select_b2_protocol_req.dlpd.len = 6;
 switch (VAR_3->l2prot) {
  case 131:
   VAR_4->msg.select_b2_protocol_req.protocol = 0x03;
   VAR_4->msg.select_b2_protocol_req.dlpd.dlen = 4000;
   break;
  case 132:
   VAR_4->msg.select_b2_protocol_req.protocol = 0x02;
   VAR_4->msg.select_b2_protocol_req.dlpd.dlen = 4000;
   break;
  case 129:
  case 128:
  case 130:
   VAR_4->msg.select_b2_protocol_req.protocol = 0x01;
   VAR_4->msg.select_b2_protocol_req.dlpd.dlen = 4000;
   VAR_4->msg.select_b2_protocol_req.dlpd.laa = 3;
   VAR_4->msg.select_b2_protocol_req.dlpd.lab = 1;
   VAR_4->msg.select_b2_protocol_req.dlpd.win = 7;
   VAR_4->msg.select_b2_protocol_req.dlpd.modulo = 8;
   break;
 }
 VAR_1;
}
