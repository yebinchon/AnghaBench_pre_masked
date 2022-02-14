
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int snd_wnd; int max_sndwnd; int t_maxseg; } ;
struct socket {int so_flags1; int last_pid; } ;
struct inpcb {int necp_client_uuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct inpcb*) ;
 int FUNC_1 (struct inpcb*,int *,int *,int *) ;
 int FUNC_2 (struct socket*,int ) ;
 int FUNC_3 (struct socket*,int ) ;
 struct inpcb* FUNC_4 (struct socket*) ;
 struct tcpcb* FUNC_5 (struct socket*) ;
 int FUNC_6 (struct tcpcb*,int,int ) ;
 int FUNC_7 (struct tcpcb*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct socket *VAR_3)
{
 struct tcpcb *VAR_4 = FUNC_5(VAR_3);
 struct inpcb *VAR_5 = FUNC_4(VAR_3);
 int VAR_6 = 0;


 if (VAR_3->so_flags1 & VAR_2) {
  if (!FUNC_1(FUNC_4(VAR_3), ((void*)0), ((void*)0), ((void*)0)))
   return (VAR_0);


  FUNC_6(VAR_4, -1, VAR_1);
  VAR_4->snd_wnd = VAR_4->t_maxseg;
  VAR_4->max_sndwnd = VAR_4->snd_wnd;
 } else {
  VAR_6 = FUNC_7(VAR_4);
 }
 return (VAR_6);
}
