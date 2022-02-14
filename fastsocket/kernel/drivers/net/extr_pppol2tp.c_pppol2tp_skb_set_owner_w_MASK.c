
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int destructor; struct sock* sk; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;

__attribute__((used)) static inline void FUNC_1(struct sk_buff *VAR_1, struct sock *VAR_2)
{
 FUNC_0(VAR_2);
 VAR_1->sk = VAR_2;
 VAR_1->destructor = VAR_0;
}
