
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_len; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 void* FUNC_1 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_2 (struct sk_buff*,int ,int,int ,int,int ) ;
 int FUNC_3 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_4 (struct sk_buff*) ;

void *FUNC_5(struct sk_buff *VAR_1, struct nlmsghdr **VAR_2, int VAR_3,
     int VAR_4, int VAR_5, int VAR_6)
{
 unsigned char *VAR_7;

 VAR_7 = FUNC_4(VAR_1);
 *VAR_2 = FUNC_2(VAR_1, 0, VAR_3, FUNC_0(VAR_5, VAR_6),
    VAR_4, VAR_0);
 if (!*VAR_2)
  goto out_nlmsg_trim;
 (*VAR_2)->nlmsg_len = FUNC_4(VAR_1) - VAR_7;
 return FUNC_1(*VAR_2);

out_nlmsg_trim:
 FUNC_3(VAR_1, VAR_7);
 return ((void*)0);
}
