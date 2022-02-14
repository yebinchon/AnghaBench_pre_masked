
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_9__ {int mac; } ;
struct TYPE_10__ {TYPE_3__ setdelmac; } ;
struct TYPE_7__ {int return_code; } ;
struct qeth_ipa_cmd {TYPE_4__ data; TYPE_1__ hdr; } ;
struct TYPE_8__ {int mac_bits; } ;
struct qeth_card {TYPE_6__* dev; TYPE_5__* gdev; TYPE_2__ info; } ;
struct TYPE_12__ {int name; int dev_addr; } ;
struct TYPE_11__ {int dev; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct qeth_card *VAR_4,
      struct qeth_reply *VAR_5,
      unsigned long VAR_6)
{
 struct qeth_ipa_cmd *VAR_7;

 FUNC_0(VAR_3, 2, "L2Smaccb");
 VAR_7 = (struct qeth_ipa_cmd *) VAR_6;
 if (VAR_7->hdr.return_code) {
  FUNC_1(VAR_3, 2, "L2er%x", VAR_7->hdr.return_code);
  VAR_4->info.mac_bits &= ~VAR_2;
  switch (VAR_7->hdr.return_code) {
  case 130:
  case 131:
   FUNC_3(&VAR_4->gdev->dev,
    "MAC address %pM already exists\n",
    VAR_7->data.setdelmac.mac);
   break;
  case 128:
  case 129:
   FUNC_3(&VAR_4->gdev->dev,
    "MAC address %pM is not authorized\n",
    VAR_7->data.setdelmac.mac);
   break;
  default:
   break;
  }
  VAR_7->hdr.return_code = -VAR_0;
 } else {
  VAR_4->info.mac_bits |= VAR_2;
  FUNC_4(VAR_4->dev->dev_addr, VAR_7->data.setdelmac.mac,
         VAR_1);
  FUNC_2(&VAR_4->gdev->dev,
   "MAC address %pM successfully registered on "
   "device %s\n",
   VAR_4->dev->dev_addr, VAR_4->dev->name);
 }
 return 0;
}
