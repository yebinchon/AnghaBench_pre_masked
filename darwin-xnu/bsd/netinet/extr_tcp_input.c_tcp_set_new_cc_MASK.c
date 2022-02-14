
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_char ;
struct tcpcb {scalar_t__ tcp_cc_index; } ;
struct socket {int dummy; } ;
struct inpcb {int dummy; } ;
struct TYPE_2__ {int (* switch_to ) (struct tcpcb*,scalar_t__) ;int (* cleanup ) (struct tcpcb*) ;} ;


 TYPE_1__* FUNC_0 (struct tcpcb*) ;
 int VAR_0 ;
 struct tcpcb* FUNC_1 (struct inpcb*) ;
 struct inpcb* FUNC_2 (struct socket*) ;
 int FUNC_3 (struct tcpcb*) ;
 int FUNC_4 (struct tcpcb*,scalar_t__) ;
 int FUNC_5 (struct tcpcb*) ;
 int FUNC_6 (struct tcpcb*,int *,int ) ;

__attribute__((used)) static void
FUNC_7(struct socket *VAR_1, uint16_t VAR_2)
{
 struct inpcb *VAR_3 = FUNC_2(VAR_1);
 struct tcpcb *VAR_4 = FUNC_1(VAR_3);
 u_char VAR_5 = 0;
 if (VAR_4->tcp_cc_index != VAR_2) {

  VAR_5 = VAR_4->tcp_cc_index;

  if (FUNC_0(VAR_4)->cleanup != ((void*)0))
   FUNC_0(VAR_4)->cleanup(VAR_4);
  VAR_4->tcp_cc_index = VAR_2;

  FUNC_5(VAR_4);

  if (FUNC_0(VAR_4)->switch_to != ((void*)0))
   FUNC_0(VAR_4)->switch_to(VAR_4, VAR_5);

  FUNC_6(VAR_4, ((void*)0), VAR_0);
 }
}
