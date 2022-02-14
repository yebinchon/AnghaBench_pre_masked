
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int data_unknown; int cfack_cfpoll; int cfpoll; int cfack; int null; int data__cfack_cfpoll; int data_cfpoll; int data_cfack; int dataonly; int data; int ctl_unknown; int cfendcfack; int cfend; int ack; int cts; int rts; int pspoll; int ctl; int mgmt_unknown; int deauthen; int authen; int disassoc; int atim; int beacon; int proberesp; int probereq; int reassocresp; int reassocreq; int assocresp; int assocreq; int mgmt; } ;
struct TYPE_7__ {TYPE_2__ rx; TYPE_1__* netdev; } ;
typedef TYPE_3__ wlandevice_t ;
typedef int u16 ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(wlandevice_t *VAR_2, u16 VAR_3)
{
 u16 VAR_4;
 u16 VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = FUNC_0(VAR_3);



 switch (VAR_4) {
 case 128:
  if ((VAR_2->netdev->flags & VAR_1) ||
      (VAR_2->netdev->flags & VAR_0)) {
   VAR_6 = 1;
   break;
  }
  FUNC_2("rx'd mgmt:\n");
  VAR_2->rx.mgmt++;
  switch (VAR_5) {
  case 154:

   VAR_2->rx.assocreq++;
   break;
  case 153:

   VAR_2->rx.assocresp++;
   break;
  case 133:

   VAR_2->rx.reassocreq++;
   break;
  case 132:

   VAR_2->rx.reassocresp++;
   break;
  case 136:

   VAR_2->rx.probereq++;
   break;
  case 135:

   VAR_2->rx.proberesp++;
   break;
  case 150:

   VAR_2->rx.beacon++;
   break;
  case 152:

   VAR_2->rx.atim++;
   break;
  case 138:

   VAR_2->rx.disassoc++;
   break;
  case 151:

   VAR_2->rx.authen++;
   break;
  case 139:

   VAR_2->rx.deauthen++;
   break;
  default:

   VAR_2->rx.mgmt_unknown++;
   break;
  }

  VAR_6 = 2;
  break;

 case 130:
  if ((VAR_2->netdev->flags & VAR_1) ||
      (VAR_2->netdev->flags & VAR_0)) {
   VAR_6 = 1;
   break;
  }
  FUNC_2("rx'd ctl:\n");
  VAR_2->rx.ctl++;
  switch (VAR_5) {
  case 134:

   VAR_2->rx.pspoll++;
   break;
  case 131:

   VAR_2->rx.rts++;
   break;
  case 144:

   VAR_2->rx.cts++;
   break;
  case 155:

   VAR_2->rx.ack++;
   break;
  case 147:

   VAR_2->rx.cfend++;
   break;
  case 146:

   VAR_2->rx.cfendcfack++;
   break;
  default:

   VAR_2->rx.ctl_unknown++;
   break;
  }

  VAR_6 = 2;
  break;

 case 129:
  VAR_2->rx.data++;
  switch (VAR_5) {
  case 143:
   VAR_2->rx.dataonly++;
   break;
  case 142:
   VAR_2->rx.data_cfack++;
   break;
  case 140:
   VAR_2->rx.data_cfpoll++;
   break;
  case 141:
   VAR_2->rx.data__cfack_cfpoll++;
   break;
  case 137:
   FUNC_2("rx'd data:null\n");
   VAR_2->rx.null++;
   break;
  case 149:
   FUNC_2("rx'd data:cfack\n");
   VAR_2->rx.cfack++;
   break;
  case 145:
   FUNC_2("rx'd data:cfpoll\n");
   VAR_2->rx.cfpoll++;
   break;
  case 148:
   FUNC_2("rx'd data:cfack_cfpoll\n");
   VAR_2->rx.cfack_cfpoll++;
   break;
  default:

   VAR_2->rx.data_unknown++;
   break;
  }

  break;
 }
 return VAR_6;
}
