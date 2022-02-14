
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcb {int inp_flags2; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

boolean_t
FUNC_0(struct inpcb *VAR_3)
{
 return (VAR_3->inp_flags2 & VAR_1) ? VAR_2 : VAR_0;
}
