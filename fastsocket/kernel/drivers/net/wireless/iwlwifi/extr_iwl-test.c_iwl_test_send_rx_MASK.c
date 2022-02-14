
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iwl_test {int trans; } ;
struct iwl_rx_packet {int len_n_flags; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_1 (struct iwl_test*,int) ;
 int FUNC_2 (struct iwl_test*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int,struct iwl_rx_packet*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 struct iwl_rx_packet* FUNC_7 (struct iwl_rx_cmd_buffer*) ;

__attribute__((used)) static void FUNC_8(struct iwl_test *VAR_4,
        struct iwl_rx_cmd_buffer *VAR_5)
{
 struct sk_buff *VAR_6;
 struct iwl_rx_packet *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_7(VAR_5);
 VAR_8 = FUNC_4(VAR_7->len_n_flags) & VAR_0;


 VAR_8 += sizeof(__le32);

 VAR_6 = FUNC_1(VAR_4, VAR_8 + 20);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_4->trans, "Out of memory for message to user\n");
  return;
 }

 if (FUNC_6(VAR_6, VAR_1,
   VAR_3) ||
     FUNC_5(VAR_6, VAR_2, VAR_8, VAR_7))
  goto nla_put_failure;

 FUNC_2(VAR_4, VAR_6);
 return;

nla_put_failure:
 FUNC_3(VAR_6);
 FUNC_0(VAR_4->trans, "Ouch, overran buffer, check allocation!\n");
}
