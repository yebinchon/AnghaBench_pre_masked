
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_flags; } ;


 int VAR_0 ;

inline int
FUNC_0(struct socket *VAR_1)
{
 return ((VAR_1->so_flags & VAR_0) ? 1 : 0);
}
