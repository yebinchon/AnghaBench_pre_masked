
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ setrtg; } ;
struct qeth_ipa_cmd {TYPE_2__ data; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_routing_types { ____Placeholder_qeth_routing_types } qeth_routing_types ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_2 ;
 struct qeth_cmd_buffer* FUNC_1 (struct qeth_card*,int ,int) ;
 int FUNC_2 (struct qeth_card*,struct qeth_cmd_buffer*,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_3,
 enum qeth_routing_types VAR_4, enum qeth_prot_versions VAR_5)
{
 int VAR_6;
 struct qeth_ipa_cmd *VAR_7;
 struct qeth_cmd_buffer *VAR_8;

 FUNC_0(VAR_2, 4, "setroutg");
 VAR_8 = FUNC_1(VAR_3, VAR_0, VAR_5);
 VAR_7 = (struct qeth_ipa_cmd *)(VAR_8->data+VAR_1);
 VAR_7->data.setrtg.type = (VAR_4);
 VAR_6 = FUNC_2(VAR_3, VAR_8, ((void*)0), ((void*)0));

 return VAR_6;
}
