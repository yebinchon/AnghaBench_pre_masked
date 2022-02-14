
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct socket {int dummy; } ;
struct proc {int dummy; } ;
struct ifnet {int dummy; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,int ,int ,struct ifnet*,struct proc*) ;
 int FUNC_1 (struct socket*,int ,int ,struct ifnet*,struct proc*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_1, u_long VAR_2, caddr_t VAR_3, struct ifnet *VAR_4, struct proc *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 if (VAR_6 == VAR_0) {
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 }

 return VAR_6;
}
