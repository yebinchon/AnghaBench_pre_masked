
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct pppol2tp_tunnel {int name; int debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int ) ;
 scalar_t__ FUNC_1 (struct sock*,struct sk_buff*) ;
 struct pppol2tp_tunnel* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct pppol2tp_tunnel *VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 == ((void*)0))
  goto pass_up;

 FUNC_0(VAR_4->debug, VAR_1, VAR_0,
        "%s: received %d bytes\n", VAR_4->name, VAR_3->len);

 if (FUNC_1(VAR_2, VAR_3))
  goto pass_up_put;

 FUNC_3(VAR_2);
 return 0;

pass_up_put:
 FUNC_3(VAR_2);
pass_up:
 return 1;
}
