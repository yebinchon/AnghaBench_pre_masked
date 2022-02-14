
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct proc {int dummy; } ;
struct inpcb {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inpcb*,struct sockaddr*,struct proc*) ;
 struct inpcb* FUNC_1 (struct socket*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_3, struct sockaddr *VAR_4, struct proc *VAR_5)
{
 struct inpcb *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_3);







 if (VAR_4->sa_family != VAR_0) {
  VAR_7 = VAR_1;
 } else {
               ((struct sockaddr_in *)(void *)VAR_4)->sin_addr.s_addr = VAR_2;
  VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_5);
 }
 return VAR_7;
}
