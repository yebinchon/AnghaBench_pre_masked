
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_ipa_cmd {int dummy; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct qeth_card {int write; } ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;
typedef enum qeth_ipa_cmds { ____Placeholder_qeth_ipa_cmds } qeth_ipa_cmds ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qeth_card*,struct qeth_ipa_cmd*,int,int) ;
 struct qeth_cmd_buffer* FUNC_1 (int *) ;

struct qeth_cmd_buffer *FUNC_2(struct qeth_card *VAR_1,
  enum qeth_ipa_cmds VAR_2, enum qeth_prot_versions VAR_3)
{
 struct qeth_cmd_buffer *VAR_4;
 struct qeth_ipa_cmd *VAR_5;

 VAR_4 = FUNC_1(&VAR_1->write);
 VAR_5 = (struct qeth_ipa_cmd *)(VAR_4->data+VAR_0);
 FUNC_0(VAR_1, VAR_5, VAR_2, VAR_3);

 return VAR_4;
}
