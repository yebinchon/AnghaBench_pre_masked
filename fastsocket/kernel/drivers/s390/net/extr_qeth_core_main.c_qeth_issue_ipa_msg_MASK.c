
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int command; } ;
struct qeth_ipa_cmd {TYPE_1__ hdr; } ;
struct qeth_card {TYPE_2__* gdev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (int,char*,char*,int,int ,int ,...) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct qeth_ipa_cmd *VAR_0, int VAR_1,
  struct qeth_card *VAR_2)
{
 char *VAR_3;
 int VAR_4 = VAR_0->hdr.command;
 VAR_3 = FUNC_3(VAR_4);
 if (VAR_1)
  FUNC_1(2, "IPA: %s(x%X) for %s/%s returned "
    "x%X \"%s\"\n",
    VAR_3, VAR_4, FUNC_2(&VAR_2->gdev->dev),
    FUNC_0(VAR_2), VAR_1,
    FUNC_4(VAR_1));
 else
  FUNC_1(5, "IPA: %s(x%X) for %s/%s succeeded\n",
    VAR_3, VAR_4, FUNC_2(&VAR_2->gdev->dev),
    FUNC_0(VAR_2));
}
