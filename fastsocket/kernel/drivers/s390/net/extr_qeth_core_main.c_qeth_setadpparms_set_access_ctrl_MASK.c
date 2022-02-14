
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


struct qeth_set_access_ctrl {int subcmd_code; } ;
struct qeth_ipacmd_setadpparms_hdr {int dummy; } ;
struct TYPE_10__ {struct qeth_set_access_ctrl set_access_ctrl; } ;
struct TYPE_11__ {TYPE_4__ data; } ;
struct TYPE_12__ {TYPE_5__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_6__ data; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct qeth_card {TYPE_3__* gdev; } ;
typedef enum qeth_ipa_isolation_modes { ____Placeholder_qeth_ipa_isolation_modes } qeth_ipa_isolation_modes ;
struct TYPE_7__ {int name; } ;
struct TYPE_8__ {TYPE_1__ kobj; } ;
struct TYPE_9__ {TYPE_2__ dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 struct qeth_cmd_buffer* FUNC_2 (struct qeth_card*,int ,int) ;
 int FUNC_3 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct qeth_card *VAR_5,
  enum qeth_ipa_isolation_modes VAR_6, int VAR_7)
{
 int VAR_8;
 struct qeth_cmd_buffer *VAR_9;
 struct qeth_ipa_cmd *VAR_10;
 struct qeth_set_access_ctrl *VAR_11;

 FUNC_0(VAR_3, 4, "setacctl");

 FUNC_1(VAR_2, 2, "setacctl");
 FUNC_1(VAR_2, 2, "%s", VAR_5->gdev->dev.kobj.name);

 VAR_9 = FUNC_2(VAR_5, VAR_1,
       sizeof(struct qeth_ipacmd_setadpparms_hdr) +
       sizeof(struct qeth_set_access_ctrl));
 VAR_10 = (struct qeth_ipa_cmd *)(VAR_9->data+VAR_0);
 VAR_11 = &VAR_10->data.setadapterparms.data.set_access_ctrl;
 VAR_11->subcmd_code = VAR_6;

 VAR_8 = FUNC_3(VAR_5, VAR_9, VAR_4,
          &VAR_7);
 FUNC_1(VAR_2, 2, "rc=%d", VAR_8);
 return VAR_8;
}
