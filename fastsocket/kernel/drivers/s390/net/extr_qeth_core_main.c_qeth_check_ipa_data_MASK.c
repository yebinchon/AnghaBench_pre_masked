
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int command; int return_code; } ;
struct qeth_ipa_cmd {TYPE_1__ hdr; } ;
struct qeth_cmd_buffer {int data; } ;
struct TYPE_6__ {int hwtrap; int chpid; } ;
struct qeth_card {int lan_online; TYPE_3__ info; int dev; TYPE_2__* gdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct qeth_ipa_cmd*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ,int,char*) ;
 int VAR_4 ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*,int ,int ) ;
 int FUNC_8 (int *,char*,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct qeth_card*) ;
 int FUNC_13 (struct qeth_ipa_cmd*,int ,struct qeth_card*) ;
 int FUNC_14 (struct qeth_card*) ;

__attribute__((used)) static struct qeth_ipa_cmd *FUNC_15(struct qeth_card *VAR_5,
  struct qeth_cmd_buffer *VAR_6)
{
 struct qeth_ipa_cmd *VAR_7 = ((void*)0);

 FUNC_5(VAR_4, 5, "chkipad");
 if (FUNC_0(VAR_6->data)) {
  VAR_7 = (struct qeth_ipa_cmd *) FUNC_2(VAR_6->data);
  if (FUNC_1(VAR_7)) {
   if (VAR_7->hdr.command != VAR_1 &&
       VAR_7->hdr.command != VAR_0 &&
       VAR_7->hdr.command != 132 &&
       VAR_7->hdr.command != VAR_2)
    FUNC_13(VAR_7,
      VAR_7->hdr.return_code, VAR_5);
   return VAR_7;
  } else {
   switch (VAR_7->hdr.command) {
   case 129:
    if (VAR_7->hdr.return_code ==
      VAR_3) {
     FUNC_6(&VAR_5->gdev->dev,
        "Interface %s is down because the "
        "adjacent port is no longer in "
        "reflective relay mode\n",
        FUNC_3(VAR_5));
     FUNC_12(VAR_5);
    } else {
     FUNC_8(&VAR_5->gdev->dev,
        "The link for interface %s on CHPID"
        " 0x%X failed\n",
        FUNC_3(VAR_5),
        VAR_5->info.chpid);
     FUNC_13(VAR_7,
      VAR_7->hdr.return_code, VAR_5);
    }
    VAR_5->lan_online = 0;
    if (VAR_5->dev && FUNC_10(VAR_5->dev))
     FUNC_9(VAR_5->dev);
    return ((void*)0);
   case 130:
    FUNC_7(&VAR_5->gdev->dev,
        "The link for %s on CHPID 0x%X has"
        " been restored\n",
        FUNC_3(VAR_5),
        VAR_5->info.chpid);
    FUNC_11(VAR_5->dev);
    VAR_5->lan_online = 1;
    if (VAR_5->info.hwtrap)
     VAR_5->info.hwtrap = 2;
    FUNC_14(VAR_5);
    return ((void*)0);
   case 132:
    return VAR_7;
   case 131:
    FUNC_5(VAR_4, 3, "irla");
    break;
   case 128:
    FUNC_5(VAR_4, 3, "urla");
    break;
   default:
    FUNC_4(2, "Received data is IPA "
        "but not a reply!\n");
    break;
   }
  }
 }
 return VAR_7;
}
