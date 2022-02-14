
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_9__ {int action; } ;
struct TYPE_10__ {TYPE_4__ diagass; } ;
struct TYPE_6__ {int return_code; } ;
struct qeth_ipa_cmd {TYPE_5__ data; TYPE_1__ hdr; } ;
struct TYPE_7__ {int promisc_mode; } ;
struct qeth_card {TYPE_3__* gdev; TYPE_2__ info; } ;
typedef int __u16 ;
struct TYPE_8__ {int dev; } ;




 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (int,char*,int,int ) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int ,int,char*,int) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static int
FUNC_6(struct qeth_card *VAR_4, struct qeth_reply *VAR_5,
       unsigned long VAR_6)
{
 struct qeth_ipa_cmd *VAR_7;
 __u16 VAR_8;

 FUNC_2(VAR_0, 2, "diastrcb");

 VAR_7 = (struct qeth_ipa_cmd *)VAR_6;
 VAR_8 = VAR_7->hdr.return_code;
 if (VAR_8) {
  FUNC_3(VAR_3, 2, "dxter%x", VAR_8);
  if (VAR_7->data.diagass.action == 129) {
   switch (VAR_8) {
   case 132:
    FUNC_5(&VAR_4->gdev->dev, "The device is not "
     "authorized to run as a HiperSockets "
     "network traffic analyzer\n");
    break;
   case 131:
    FUNC_5(&VAR_4->gdev->dev, "A HiperSockets "
     "network traffic analyzer is already "
     "active in the HiperSockets LAN\n");
    break;
   default:
    break;
   }
  }
  return 0;
 }

 switch (VAR_7->data.diagass.action) {
 case 128:
  break;
 case 130:
  VAR_4->info.promisc_mode = VAR_1;
  FUNC_4(&VAR_4->gdev->dev, "The HiperSockets network traffic "
   "analyzer is deactivated\n");
  break;
 case 129:
  VAR_4->info.promisc_mode = VAR_2;
  FUNC_4(&VAR_4->gdev->dev, "The HiperSockets network traffic "
   "analyzer is activated\n");
  break;
 default:
  FUNC_1(2, "Unknown sniffer action (0x%04x) on %s\n",
   VAR_7->data.diagass.action, FUNC_0(VAR_4));
 }

 return 0;
}
