
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct socket {scalar_t__ so_usecount; } ;
struct inpcbinfo {int dummy; } ;
struct inpcb {scalar_t__ inp_wantcnt; scalar_t__ inp_state; struct socket* inp_socket; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct inpcb*) ;
 struct inpcb* FUNC_1 (struct inpcbinfo*,struct in6_addr*,int ,int) ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (struct socket*,int ) ;
 int FUNC_4 (struct socket*,int ) ;

__attribute__((used)) static struct inpcb *
FUNC_5(struct inpcbinfo *VAR_2,
    struct in6_addr *VAR_3, u_int VAR_4, int VAR_5)
{
 struct inpcb *VAR_6;


 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);


 if (VAR_6 != ((void*)0) && VAR_6->inp_wantcnt == VAR_1) {
  struct socket *VAR_7 = VAR_6->inp_socket;

  FUNC_3(VAR_7, 0);

  if (VAR_7->so_usecount == 0) {
   if (VAR_6->inp_state != VAR_0)
    FUNC_0(VAR_6);
   FUNC_2(VAR_6);
   VAR_6 = ((void*)0);
  } else {
   FUNC_4(VAR_7, 0);
  }
 }

 return (VAR_6);
}
