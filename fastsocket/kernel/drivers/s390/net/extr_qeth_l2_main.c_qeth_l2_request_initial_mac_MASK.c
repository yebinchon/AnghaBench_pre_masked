
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ guestlan; } ;
struct qeth_card {TYPE_2__* dev; TYPE_1__ info; } ;
struct TYPE_4__ {int dev_addr; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (int,char*,int,int) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int ,int,char*,int) ;
 int VAR_5 ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (struct qeth_card*,int ) ;
 int FUNC_7 (struct qeth_card*) ;
 int FUNC_8 (struct qeth_card*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct qeth_card *VAR_6)
{
 int VAR_7 = 0;
 char VAR_8[] = {0x02, 0x00, 0x00};

 FUNC_3(VAR_5, 2, "doL2init");
 FUNC_4(VAR_5, 2, "doL2%s", FUNC_0(VAR_6));

 if (FUNC_6(VAR_6, VAR_0)) {
  VAR_7 = FUNC_7(VAR_6);
  if (VAR_7) {
   FUNC_2(2, "could not query adapter "
    "parameters on device %s: x%x\n",
    FUNC_0(VAR_6), VAR_7);
  }
 }

 if (VAR_6->info.type == VAR_2 ||
     VAR_6->info.type == VAR_3 ||
     VAR_6->info.type == VAR_4 ||
     VAR_6->info.guestlan) {
  VAR_7 = FUNC_8(VAR_6);
  if (VAR_7) {
   FUNC_2(2, "couldn't get MAC address on "
    "device %s: x%x\n", FUNC_0(VAR_6), VAR_7);
   FUNC_4(VAR_5, 2, "1err%d", VAR_7);
   return VAR_7;
  }
  FUNC_1(VAR_5, 2, VAR_6->dev->dev_addr, VAR_1);
 } else {
  FUNC_9(VAR_6->dev->dev_addr);
  FUNC_5(VAR_6->dev->dev_addr, VAR_8, 3);
 }
 return 0;
}
