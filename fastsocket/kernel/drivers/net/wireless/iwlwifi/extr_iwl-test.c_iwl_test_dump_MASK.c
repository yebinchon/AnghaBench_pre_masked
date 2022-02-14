
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct netlink_callback {int dummy; } ;
struct iwl_test {int trans; } ;


 int FUNC_0 (int ,char*) ;


 int FUNC_1 (struct iwl_test*,struct sk_buff*,struct netlink_callback*) ;
 int FUNC_2 (struct iwl_test*,struct sk_buff*,struct netlink_callback*) ;

int FUNC_3(struct iwl_test *VAR_0, u32 VAR_1, struct sk_buff *VAR_2,
    struct netlink_callback *VAR_3)
{
 int VAR_4;

 switch (VAR_1) {
 case 128:
  FUNC_0(VAR_0->trans, "uCode trace cmd\n");
  VAR_4 = FUNC_2(VAR_0, VAR_2, VAR_3);
  break;

 case 129:
  FUNC_0(VAR_0->trans, "testmode sram dump cmd\n");
  VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);
  break;

 default:
  VAR_4 = 1;
  break;
 }
 return VAR_4;
}
