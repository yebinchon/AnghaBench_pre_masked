
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int so_state; } ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct inpcb {int * inp_last_outifp; TYPE_2__ inp_laddr; TYPE_1__ inp_faddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 scalar_t__ FUNC_2 (struct inpcb*) ;
 struct inpcb* FUNC_3 (struct socket*) ;

int
FUNC_4(struct socket *VAR_5)
{
 struct inpcb *VAR_6;

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 == ((void*)0)



  )
  return (VAR_6 == ((void*)0) ? VAR_0 : VAR_2);
 if (VAR_6->inp_faddr.s_addr == VAR_3)
  return (VAR_1);

 FUNC_0(VAR_6);


 FUNC_1(VAR_6);

 VAR_6->inp_laddr.s_addr = VAR_3;
 VAR_5->so_state &= ~VAR_4;
 VAR_6->inp_last_outifp = ((void*)0);

 return (0);
}
