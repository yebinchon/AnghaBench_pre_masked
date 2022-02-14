
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unpcb {TYPE_1__* unp_conn; struct socket* unp_socket; } ;
struct socket {scalar_t__ so_type; } ;
struct TYPE_2__ {struct socket* unp_socket; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct socket*) ;
 int FUNC_1 (struct socket*,int) ;
 int FUNC_2 (struct socket*,struct socket*) ;

__attribute__((used)) static void
FUNC_3(struct unpcb *VAR_1)
{
 struct socket *VAR_2 = VAR_1->unp_socket;
 struct socket *VAR_3;
 if (VAR_1->unp_socket->so_type == VAR_0 && VAR_1->unp_conn) {
  VAR_3 = VAR_1->unp_conn->unp_socket;
  FUNC_2(VAR_2, VAR_3);
  FUNC_0(VAR_3);
  FUNC_1(VAR_3, 1);
 }
}
