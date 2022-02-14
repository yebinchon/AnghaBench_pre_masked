
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_len; } ;
struct cn_msg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct nlmsghdr* FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_1)
{
 struct nlmsghdr *VAR_2;
 int VAR_3;
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_4(VAR_1);

 if (VAR_4->len >= FUNC_0(0)) {
  VAR_2 = FUNC_3(VAR_4);

  if (VAR_2->nlmsg_len < sizeof(struct cn_msg) ||
      VAR_4->len < VAR_2->nlmsg_len ||
      VAR_2->nlmsg_len > VAR_0) {
   FUNC_2(VAR_4);
   return;
  }

  VAR_3 = FUNC_1(VAR_4);
  if (VAR_3 < 0)
   FUNC_2(VAR_4);
 }
}
