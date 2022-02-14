
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vlan_id; } ;
struct TYPE_4__ {TYPE_1__ setdelvlan; } ;
struct qeth_ipa_cmd {TYPE_2__ data; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_ipa_cmds { ____Placeholder_qeth_ipa_cmds } qeth_ipa_cmds ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct qeth_cmd_buffer* FUNC_1 (struct qeth_card*,int,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_4, __u16 VAR_5,
    enum qeth_ipa_cmds VAR_6)
{
 struct qeth_ipa_cmd *VAR_7;
 struct qeth_cmd_buffer *VAR_8;

 FUNC_0(VAR_2, 4, "L2sdv%x", VAR_6);
 VAR_8 = FUNC_1(VAR_4, VAR_6, VAR_1);
 VAR_7 = (struct qeth_ipa_cmd *)(VAR_8->data+VAR_0);
 VAR_7->data.setdelvlan.vlan_id = VAR_5;
 return FUNC_2(VAR_4, VAR_8,
     VAR_3, ((void*)0));
}
