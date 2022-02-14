
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int destructor; struct sock* sk; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sock*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 FUNC_0(VAR_2);
 FUNC_1(VAR_1);
 VAR_2->sk = VAR_1;
 VAR_2->destructor = VAR_0;
}
