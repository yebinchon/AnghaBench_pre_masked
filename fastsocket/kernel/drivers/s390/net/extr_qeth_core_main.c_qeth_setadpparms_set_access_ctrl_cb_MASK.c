
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct qeth_set_access_ctrl {int subcmd_code; } ;
struct qeth_reply {scalar_t__ param; } ;
struct TYPE_14__ {int return_code; } ;
struct TYPE_12__ {struct qeth_set_access_ctrl set_access_ctrl; } ;
struct TYPE_15__ {TYPE_3__ hdr; TYPE_1__ data; } ;
struct TYPE_16__ {TYPE_4__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_5__ data; } ;
struct TYPE_18__ {int prev_isolation; int isolation; } ;
struct qeth_card {TYPE_7__ options; TYPE_6__* gdev; } ;
struct TYPE_13__ {int name; } ;
struct TYPE_19__ {TYPE_2__ kobj; } ;
struct TYPE_17__ {TYPE_8__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ,int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_8__*,char*) ;
 int FUNC_4 (TYPE_8__*,char*) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*,char*) ;
 int FUNC_7 (struct qeth_card*,struct qeth_reply*,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct qeth_card *VAR_3,
  struct qeth_reply *VAR_4, unsigned long VAR_5)
{
 struct qeth_ipa_cmd *VAR_6;
 struct qeth_set_access_ctrl *VAR_7;
 int VAR_8 = *(int *)VAR_4->param;

 FUNC_1(VAR_2, 4, "setaccb");

 VAR_6 = (struct qeth_ipa_cmd *) VAR_5;
 VAR_7 = &VAR_6->data.setadapterparms.data.set_access_ctrl;
 FUNC_2(VAR_1, 2, "setaccb");
 FUNC_2(VAR_1, 2, "%s", VAR_3->gdev->dev.kobj.name);
 FUNC_2(VAR_1, 2, "rc=%d",
  VAR_6->data.setadapterparms.hdr.return_code);
 if (VAR_6->data.setadapterparms.hdr.return_code !=
      128)
  FUNC_0(3, "ERR:SET_ACCESS_CTRL(%s,%d)==%d\n",
    VAR_3->gdev->dev.kobj.name,
    VAR_7->subcmd_code,
    VAR_6->data.setadapterparms.hdr.return_code);
 switch (VAR_6->data.setadapterparms.hdr.return_code) {
 case 128:
  if (VAR_3->options.isolation == VAR_0) {
   FUNC_4(&VAR_3->gdev->dev,
       "QDIO data connection isolation is deactivated\n");
  } else {
   FUNC_4(&VAR_3->gdev->dev,
       "QDIO data connection isolation is activated\n");
  }
  break;
 case 134:
  FUNC_0(2, "%s QDIO data connection isolation already "
    "deactivated\n", FUNC_5(&VAR_3->gdev->dev));
  if (VAR_8)
   VAR_3->options.isolation = VAR_3->options.prev_isolation;
  break;
 case 135:
  FUNC_0(2, "%s QDIO data connection isolation already"
    " activated\n", FUNC_5(&VAR_3->gdev->dev));
  if (VAR_8)
   VAR_3->options.isolation = VAR_3->options.prev_isolation;
  break;
 case 132:
  FUNC_3(&VAR_3->gdev->dev, "Adapter does not "
   "support QDIO data connection isolation\n");
  break;
 case 133:
  FUNC_3(&VAR_3->gdev->dev,
   "Adapter is dedicated. "
   "QDIO data connection isolation not supported\n");
  if (VAR_8)
   VAR_3->options.isolation = VAR_3->options.prev_isolation;
  break;
 case 136:
  FUNC_3(&VAR_3->gdev->dev,
   "TSO does not permit QDIO data connection isolation\n");
  if (VAR_8)
   VAR_3->options.isolation = VAR_3->options.prev_isolation;
  break;
 case 129:
  FUNC_3(&VAR_3->gdev->dev, "The adjacent switch port does not "
   "support reflective relay mode\n");
  if (VAR_8)
   VAR_3->options.isolation = VAR_3->options.prev_isolation;
  break;
 case 130:
  FUNC_3(&VAR_3->gdev->dev, "The reflective relay mode cannot be "
     "enabled at the adjacent switch port");
  if (VAR_8)
   VAR_3->options.isolation = VAR_3->options.prev_isolation;
  break;
 case 131:
  FUNC_6(&VAR_3->gdev->dev, "Turning off reflective relay mode "
     "at the adjacent switch failed\n");
  break;
 default:

  if (VAR_8)
   VAR_3->options.isolation = VAR_3->options.prev_isolation;
  break;
 }
 FUNC_7(VAR_3, VAR_4, (unsigned long) VAR_6);
 return 0;
}
