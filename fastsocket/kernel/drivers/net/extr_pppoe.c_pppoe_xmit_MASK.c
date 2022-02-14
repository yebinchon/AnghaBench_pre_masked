
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ppp_channel {scalar_t__ private; } ;


 int FUNC_0 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_1(struct ppp_channel *VAR_0, struct sk_buff *VAR_1)
{
 struct sock *VAR_2 = (struct sock *)VAR_0->private;
 return FUNC_0(VAR_2, VAR_1);
}
