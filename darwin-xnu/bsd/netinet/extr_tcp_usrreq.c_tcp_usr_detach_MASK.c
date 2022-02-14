
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int dummy; } ;
struct socket {int dummy; } ;
struct inpcb {scalar_t__ inp_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 struct tcpcb* FUNC_3 (struct inpcb*) ;
 int FUNC_4 (struct socket*) ;
 struct inpcb* FUNC_5 (struct socket*) ;
 struct tcpcb* FUNC_6 (struct tcpcb*) ;

__attribute__((used)) static int
FUNC_7(struct socket *VAR_4)
{
 int VAR_5 = 0;
 struct inpcb *VAR_6 = FUNC_5(VAR_4);
 struct tcpcb *VAR_7;
 VAR_3;

 if (VAR_6 == 0 || (VAR_6->inp_state == VAR_1)) {
  return VAR_0;
 }
 FUNC_4(VAR_4);
 VAR_7 = FUNC_3(VAR_6);

        if (VAR_7 == ((void*)0))
  goto out;
 FUNC_0();

 FUNC_2();

 VAR_7 = FUNC_6(VAR_7);
out:
 FUNC_1(VAR_2);
 return VAR_5;
}
