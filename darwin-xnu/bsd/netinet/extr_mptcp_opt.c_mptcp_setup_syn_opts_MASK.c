
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct socket {int so_flags; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct socket*,int *,unsigned int) ;
 unsigned int FUNC_1 (struct socket*,int *,unsigned int) ;

unsigned
FUNC_2(struct socket *VAR_1, u_char *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4;

 if (!(VAR_1->so_flags & VAR_0))
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 else
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);

 return (VAR_4);
}
