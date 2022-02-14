
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct socket {int so_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_0(struct socket *VAR_4, u_int32_t *VAR_5)
{
 u_int32_t VAR_6 = *(VAR_5);





 if (VAR_6 != 0)
  return;

 if (VAR_4->so_state & VAR_2)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~(VAR_0);
 VAR_6 |= ((VAR_4->so_state & VAR_3) ? VAR_1 : 0);
 *(VAR_5) = VAR_6;
}
