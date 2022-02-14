
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int ecn_flags; int t_flagsext; } ;
struct socket {int so_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool
FUNC_0(struct tcpcb *VAR_3, struct socket *VAR_4)
{
 return(!((VAR_3->ecn_flags & VAR_1) ||
     (VAR_4->so_flags & VAR_0) ||
     (VAR_3->t_flagsext & VAR_2)));
}
