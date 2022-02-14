
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct inpcb {scalar_t__ inp_sndinprog_cnt; int inp_flags; struct socket* inp_socket; } ;


 int VAR_0 ;
 int FUNC_0 (struct inpcb*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct inpcb*,int ,int) ;
 int FUNC_4 (struct inpcb*) ;
 int FUNC_5 (struct inpcb*) ;
 int FUNC_6 (struct socket*,int) ;
 int FUNC_7 (struct socket*,int) ;

__attribute__((used)) static void
FUNC_8(struct inpcb *VAR_4)
{
 struct socket *VAR_5 = VAR_4->inp_socket;


 FUNC_2(VAR_5 != ((void*)0));
 FUNC_6(VAR_5, 1);

 if (FUNC_3(VAR_4, VAR_2, 1) == VAR_3) {
  FUNC_7(VAR_5, 1);
  return;
 }

 if (VAR_4->inp_sndinprog_cnt > 0)
  VAR_4->inp_flags |= VAR_0;






 if (!FUNC_0(VAR_4)) {
  FUNC_7(VAR_5, 1);
  return;
 }
 FUNC_5(VAR_4);

 if (FUNC_1(VAR_5) == VAR_1)
  FUNC_4(VAR_4);

 FUNC_7(VAR_5, 1);
}
