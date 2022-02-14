
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct iwl_test {int trans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 struct sk_buff* FUNC_2 (struct iwl_test*,int) ;
 int FUNC_3 (struct iwl_test*) ;
 int FUNC_4 (struct iwl_test*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct iwl_test *VAR_3, struct nlattr **VAR_4)
{
 struct sk_buff *VAR_5;
 int VAR_6;
 u32 VAR_7 = FUNC_3(VAR_3);

 FUNC_0(VAR_3->trans, "uCode version raw: 0x%x\n", VAR_7);

 VAR_5 = FUNC_2(VAR_3, 20);
 if (!VAR_5) {
  FUNC_1(VAR_3->trans, "Memory allocation fail\n");
  return -VAR_1;
 }

 if (FUNC_6(VAR_5, VAR_2, VAR_7))
  goto nla_put_failure;

 VAR_6 = FUNC_4(VAR_3, VAR_5);
 if (VAR_6 < 0)
  FUNC_1(VAR_3->trans, "Error sending msg : %d\n", VAR_6);

 return 0;

nla_put_failure:
 FUNC_5(VAR_5);
 return -VAR_0;
}
