
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcs_cmd {scalar_t__ initiator; int cmd_code; } ;
struct lcs_card {TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;





 int FUNC_0 (int,int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct lcs_card*,struct lcs_cmd*) ;
 int FUNC_2 (struct lcs_card*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct lcs_card *VAR_2, struct lcs_cmd *VAR_3)
{
 FUNC_0(5, VAR_1, "getctrl");
 if (VAR_3->initiator == VAR_0) {
  switch(VAR_3->cmd_code) {
  case 129:
  case 130:
   FUNC_2(VAR_2);
   break;
  case 128:
   FUNC_4("Stoplan for %s initiated by LGW.\n",
       VAR_2->dev->name);
   if (VAR_2->dev)
    FUNC_3(VAR_2->dev);
   break;
  default:
   FUNC_0(5, VAR_1, "noLGWcmd");
   break;
  }
 } else
  FUNC_1(VAR_2, VAR_3);
}
