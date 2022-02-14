
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_flags1; int so_traffic_class; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

inline int
FUNC_1(struct socket *VAR_1)
{
 return ((VAR_1->so_flags1 & VAR_0) ||
  FUNC_0(VAR_1->so_traffic_class));
}
