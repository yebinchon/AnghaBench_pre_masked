
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_flagsext; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

boolean_t
FUNC_0(const struct tcpcb *VAR_3)
{
 return ((VAR_3->t_flagsext & VAR_1)? VAR_2 : VAR_0);
}
