
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_traffic_class; int so_flags1; } ;


 scalar_t__ FUNC_0 (struct socket*) ;
 int VAR_0 ;
 int FUNC_1 (struct socket*,int ) ;

void
FUNC_2(struct socket *VAR_1)
{
 if (FUNC_0(VAR_1))
  VAR_1->so_flags1 &= ~(VAR_0);





 FUNC_1(VAR_1, VAR_1->so_traffic_class);
}
