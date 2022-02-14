
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mac; int mac_length; } ;
struct TYPE_4__ {TYPE_1__ setdelmac; } ;
struct qeth_ipa_cmd {TYPE_2__ data; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_ipa_cmds { ____Placeholder_qeth_ipa_cmds } qeth_ipa_cmds ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int ) ;
 struct qeth_cmd_buffer* FUNC_2 (struct qeth_card*,int,int ) ;
 int FUNC_3 (struct qeth_card*,struct qeth_cmd_buffer*,int (*) (struct qeth_card*,struct qeth_reply*,unsigned long),int *) ;

__attribute__((used)) static int FUNC_4(struct qeth_card *VAR_4, __u8 *VAR_5,
      enum qeth_ipa_cmds VAR_6,
      int (*VAR_7) (struct qeth_card *,
         struct qeth_reply*,
         unsigned long))
{
 struct qeth_ipa_cmd *VAR_8;
 struct qeth_cmd_buffer *VAR_9;

 FUNC_0(VAR_3, 2, "L2sdmac");
 VAR_9 = FUNC_2(VAR_4, VAR_6, VAR_2);
 VAR_8 = (struct qeth_ipa_cmd *)(VAR_9->data+VAR_0);
 VAR_8->data.setdelmac.mac_length = VAR_1;
 FUNC_1(&VAR_8->data.setdelmac.mac, VAR_5, VAR_1);
 return FUNC_3(VAR_4, VAR_9, VAR_7, ((void*)0));
}
