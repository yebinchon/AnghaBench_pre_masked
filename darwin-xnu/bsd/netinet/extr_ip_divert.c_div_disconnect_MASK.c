
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*) ;

__attribute__((used)) static int
FUNC_1(struct socket *VAR_2)
{
 if ((VAR_2->so_state & VAR_1) == 0)
  return VAR_0;
 return FUNC_0(VAR_2);
}
