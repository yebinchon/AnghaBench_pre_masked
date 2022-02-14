
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int,int,void*) ;
 int FUNC_1 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_2 (struct sk_buff*) ;

int FUNC_3(struct sk_buff *VAR_1, struct nlmsghdr *VAR_2,
    int VAR_3, void *VAR_4, int VAR_5)
{
 unsigned char *VAR_6;

 VAR_6 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_1, VAR_5, VAR_3, VAR_4))
  goto nla_put_failure;
 VAR_2->nlmsg_len += FUNC_2(VAR_1) - VAR_6;
 return 0;

nla_put_failure:
 FUNC_1(VAR_1, VAR_6 - VAR_2->nlmsg_len);
 return -VAR_0;
}
