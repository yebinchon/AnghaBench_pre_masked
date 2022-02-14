
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ so_traffic_class; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

inline int
FUNC_0(struct socket *VAR_2)
{
 return (VAR_2->so_traffic_class >= VAR_0 &&
     VAR_2->so_traffic_class <= VAR_1);
}
