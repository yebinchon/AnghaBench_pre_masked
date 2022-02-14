
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct udphdr {int check; int len; } ;
struct sock {scalar_t__ sk_no_check; } ;
struct sk_buff {scalar_t__ ip_summed; int csum; } ;
struct inet_sock {int daddr; int saddr; } ;
typedef int __wsum ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 struct inet_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 struct udphdr* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_8(struct sock *VAR_2,
            struct sk_buff *VAR_3)
{
 struct udphdr *VAR_4 = FUNC_7(VAR_3);
 u16 VAR_5 = FUNC_5(VAR_4->len);
 struct inet_sock *VAR_6;
 __wsum VAR_7;

 if (VAR_2->sk_no_check || FUNC_6(VAR_3) || !VAR_4->check)
  return 0;

 VAR_6 = FUNC_4(VAR_2);
 VAR_7 = FUNC_3(VAR_6->saddr, VAR_6->daddr, VAR_5,
      VAR_1, 0);

 if ((VAR_3->ip_summed == VAR_0) &&
     !FUNC_2(FUNC_1(VAR_7, VAR_3->csum)))
  return 0;

 VAR_3->csum = VAR_7;

 return FUNC_0(VAR_3);
}
