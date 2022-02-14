
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int subcmd_len; int action; int type; int subcmd; } ;
struct TYPE_4__ {TYPE_1__ diagass; } ;
struct qeth_ipa_cmd {TYPE_2__ data; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_diags_trace_cmds { ____Placeholder_qeth_diags_trace_cmds } qeth_diags_trace_cmds ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct qeth_cmd_buffer* FUNC_1 (struct qeth_card*,int ,int ) ;
 int FUNC_2 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct qeth_card *VAR_6, enum qeth_diags_trace_cmds VAR_7)
{
 struct qeth_cmd_buffer *VAR_8;
 struct qeth_ipa_cmd *VAR_9;

 FUNC_0(VAR_4, 2, "diagtrac");

 VAR_8 = FUNC_1(VAR_6, VAR_0, 0);
 VAR_9 = (struct qeth_ipa_cmd *)(VAR_8->data+VAR_1);
 VAR_9->data.diagass.subcmd_len = 16;
 VAR_9->data.diagass.subcmd = VAR_2;
 VAR_9->data.diagass.type = VAR_3;
 VAR_9->data.diagass.action = VAR_7;
 return FUNC_2(VAR_6, VAR_8, VAR_5, ((void*)0));
}
