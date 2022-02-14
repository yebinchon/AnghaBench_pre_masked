
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct socket {int so_restrictions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

uint32_t
FUNC_0(struct socket *VAR_4)
{
 return (VAR_4->so_restrictions & (VAR_2 |
     VAR_3 |
     VAR_0 | VAR_1));
}
