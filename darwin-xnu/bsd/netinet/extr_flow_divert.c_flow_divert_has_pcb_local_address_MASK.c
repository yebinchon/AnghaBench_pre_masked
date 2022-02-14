
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_addr; } ;
struct inpcb {scalar_t__ inp_lport; int in6p_laddr; TYPE_1__ inp_laddr; } ;
typedef int boolean_t ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static boolean_t
FUNC_1(const struct inpcb *VAR_1)
{
 return (VAR_1->inp_lport != 0
  && (VAR_1->inp_laddr.s_addr != VAR_0 || !FUNC_0(&VAR_1->in6p_laddr)));
}
