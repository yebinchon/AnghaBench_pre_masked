
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {int (* pru_send ) (struct socket*,int,struct mbuf*,struct sockaddr*,struct mbuf*,struct proc*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct socket*,int,struct mbuf*,struct sockaddr*,struct mbuf*,struct proc*) ;

__attribute__((used)) static int
FUNC_1(struct socket *VAR_1, int VAR_2, struct mbuf *VAR_3, struct sockaddr *VAR_4,
    struct mbuf *VAR_5, struct proc *VAR_6)
{
 return (VAR_0.pru_send(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6));
}
