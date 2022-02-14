
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct iwl_test {TYPE_1__* trans; } ;
struct TYPE_3__ {int hw_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int VAR_2 ;
 struct sk_buff* FUNC_2 (struct iwl_test*,int) ;
 int FUNC_3 (struct iwl_test*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct iwl_test *VAR_3, struct nlattr **VAR_4)
{
 u32 VAR_5 = VAR_3->trans->hw_id;
 struct sk_buff *VAR_6;
 int VAR_7;

 FUNC_0(VAR_3->trans, "hw version: 0x%x\n", VAR_5);

 VAR_6 = FUNC_2(VAR_3, 20);
 if (!VAR_6) {
  FUNC_1(VAR_3->trans, "Memory allocation fail\n");
  return -VAR_1;
 }

 if (FUNC_5(VAR_6, VAR_2, VAR_5))
  goto nla_put_failure;
 VAR_7 = FUNC_3(VAR_3, VAR_6);
 if (VAR_7 < 0)
  FUNC_1(VAR_3->trans, "Error sending msg : %d\n", VAR_7);

 return 0;

nla_put_failure:
 FUNC_4(VAR_6);
 return -VAR_0;
}
